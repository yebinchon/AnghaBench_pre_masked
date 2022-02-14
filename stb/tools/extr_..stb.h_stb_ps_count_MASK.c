
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_8__ {int ** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
struct TYPE_9__ {int count; } ;
typedef TYPE_3__ stb_ps_array ;
typedef int stb_ps ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;





int FUNC_3 (stb_ps *VAR_0)
{
    switch (3 & (int)(size_t) VAR_0) {
      case 129:
         return VAR_0 != ((void*)0);
      case 130: {
         stb_ps_bucket *VAR_1 = FUNC_1(VAR_0);
         return (VAR_1->p[0] != ((void*)0)) + (VAR_1->p[1] != ((void*)0)) +
                (VAR_1->p[2] != ((void*)0)) + (VAR_1->p[3] != ((void*)0));
      }
      case 131: {
         stb_ps_array *VAR_2 = FUNC_0(VAR_0);
         return VAR_2->count;
      }
      case 128: {
         stb_ps_hash *VAR_3 = FUNC_2(VAR_0);
         return VAR_3->count;
      }
   }
   return 0;
}
