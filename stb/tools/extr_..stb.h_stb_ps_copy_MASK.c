
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int table; int size; } ;
typedef TYPE_1__ stb_ps_hash ;
typedef int stb_ps_bucket ;
struct TYPE_9__ {int count; int * p; } ;
typedef TYPE_2__ stb_ps_array ;
typedef int stb_ps ;


 int * FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;




 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_8 (int ,int ,int ) ;

stb_ps *FUNC_9(stb_ps *VAR_1)
{
   int VAR_2;

    switch (3 & (int)(size_t) VAR_1) {
      case 129: return VAR_1;
      case 130: {
         stb_ps_bucket *VAR_3 = (stb_ps_bucket *) FUNC_7(sizeof(*VAR_3));
         *VAR_3 = *FUNC_4(VAR_1);
         return FUNC_1(VAR_3);
      }
      case 131: {
         stb_ps_array *VAR_4 = FUNC_3(VAR_1);
         stb_ps_array *VAR_5 = (stb_ps_array *) FUNC_7(sizeof(*VAR_5) + VAR_0 * sizeof(VAR_5->p[0]));
         VAR_5->count = VAR_4->count;
         for (VAR_2=0; VAR_2 < VAR_4->count; ++VAR_2)
            VAR_5->p[VAR_2] = VAR_4->p[VAR_2];
         return FUNC_0(VAR_5);
      }
      case 128: {
         stb_ps_hash *VAR_6 = FUNC_5(VAR_1);
         stb_ps_hash *VAR_7 = FUNC_8(VAR_6->size, VAR_6->size, VAR_6->table);
         return FUNC_2(VAR_7);
      }
   }
   FUNC_6(0);
   return ((void*)0);
}
