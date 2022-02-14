
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; scalar_t__ count; int * f; } ;
typedef TYPE_1__ SHA_CTX ;


 int VAR_0 ;

void FUNC_0(SHA_CTX* VAR_1) {
    VAR_1->f = &VAR_0;
    VAR_1->state[0] = 0x67452301;
    VAR_1->state[1] = 0xEFCDAB89;
    VAR_1->state[2] = 0x98BADCFE;
    VAR_1->state[3] = 0x10325476;
    VAR_1->state[4] = 0xC3D2E1F0;
    VAR_1->count = 0;
}
