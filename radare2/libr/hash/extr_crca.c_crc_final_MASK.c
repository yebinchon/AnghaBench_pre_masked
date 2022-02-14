
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int utcrc ;
struct TYPE_3__ {int crc; int size; int xout; scalar_t__ reflect; } ;
typedef TYPE_1__ R_CRC_CTX ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (R_CRC_CTX *VAR_0, utcrc *VAR_1) {
 utcrc VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->crc;
 VAR_2 &= (((FUNC_0(1) << (VAR_0->size - 1)) - 1) << 1) | 1;
 if (VAR_0->reflect) {
  for (VAR_3 = 0; VAR_3 < (VAR_0->size >> 1); VAR_3++) {
   if (((VAR_2 >> VAR_3) ^ (VAR_2 >> (VAR_0->size - 1 - VAR_3))) & 1) {
    VAR_2 ^= (FUNC_0(1) << VAR_3) ^ (FUNC_0(1) << (VAR_0->size - 1 - VAR_3));
   }
  }
 }

 *VAR_1 = VAR_2 ^ VAR_0->xout;
}
