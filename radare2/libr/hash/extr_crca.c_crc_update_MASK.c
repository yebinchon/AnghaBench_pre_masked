
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int utcrc ;
typedef int ut8 ;
typedef int ut32 ;
struct TYPE_3__ {int crc; int size; int poly; scalar_t__ reflect; } ;
typedef TYPE_1__ R_CRC_CTX ;



void FUNC_0 (R_CRC_CTX *VAR_0, const ut8 *VAR_1, ut32 VAR_2) {
 utcrc VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = VAR_0->crc;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_1[VAR_5];
  if (VAR_0->reflect) {
   for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
    if (((VAR_4 >> VAR_6) ^ (VAR_4 >> (7 - VAR_6))) & 1) {
     VAR_4 ^= (1 << VAR_6) ^ (1 << (7 - VAR_6));
    }
   }
  }
  VAR_3 ^= VAR_4 << (VAR_0->size - 8);
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   VAR_3 = ((VAR_3 >> (VAR_0->size - 1)) & 1? VAR_0->poly: 0) ^ (VAR_3 << 1);
  }
 }
 VAR_0->crc = VAR_3;
}
