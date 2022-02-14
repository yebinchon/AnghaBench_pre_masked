
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dx; int y; int len; } ;
typedef TYPE_1__ segment ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_1__) ;
 int VAR_6 ;

void FUNC_2(int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
   segment VAR_11;

   while (VAR_7 - VAR_2[VAR_10] > VAR_1) {
      FUNC_2(VAR_2[VAR_10] + VAR_1, 0, 0, VAR_10);
   }
   while (VAR_9 > VAR_0) {
      FUNC_2(VAR_7, VAR_8, VAR_0, VAR_10);
      VAR_9 -= VAR_0;
      VAR_7 += VAR_0*VAR_10;
      VAR_8 += VAR_0*!VAR_10;
   }

   VAR_11.dx = VAR_7 - VAR_2[VAR_10];
   VAR_11.y = VAR_8;
   VAR_11.len = VAR_9;
   VAR_3 += VAR_9 != 0;

   FUNC_0(VAR_11.y == VAR_8);
   FUNC_0(VAR_11.len == VAR_9);
   ++VAR_4[VAR_10];
   if (VAR_10)
      FUNC_1(VAR_5, VAR_11);
   else
      FUNC_1(VAR_6, VAR_11);
   VAR_2[VAR_10] = VAR_7;
}
