
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; void** table; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_8__ {int ** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
struct TYPE_9__ {int p; int count; } ;
typedef TYPE_3__ stb_ps_array ;
typedef int stb_ps ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_0 ;




 int FUNC_3 (void**,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (size_t) ;

int FUNC_6(stb_ps *VAR_1, void **VAR_2, int VAR_3 )
{
   int VAR_4,VAR_5=0;
    switch (3 & (int)(size_t) VAR_1) {
      case 129:
         if (VAR_1 == ((void*)0) || VAR_3 <= 0) return 0;
         VAR_2[0] = VAR_1;
         return 1;
      case 130: {
         stb_ps_bucket *VAR_6 = FUNC_1(VAR_1);
         for (VAR_4=0; VAR_4 < VAR_0; ++VAR_4)
            if (VAR_6->p[VAR_4] != ((void*)0) && VAR_5 < VAR_3)
               VAR_2[VAR_5++] = VAR_6->p[VAR_4];
         return VAR_5;
      }
      case 131: {
         stb_ps_array *VAR_7 = FUNC_0(VAR_1);
         VAR_5 = FUNC_4(VAR_3, VAR_7->count);
         FUNC_3(VAR_2, VAR_7->p, sizeof(*VAR_2) * VAR_5);
         return VAR_5;
      }
      case 128: {
         stb_ps_hash *VAR_8 = FUNC_2(VAR_1);
         if (VAR_3 <= 0) return 0;
         for (VAR_4=0; VAR_4 < VAR_8->count; ++VAR_4) {
             if (!FUNC_5((size_t)VAR_8->table[VAR_4])) {
               VAR_2[VAR_5++] = VAR_8->table[VAR_4];
               if (VAR_5 == VAR_3) break;
            }
         }
         return VAR_5;
      }
   }
   return 0;
}
