
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (void*) ;

void FUNC_3(void **VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
   void *VAR_4 = *VAR_0;
   if (VAR_3) {
      FUNC_0((char *) VAR_4 + VAR_2*VAR_1, (char *) VAR_4 + (VAR_2+VAR_3)*VAR_1, VAR_1 * (FUNC_1(VAR_4)-(VAR_2+VAR_3)));
      FUNC_2(VAR_4)->len -= VAR_3;
   }
   *VAR_0 = VAR_4;
}
