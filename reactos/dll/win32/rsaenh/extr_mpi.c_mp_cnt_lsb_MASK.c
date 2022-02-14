
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const mp_int *VAR_2)
{
   int VAR_3;
   mp_digit VAR_4, VAR_5;


   if (FUNC_0(VAR_2) == 1) {
      return 0;
   }


   for (VAR_3 = 0; VAR_3 < VAR_2->used && VAR_2->dp[VAR_3] == 0; VAR_3++);
   VAR_4 = VAR_2->dp[VAR_3];
   VAR_3 *= VAR_0;


   if ((VAR_4 & 1) == 0) {
      do {
         VAR_5 = VAR_4 & 15;
         VAR_3 += VAR_1[VAR_5];
         VAR_4 >>= 4;
      } while (VAR_5 == 0);
   }
   return VAR_3;
}
