
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sha256_ctx {int* H; scalar_t__ buflen; scalar_t__* total; } ;



__attribute__((used)) static void FUNC_0(struct sha256_ctx *VAR_0) {
 VAR_0->H[0] = 0x6a09e667;
 VAR_0->H[1] = 0xbb67ae85;
 VAR_0->H[2] = 0x3c6ef372;
 VAR_0->H[3] = 0xa54ff53a;
 VAR_0->H[4] = 0x510e527f;
 VAR_0->H[5] = 0x9b05688c;
 VAR_0->H[6] = 0x1f83d9ab;
 VAR_0->H[7] = 0x5be0cd19;

 VAR_0->total[0] = VAR_0->total[1] = 0;
 VAR_0->buflen = 0;
}
