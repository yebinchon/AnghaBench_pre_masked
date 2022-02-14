
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; void** table; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_8__ {void** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
struct TYPE_9__ {int count; void** p; } ;
typedef TYPE_3__ stb_ps_array ;
typedef int stb_ps ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_0 ;





void ** FUNC_3(stb_ps *VAR_1, int *VAR_2)
{
   static void *VAR_3;

    switch (3 & (int)(size_t) VAR_1) {
      case 129:
         if (VAR_1 == ((void*)0)) { *VAR_2 = 0; return ((void*)0); }
         VAR_3 = VAR_1;
         *VAR_2 = 1;
         return &VAR_3;
      case 130: {
         stb_ps_bucket *VAR_4 = FUNC_1(VAR_1);
         *VAR_2 = VAR_0;
         return VAR_4->p;
      }
      case 131: {
         stb_ps_array *VAR_5 = FUNC_0(VAR_1);
         *VAR_2 = VAR_5->count;
         return VAR_5->p;
      }
      case 128: {
         stb_ps_hash *VAR_6 = FUNC_2(VAR_1);
         *VAR_2 = VAR_6->size;
         return VAR_6->table;
      }
   }
   return ((void*)0);
}
