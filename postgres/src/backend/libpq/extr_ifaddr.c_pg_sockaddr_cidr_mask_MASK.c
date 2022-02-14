
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct TYPE_4__ {int* s6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; TYPE_1__ sin_addr; } ;
struct sockaddr_in {TYPE_2__ sin6_addr; TYPE_1__ sin_addr; } ;
typedef int mask6 ;
typedef int mask4 ;




 int FUNC_0 (struct sockaddr_storage*,struct sockaddr_in6*,int) ;
 int FUNC_1 (struct sockaddr_in6*,int ,int) ;
 int FUNC_2 (long) ;
 long FUNC_3 (char*,char**,int) ;

int
FUNC_4(struct sockaddr_storage *VAR_0, char *VAR_1, int VAR_2)
{
 long VAR_3;
 char *VAR_4;

 if (VAR_1 == ((void*)0))
 {
  VAR_3 = (VAR_2 == 129) ? 32 : 128;
 }
 else
 {
  VAR_3 = FUNC_3(VAR_1, &VAR_4, 10);
  if (*VAR_1 == '\0' || *VAR_4 != '\0')
   return -1;
 }

 switch (VAR_2)
 {
  case 129:
   {
    struct sockaddr_in VAR_5;
    long VAR_6;

    if (VAR_3 < 0 || VAR_3 > 32)
     return -1;
    FUNC_1(&VAR_5, 0, sizeof(VAR_5));

    if (VAR_3 > 0)
     VAR_6 = (0xffffffffUL << (32 - (int) VAR_3))
      & 0xffffffffUL;
    else
     VAR_6 = 0;
    VAR_5 = FUNC_2(VAR_6);
    FUNC_0(VAR_0, &VAR_5, sizeof(VAR_5));
    break;
   }
  default:
   return -1;
 }

 VAR_0->ss_family = VAR_2;
 return 0;
}
