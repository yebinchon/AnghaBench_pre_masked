
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__* count; } ;
typedef TYPE_1__ SHA1Context ;



__attribute__((used)) static void FUNC_0(SHA1Context *VAR_0){

  VAR_0->state[0] = 0x67452301;
  VAR_0->state[1] = 0xEFCDAB89;
  VAR_0->state[2] = 0x98BADCFE;
  VAR_0->state[3] = 0x10325476;
  VAR_0->state[4] = 0xC3D2E1F0;
  VAR_0->count[0] = VAR_0->count[1] = 0;
}
