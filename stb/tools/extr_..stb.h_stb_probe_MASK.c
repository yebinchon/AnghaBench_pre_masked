
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; scalar_t__ guess; scalar_t__ minval; scalar_t__ maxval; scalar_t__ step; } ;
typedef TYPE_1__ stb_search ;






 int FUNC_0 (TYPE_1__*,int*) ;

int FUNC_1(stb_search *VAR_0, int VAR_1, int *VAR_2)
{
   switch(VAR_0->mode) {
      case 128:
      case 129: {
         if (VAR_1 <= 0) {

            if (VAR_0->mode == 128)
               VAR_0->mode = 130;
            else
               VAR_0->mode = 131;
         } else {

            VAR_0->minval = VAR_0->maxval + 1;
            VAR_0->maxval = VAR_0->minval + VAR_0->step;
            VAR_0->step += VAR_0->step;
         }
         break;
      }
      case 130: {



         if (VAR_1 <= 0)
            VAR_0->maxval = VAR_0->guess;
         else
            VAR_0->minval = VAR_0->guess+1;
         break;
      }
      case 131: {



         if (VAR_1 < 0)
            VAR_0->maxval = VAR_0->guess-1;
         else
            VAR_0->minval = VAR_0->guess;
         break;
      }
   }
   return FUNC_0(VAR_0, VAR_2);
}
