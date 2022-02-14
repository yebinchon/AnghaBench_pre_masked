
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; void** table; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_8__ {void** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
struct TYPE_9__ {int count; void** p; } ;
typedef TYPE_3__ stb_ps_array ;
typedef void stb_ps ;


 TYPE_3__* FUNC_0 (void*) ;
 TYPE_2__* FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_3 (size_t) ;

int FUNC_4(stb_ps *VAR_3, void *VAR_4, int (*VAR_5)(void *VAR_6, void *VAR_7))
{
   int VAR_8;
    switch (3 & (int)(size_t) VAR_3) {
      case 129:
         if (VAR_3 == ((void*)0)) return VAR_2;
         return VAR_5(VAR_3, VAR_4);
      case 130: {
         stb_ps_bucket *VAR_9 = FUNC_1(VAR_3);
         for (VAR_8=0; VAR_8 < VAR_0; ++VAR_8)
            if (VAR_9->p[VAR_8] != ((void*)0))
               if (!VAR_5(VAR_9->p[VAR_8], VAR_4))
                  return VAR_1;
         return VAR_2;
      }
      case 131: {
         stb_ps_array *VAR_10 = FUNC_0(VAR_3);
         for (VAR_8=0; VAR_8 < VAR_10->count; ++VAR_8)
            if (!VAR_5(VAR_10->p[VAR_8], VAR_4))
               return VAR_1;
         return VAR_2;
      }
      case 128: {
         stb_ps_hash *VAR_11 = FUNC_2(VAR_3);
         for (VAR_8=0; VAR_8 < VAR_11->count; ++VAR_8)
              if (!FUNC_3((size_t)VAR_11->table[VAR_8]))
               if (!VAR_5(VAR_11->table[VAR_8], VAR_4))
                  return VAR_1;
         return VAR_2;
      }
   }
   return VAR_2;
}
