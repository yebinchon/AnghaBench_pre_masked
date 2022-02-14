
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
typedef TYPE_1__ fz_sha384 ;



void FUNC_0(fz_sha384 *VAR_0)
{
 VAR_0->count[0] = VAR_0->count[1] = 0;

 VAR_0->state[0] = 0xCBBB9D5DC1059ED8ull;
 VAR_0->state[1] = 0x629A292A367CD507ull;
 VAR_0->state[2] = 0x9159015A3070DD17ull;
 VAR_0->state[3] = 0x152FECD8F70E5939ull;
 VAR_0->state[4] = 0x67332667FFC00B31ull;
 VAR_0->state[5] = 0x8EB44A8768581511ull;
 VAR_0->state[6] = 0xDB0C2E0D64F98FA7ull;
 VAR_0->state[7] = 0x47B5481DBEFA4FA4ull;
}
