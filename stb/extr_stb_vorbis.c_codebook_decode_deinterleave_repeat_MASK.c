
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ last_seg; int bytes_in_seg; } ;
typedef TYPE_1__ vorb ;
struct TYPE_11__ {int dimensions; int lookup_type; int sorted_entries; int lookup_values; scalar_t__ sequence_p; int sparse; } ;
typedef TYPE_2__ Codebook ;


 float FUNC_0 (TYPE_2__*) ;
 float FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(vorb *VAR_3, Codebook *VAR_4, float **VAR_5, int VAR_6, int *VAR_7, int *VAR_8, int VAR_9, int VAR_10)
{
   int VAR_11 = *VAR_7;
   int VAR_12 = *VAR_8;
   int VAR_13,VAR_14, VAR_15 = VAR_4->dimensions;


   if (VAR_4->lookup_type == 0) return FUNC_4(VAR_3, VAR_2);

   while (VAR_10 > 0) {
      float VAR_16 = FUNC_0(VAR_4);
      FUNC_2(VAR_14,VAR_3,VAR_4);

      FUNC_3(!VAR_4->sparse || VAR_14 < VAR_4->sorted_entries);

      if (VAR_14 < 0) {
         if (!VAR_3->bytes_in_seg)
            if (VAR_3->last_seg) return VAR_0;
         return FUNC_4(VAR_3, VAR_2);
      }





      if (VAR_11 + VAR_12*VAR_6 + VAR_15 > VAR_9 * VAR_6) {
         VAR_15 = VAR_9*VAR_6 - (VAR_12*VAR_6 - VAR_11);
      }
      {
         VAR_14 *= VAR_4->dimensions;
         if (VAR_4->sequence_p) {
            for (VAR_13=0; VAR_13 < VAR_15; ++VAR_13) {
               float VAR_17 = FUNC_1(VAR_4,VAR_14+VAR_13) + VAR_16;
               if (VAR_5[VAR_11])
                  VAR_5[VAR_11][VAR_12] += VAR_17;
               if (++VAR_11 == VAR_6) { VAR_11 = 0; ++VAR_12; }
               VAR_16 = VAR_17;
            }
         } else {
            for (VAR_13=0; VAR_13 < VAR_15; ++VAR_13) {
               float VAR_18 = FUNC_1(VAR_4,VAR_14+VAR_13) + VAR_16;
               if (VAR_5[VAR_11])
                  VAR_5[VAR_11][VAR_12] += VAR_18;
               if (++VAR_11 == VAR_6) { VAR_11 = 0; ++VAR_12; }
            }
         }
      }

      VAR_10 -= VAR_15;
   }
   *VAR_7 = VAR_11;
   *VAR_8 = VAR_12;
   return VAR_1;
}
