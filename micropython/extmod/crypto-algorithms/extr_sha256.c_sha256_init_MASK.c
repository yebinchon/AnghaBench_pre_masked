
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ bitlen; scalar_t__ datalen; } ;
typedef TYPE_1__ CRYAL_SHA256_CTX ;



void FUNC_0(CRYAL_SHA256_CTX *VAR_0)
{
 VAR_0->datalen = 0;
 VAR_0->bitlen = 0;
 VAR_0->state[0] = 0x6a09e667;
 VAR_0->state[1] = 0xbb67ae85;
 VAR_0->state[2] = 0x3c6ef372;
 VAR_0->state[3] = 0xa54ff53a;
 VAR_0->state[4] = 0x510e527f;
 VAR_0->state[5] = 0x9b05688c;
 VAR_0->state[6] = 0x1f83d9ab;
 VAR_0->state[7] = 0x5be0cd19;
}
