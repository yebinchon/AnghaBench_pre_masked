
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** state; scalar_t__ length; scalar_t__ curlen; } ;
struct hash_state {TYPE_1__ sha512; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct hash_state * VAR_0)
{
 VAR_0->sha512.curlen = 0;
 VAR_0->sha512.length = 0;
 VAR_0->sha512.state[0] = FUNC_0(0x6a09e667f3bcc908);
 VAR_0->sha512.state[1] = FUNC_0(0xbb67ae8584caa73b);
 VAR_0->sha512.state[2] = FUNC_0(0x3c6ef372fe94f82b);
 VAR_0->sha512.state[3] = FUNC_0(0xa54ff53a5f1d36f1);
 VAR_0->sha512.state[4] = FUNC_0(0x510e527fade682d1);
 VAR_0->sha512.state[5] = FUNC_0(0x9b05688c2b3e6c1f);
 VAR_0->sha512.state[6] = FUNC_0(0x1f83d9abfb41bd6b);
 VAR_0->sha512.state[7] = FUNC_0(0x5be0cd19137e2179);
}
