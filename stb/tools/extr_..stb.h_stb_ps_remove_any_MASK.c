
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t stb_uint32 ;
struct TYPE_8__ {void** table; size_t any_offset; size_t mask; int count_deletes; int count; int shrink_threshhold; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_9__ {void** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
struct TYPE_10__ {int count; void** p; } ;
typedef TYPE_3__ stb_ps_array ;
typedef int stb_ps ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;




 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_5 (size_t) ;
 int * FUNC_6 (int *,void*) ;

stb_ps *FUNC_7(stb_ps *VAR_3, void **VAR_4)
{
   FUNC_3(VAR_3 != ((void*)0));
    switch (3 & (int)(size_t) VAR_3) {
      case 129:
         *VAR_4 = VAR_3;
         return ((void*)0);
      case 130: {
         stb_ps_bucket *VAR_5 = FUNC_1(VAR_3);
         int VAR_6=0, VAR_7=0, VAR_8=0;
         FUNC_3(VAR_0 == 4);
         if (VAR_5->p[0]) { ++VAR_6; VAR_8 = 0; }
         if (VAR_5->p[1]) { ++VAR_6; VAR_7 = VAR_8; VAR_8 = 1; }
         if (VAR_5->p[2]) { ++VAR_6; VAR_7 = VAR_8; VAR_8 = 2; }
         if (VAR_5->p[3]) { ++VAR_6; VAR_7 = VAR_8; VAR_8 = 3; }
         *VAR_4 = VAR_5->p[VAR_8];
         VAR_5->p[VAR_8] = 0;
         if (VAR_6 == 2) {
            void *VAR_9 = VAR_5->p[VAR_7];
            FUNC_4(VAR_5);
            return (stb_ps *) VAR_9;
         }
         return VAR_3;
      }
      case 131: {
         stb_ps_array *VAR_10 = FUNC_0(VAR_3);
         *VAR_4 = VAR_10->p[VAR_10->count-1];
         if (VAR_10->count == 4)
            return FUNC_6(VAR_3, *VAR_4);
         --VAR_10->count;
         return VAR_3;
      }
      case 128: {
         stb_ps_hash *VAR_11 = FUNC_2(VAR_3);
         void **VAR_12 = VAR_11->table;
         stb_uint32 VAR_13 = VAR_11->any_offset;
          while (FUNC_5((size_t)VAR_12[VAR_13]))
            VAR_13 = (VAR_13 + 1) & VAR_11->mask;
         *VAR_4 = VAR_12[VAR_13];
         VAR_11->any_offset = (VAR_13+1) & VAR_11->mask;

         if (VAR_11->count-1 < VAR_2 || VAR_11->count-1 == VAR_11->shrink_threshhold)
            return FUNC_6(VAR_3, *VAR_4);
         VAR_12[VAR_13] = VAR_1;
         -- VAR_11->count;
         ++ VAR_11->count_deletes;
         return VAR_3;
      }
   }
   return VAR_3;
}
