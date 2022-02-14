
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid_bits; int acc; } ;
typedef TYPE_1__ vorb ;
typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static uint32 FUNC_1(vorb *VAR_2, int VAR_3)
{
   uint32 VAR_4;

   if (VAR_2->valid_bits < 0) return 0;
   if (VAR_2->valid_bits < VAR_3) {
      if (VAR_3 > 24) {

         VAR_4 = FUNC_1(VAR_2, 24);
         VAR_4 += FUNC_1(VAR_2, VAR_3-24) << 24;
         return VAR_4;
      }
      if (VAR_2->valid_bits == 0) VAR_2->acc = 0;
      while (VAR_2->valid_bits < VAR_3) {
         int VAR_5 = FUNC_0(VAR_2);
         if (VAR_5 == VAR_0) {
            VAR_2->valid_bits = VAR_1;
            return 0;
         }
         VAR_2->acc += VAR_5 << VAR_2->valid_bits;
         VAR_2->valid_bits += 8;
      }
   }
   if (VAR_2->valid_bits < 0) return 0;
   VAR_4 = VAR_2->acc & ((1 << VAR_3)-1);
   VAR_2->acc >>= VAR_3;
   VAR_2->valid_bits -= VAR_3;
   return VAR_4;
}
