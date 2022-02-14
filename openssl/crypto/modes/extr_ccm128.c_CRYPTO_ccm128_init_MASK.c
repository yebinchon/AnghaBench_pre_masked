
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int block128_f ;
struct TYPE_4__ {int* c; } ;
struct TYPE_5__ {void* key; int block; scalar_t__ blocks; TYPE_1__ nonce; } ;
typedef TYPE_2__ CCM128_CONTEXT ;


 int FUNC_0 (int*,int ,int) ;

void FUNC_1(CCM128_CONTEXT *VAR_0,
                        unsigned int VAR_1, unsigned int VAR_2, void *VAR_3,
                        block128_f VAR_4)
{
    FUNC_0(VAR_0->nonce.c, 0, sizeof(VAR_0->nonce.c));
    VAR_0->nonce.c[0] = ((u8)(VAR_2 - 1) & 7) | (u8)(((VAR_1 - 2) / 2) & 7) << 3;
    VAR_0->blocks = 0;
    VAR_0->block = VAR_4;
    VAR_0->key = VAR_3;
}
