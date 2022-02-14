
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t stb_uint32 ;
struct TYPE_14__ {int count; void** p; size_t mask; void** table; int size; int shrink_threshhold; int count_deletes; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_15__ {void** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
typedef TYPE_1__ stb_ps_array ;
typedef void stb_ps ;


 void* FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (void*) ;
 TYPE_2__* FUNC_4 (void*) ;
 TYPE_1__* FUNC_5 (void*) ;
 int VAR_0 ;
 void* VAR_1 ;




 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;
 TYPE_2__* FUNC_9 (void**) ;
 int FUNC_10 (TYPE_2__*) ;
 size_t FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 int VAR_2 ;
 int FUNC_13 (size_t) ;
 int FUNC_14 (void*,void*) ;
 TYPE_1__* FUNC_15 (int,int,void**) ;
 int FUNC_16 (size_t) ;

stb_ps *FUNC_17(stb_ps *VAR_3, void *VAR_4)
{



    FUNC_6((3 & (int)(size_t) VAR_4) == 129);
   if (VAR_4 == ((void*)0)) return VAR_3;
    switch (3 & (int)(size_t) VAR_3) {
      case 129:
         return VAR_3 == VAR_4 ? ((void*)0) : VAR_3;
      case 130: {
         stb_ps_bucket *VAR_5 = FUNC_4(VAR_3);
         int VAR_6=0;
         FUNC_6(VAR_0 == 4);
         if (VAR_5->p[0] == VAR_4) VAR_5->p[0] = ((void*)0); else VAR_6 += (VAR_5->p[0] != ((void*)0));
         if (VAR_5->p[1] == VAR_4) VAR_5->p[1] = ((void*)0); else VAR_6 += (VAR_5->p[1] != ((void*)0));
         if (VAR_5->p[2] == VAR_4) VAR_5->p[2] = ((void*)0); else VAR_6 += (VAR_5->p[2] != ((void*)0));
         if (VAR_5->p[3] == VAR_4) VAR_5->p[3] = ((void*)0); else VAR_6 += (VAR_5->p[3] != ((void*)0));
         if (VAR_6 == 1) {
            VAR_4 = VAR_5->p[0];
            if (VAR_4 == ((void*)0)) VAR_4 = VAR_5->p[1];
            if (VAR_4 == ((void*)0)) VAR_4 = VAR_5->p[2];
            if (VAR_4 == ((void*)0)) VAR_4 = VAR_5->p[3];
            FUNC_6(VAR_4 != ((void*)0));
            FUNC_10(VAR_5);
            return (stb_ps *) VAR_4;
         }
         return VAR_3;
      }
      case 131: {
         stb_ps_array *VAR_7 = FUNC_3(VAR_3);
         int VAR_8;
         for (VAR_8=0; VAR_8 < VAR_7->count; ++VAR_8) {
            if (VAR_7->p[VAR_8] == VAR_4) {
               VAR_7->p[VAR_8] = VAR_7->p[--VAR_7->count];
               if (VAR_7->count == 3) {
                  stb_ps_bucket *VAR_9 = FUNC_9(VAR_7->p);
                  FUNC_7(VAR_7);
                  return FUNC_1(VAR_9);
               }
               return VAR_3;
            }
         }
         return VAR_3;
      }
      case 128: {
         stb_ps_hash *VAR_10 = FUNC_5(VAR_3);
         stb_uint32 VAR_11 = FUNC_11(VAR_4);
         stb_uint32 VAR_12, VAR_13 = VAR_11 & VAR_10->mask;
         void **VAR_14 = VAR_10->table;
         if (VAR_14[VAR_13] != VAR_4) {
            VAR_12 = FUNC_16(VAR_11) | 1;
            do {
               VAR_13 = (VAR_13 + VAR_12) & VAR_10->mask;
            } while (VAR_14[VAR_13] != VAR_4);
         }
         VAR_14[VAR_13] = VAR_1;
         -- VAR_10->count;
         ++ VAR_10->count_deletes;

         if (VAR_10->count < VAR_2) {
            int VAR_15 = 1 << FUNC_12(VAR_2);
            if (VAR_10->count < VAR_15) {
               stb_ps_array *VAR_16 = (stb_ps_array *) FUNC_8(sizeof(*VAR_16) + (VAR_15-1) * sizeof(VAR_16->p[0]));
               int VAR_17,VAR_18=0;
               for (VAR_17=0; VAR_17 < VAR_10->size; ++VAR_17)
                    if (!FUNC_13((size_t)VAR_14[VAR_17]))
                     VAR_16->p[VAR_18++] = VAR_14[VAR_17];
               FUNC_6(VAR_18 == VAR_10->count);
               VAR_16->count = VAR_18;
               FUNC_7(VAR_10);
               return FUNC_0(VAR_16);
            }
         }
         if (VAR_10->count == VAR_10->shrink_threshhold) {
            stb_ps_hash *VAR_19 = FUNC_15(VAR_10->size >> 1, VAR_10->size, VAR_14);
            FUNC_7(VAR_10);
            return FUNC_2(VAR_19);
         }
         return VAR_3;
      }
   }
   return VAR_3;
}
