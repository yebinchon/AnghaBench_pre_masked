
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t S_addr; } ;
struct in_addr {TYPE_1__ S_un; } ;
typedef size_t ULONG ;
typedef char CHAR ;



int FUNC_0(const char *VAR_0, struct in_addr *VAR_1)

{
 ULONG VAR_2[4] = {0,0,0,0};
 ULONG VAR_3 = 0;

 if(!VAR_0)
  return 0;

 while(*VAR_0)
 {
  CHAR VAR_4 = *VAR_0;
  VAR_0++;

  if(VAR_4 == '.')
  {
   VAR_3++;
   continue;
  }

  if(VAR_4 < '0' || VAR_4 > '9')
   return 0;

  VAR_2[VAR_3] *= 10;
  VAR_2[VAR_3] += (VAR_4 - '0');

  if(VAR_2[VAR_3] > 255)
   return 0;
  }

 VAR_1->S_un.S_addr = (VAR_2[3] << 24) + (VAR_2[2] << 16) + (VAR_2[1] << 8) + VAR_2[0];
 return 1;
}
