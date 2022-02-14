
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t stb_uint32 ;
struct TYPE_7__ {size_t mask; void** table; } ;
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (size_t) ;

int FUNC_7(stb_ps *VAR_6, void *VAR_7)
{
    int VAR_8, VAR_9 = 3 & (int)(size_t) VAR_6;
    FUNC_3((3 & (int)(size_t) VAR_7) == VAR_5);
   FUNC_3(FUNC_5(VAR_7));

   if (VAR_9 == VAR_5)
      return VAR_7 == VAR_6;
   if (VAR_9 == VAR_4) {
      stb_ps_bucket *VAR_10 = FUNC_1(VAR_6);
      FUNC_3(VAR_0 == 4);
      if (VAR_10->p[0] == VAR_7 || VAR_10->p[1] == VAR_7 ||
          VAR_10->p[2] == VAR_7 || VAR_10->p[3] == VAR_7)
          return VAR_2;
      return VAR_1;
   }
   if (VAR_9 == VAR_3) {
      stb_ps_array *VAR_11 = FUNC_0(VAR_6);
      for (VAR_8=0; VAR_8 < VAR_11->count; ++VAR_8)
         if (VAR_11->p[VAR_8] == VAR_7)
            return VAR_2;
      return VAR_1;
   } else {
      stb_ps_hash *VAR_12 = FUNC_2(VAR_6);
      stb_uint32 VAR_13 = FUNC_4(VAR_7);
      stb_uint32 VAR_14, VAR_15 = VAR_13 & VAR_12->mask;
      void **VAR_16 = VAR_12->table;
      if (VAR_16[VAR_15] == VAR_7) return VAR_2;
      if (VAR_16[VAR_15] == ((void*)0)) return VAR_1;
      VAR_14 = FUNC_6(VAR_13) | 1;
      do {
         VAR_15 = (VAR_15 + VAR_14) & VAR_12->mask;
         if (VAR_16[VAR_15] == VAR_7) return VAR_2;
      } while (VAR_16[VAR_15] != ((void*)0));
      return VAR_1;
   }
}
