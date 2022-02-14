
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int env; } ;
typedef TYPE_1__ fcgi_request ;


 int FUNC_0 (unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*,unsigned int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(fcgi_request *VAR_0, unsigned char *VAR_1, unsigned char *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 while (VAR_1 < VAR_2) {
  VAR_3 = *VAR_1++;
  if (FUNC_1(VAR_3 >= 128)) {
   if (FUNC_1(VAR_1 + 3 >= VAR_2)) return 0;
   VAR_3 = ((VAR_3 & 0x7f) << 24);
   VAR_3 |= (*VAR_1++ << 16);
   VAR_3 |= (*VAR_1++ << 8);
   VAR_3 |= *VAR_1++;
  }
  if (FUNC_1(VAR_1 >= VAR_2)) return 0;
  VAR_4 = *VAR_1++;
  if (FUNC_1(VAR_4 >= 128)) {
   if (FUNC_1(VAR_1 + 3 >= VAR_2)) return 0;
   VAR_4 = ((VAR_4 & 0x7f) << 24);
   VAR_4 |= (*VAR_1++ << 16);
   VAR_4 |= (*VAR_1++ << 8);
   VAR_4 |= *VAR_1++;
  }
  if (FUNC_1(VAR_3 + VAR_4 > (unsigned int) (VAR_2 - VAR_1))) {

   return 0;
  }
  FUNC_2(&VAR_0->env, FUNC_0(VAR_1, VAR_3), (char*)VAR_1, VAR_3, (char*)VAR_1 + VAR_3, VAR_4);
  VAR_1 += VAR_3 + VAR_4;
 }
 return 1;
}
