
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
typedef TYPE_1__ fz_sha512 ;



void FUNC_0(fz_sha512 *VAR_0)
{
 VAR_0->count[0] = VAR_0->count[1] = 0;

 VAR_0->state[0] = 0x6A09E667F3BCC908ull;
 VAR_0->state[1] = 0xBB67AE8584CAA73Bull;
 VAR_0->state[2] = 0x3C6EF372FE94F82Bull;
 VAR_0->state[3] = 0xA54FF53A5F1D36F1ull;
 VAR_0->state[4] = 0x510E527FADE682D1ull;
 VAR_0->state[5] = 0x9B05688C2B3E6C1Full;
 VAR_0->state[6] = 0x1F83D9ABFB41BD6Bull;
 VAR_0->state[7] = 0x5BE0CD19137E2179ull;
}
