
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t stb_uint32 ;
struct TYPE_14__ {void** p; int count; size_t mask; void** table; int count_deletes; int grow_threshhold; int size; int rehash_threshhold; } ;
typedef TYPE_1__ stb_ps_hash ;
struct TYPE_15__ {int ** p; } ;
typedef TYPE_2__ stb_ps_bucket ;
typedef TYPE_1__ stb_ps_array ;
typedef int stb_ps ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;




 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (void**,TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (TYPE_2__*) ;
 size_t FUNC_13 (void*) ;
 int FUNC_14 (int) ;
 int VAR_2 ;
 int FUNC_15 (size_t) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (int *,void*) ;
 TYPE_1__* FUNC_18 (int,int,void**) ;
 int FUNC_19 (size_t) ;

stb_ps * FUNC_20 (stb_ps *VAR_3, void *VAR_4)
{



   if (VAR_4 == ((void*)0)) return VAR_3;
    FUNC_6((3 & (int)(size_t) VAR_4) == 129);
   FUNC_6(FUNC_16(VAR_4));
   FUNC_6(VAR_4 != VAR_1);

    switch (3 & (int)(size_t) VAR_3) {
      case 129:
         if (VAR_3 == ((void*)0)) return (stb_ps *) VAR_4;
         return FUNC_1(FUNC_11(VAR_3,VAR_4));

      case 130: {
         stb_ps_bucket *VAR_5 = FUNC_4(VAR_3);
         stb_ps_array *VAR_6;
         FUNC_6(VAR_0 == 4);
         if (VAR_5->p[0] == ((void*)0)) { VAR_5->p[0] = VAR_4; return VAR_3; }
         if (VAR_5->p[1] == ((void*)0)) { VAR_5->p[1] = VAR_4; return VAR_3; }
         if (VAR_5->p[2] == ((void*)0)) { VAR_5->p[2] = VAR_4; return VAR_3; }
         if (VAR_5->p[3] == ((void*)0)) { VAR_5->p[3] = VAR_4; return VAR_3; }
         VAR_6 = (stb_ps_array *) FUNC_8(sizeof(*VAR_6) + 7 * sizeof(VAR_6->p[0]));
         FUNC_9(VAR_6->p, VAR_5, sizeof(*VAR_5));
         VAR_6->p[4] = VAR_4;
         VAR_6->count = 5;
         FUNC_12(VAR_5);
         return FUNC_0(VAR_6);
      }

      case 131: {
         stb_ps_array *VAR_7 = FUNC_3(VAR_3);
         if (VAR_7->count == VAR_2) {

            stb_ps_hash *VAR_8 = FUNC_18(2 << FUNC_14(VAR_7->count), VAR_7->count, VAR_7->p);
            FUNC_7(VAR_7);
            return FUNC_20(FUNC_2(VAR_8), VAR_4);
         }


         if ((VAR_7->count & (VAR_7->count-1))==0) {
            int VAR_9 = VAR_7->count*2;



            if (VAR_9 + VAR_7->count > VAR_2)
               VAR_9 = VAR_2;
            VAR_7 = (stb_ps_array *) FUNC_10(VAR_7, sizeof(*VAR_7) + (VAR_9-1) * sizeof(VAR_7->p[0]));
         }
         VAR_7->p[VAR_7->count++] = VAR_4;
         return FUNC_0(VAR_7);
      }
      case 128: {
         stb_ps_hash *VAR_10 = FUNC_5(VAR_3);
         stb_uint32 VAR_11 = FUNC_13(VAR_4);
         stb_uint32 VAR_12 = VAR_11 & VAR_10->mask;
         void **VAR_13 = VAR_10->table;

          if (!FUNC_15((size_t)VAR_13[VAR_12])) {
            stb_uint32 VAR_14 = FUNC_19(VAR_11) | 1;
            do {
               VAR_12 = (VAR_12 + VAR_14) & VAR_10->mask;
            } while (!FUNC_15((size_t)VAR_13[VAR_12]));
         }
         if (VAR_13[VAR_12] == VAR_1)
            -- VAR_10->count_deletes;
         VAR_13[VAR_12] = VAR_4;
         ++ VAR_10->count;
         if (VAR_10->count == VAR_10->grow_threshhold) {
            stb_ps_hash *VAR_15 = FUNC_18(VAR_10->size*2, VAR_10->size, VAR_13);
            FUNC_7(VAR_10);
            return FUNC_2(VAR_15);
         }
         if (VAR_10->count + VAR_10->count_deletes == VAR_10->rehash_threshhold) {
            stb_ps_hash *VAR_16 = FUNC_18(VAR_10->size, VAR_10->size, VAR_13);
            FUNC_7(VAR_10);
            return FUNC_2(VAR_16);
         }
         return VAR_3;
      }
   }
   return ((void*)0);
}
