
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int minval; int maxval; int guess; } ;
typedef TYPE_1__ stb_search ;






 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(stb_search *VAR_0, int *VAR_1)
{
   switch(VAR_0->mode) {
      case 131:
         if (VAR_0->minval == VAR_0->maxval) {
            *VAR_1 = VAR_0->minval;
            return 0;
         }
         FUNC_0(VAR_0->minval < VAR_0->maxval);

         VAR_0->guess = VAR_0->minval + (((unsigned) VAR_0->maxval - VAR_0->minval + 1) >> 1);
         break;

      case 130:
         if (VAR_0->minval == VAR_0->maxval) {
            *VAR_1 = VAR_0->minval;
            return 0;
         }
         FUNC_0(VAR_0->minval < VAR_0->maxval);

         VAR_0->guess = VAR_0->minval + (((unsigned) VAR_0->maxval - VAR_0->minval) >> 1);
         break;
      case 128:
      case 129:
         VAR_0->guess = VAR_0->maxval;
         break;
   }
   *VAR_1 = VAR_0->guess;
   return 1;
}
