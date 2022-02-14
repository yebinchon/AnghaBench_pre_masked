
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; int size; void** table; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_8__ {int ** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
struct TYPE_9__ {int count; int p; } ;
typedef TYPE_3__ stb_ps_array ;
typedef int stb_ps ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_0 ;




 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (void**,int ,int) ;
 int FUNC_5 (size_t) ;

void ** FUNC_6(stb_ps *VAR_1, int *VAR_2)
{
   int VAR_3,VAR_4=0;
   void **VAR_5 = ((void*)0);
    switch (3 & (int)(size_t) VAR_1) {
      case 129:
         if (VAR_1 == ((void*)0)) { *VAR_2 = 0; return ((void*)0); }
         VAR_5 = (void **) FUNC_3(sizeof(*VAR_5) * 1);
         VAR_5[0] = VAR_1;
         *VAR_2 = 1;
         return VAR_5;
      case 130: {
         stb_ps_bucket *VAR_6 = FUNC_1(VAR_1);
         VAR_5 = (void **) FUNC_3(sizeof(*VAR_5) * VAR_0);
         for (VAR_3=0; VAR_3 < VAR_0; ++VAR_3)
            if (VAR_6->p[VAR_3] != ((void*)0))
               VAR_5[VAR_4++] = VAR_6->p[VAR_3];
         break;
      }
      case 131: {
         stb_ps_array *VAR_7 = FUNC_0(VAR_1);
         VAR_5 = (void **) FUNC_3(sizeof(*VAR_5) * VAR_7->count);
         FUNC_4(VAR_5, VAR_7->p, sizeof(*VAR_5) * VAR_7->count);
         *VAR_2 = VAR_7->count;
         return VAR_5;
      }
      case 128: {
         stb_ps_hash *VAR_8 = FUNC_2(VAR_1);
         VAR_5 = (void **) FUNC_3(sizeof(*VAR_5) * VAR_8->count);
         for (VAR_3=0; VAR_3 < VAR_8->size; ++VAR_3)
              if (!FUNC_5((size_t)VAR_8->table[VAR_3]))
               VAR_5[VAR_4++] = VAR_8->table[VAR_3];
         break;
      }
   }
   *VAR_2 = VAR_4;
   return VAR_5;
}
