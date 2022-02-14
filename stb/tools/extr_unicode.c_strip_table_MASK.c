
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uval ;
struct TYPE_3__ {int length; scalar_t__* input; scalar_t__ dont_care; } ;
typedef TYPE_1__ table ;



int FUNC_0(table *VAR_0, int VAR_1)
{
   uval VAR_2;
   int VAR_3 = VAR_0->length-1;
   while (VAR_0->input[VAR_3] == VAR_0->dont_care)
      --VAR_3;
   VAR_2 = VAR_0->input[VAR_3];

   while (VAR_3 >= 0x10000) {
      if (VAR_0->input[VAR_3] != VAR_2 && VAR_0->input[VAR_3] != VAR_0->dont_care) {
         if (VAR_1)
            --VAR_1;
         else
            break;
      }
      --VAR_3;
   }
   return VAR_3+1;
}
