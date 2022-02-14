
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int mlen ;
struct TYPE_4__ {int* c; scalar_t__* u; } ;
struct TYPE_5__ {TYPE_1__ nonce; } ;
typedef TYPE_2__ CCM128_CONTEXT ;


 int FUNC_0 (int*,unsigned char const*,int) ;

int FUNC_1(CCM128_CONTEXT *VAR_0,
                        const unsigned char *VAR_1, size_t VAR_2, size_t VAR_3)
{
    unsigned int VAR_4 = VAR_0->nonce.c[0] & 7;

    if (VAR_2 < (14 - VAR_4))
        return -1;

    if (sizeof(VAR_3) == 8 && VAR_4 >= 3) {
        VAR_0->nonce.c[8] = (u8)(VAR_3 >> (56 % (sizeof(VAR_3) * 8)));
        VAR_0->nonce.c[9] = (u8)(VAR_3 >> (48 % (sizeof(VAR_3) * 8)));
        VAR_0->nonce.c[10] = (u8)(VAR_3 >> (40 % (sizeof(VAR_3) * 8)));
        VAR_0->nonce.c[11] = (u8)(VAR_3 >> (32 % (sizeof(VAR_3) * 8)));
    } else
        VAR_0->nonce.u[1] = 0;

    VAR_0->nonce.c[12] = (u8)(VAR_3 >> 24);
    VAR_0->nonce.c[13] = (u8)(VAR_3 >> 16);
    VAR_0->nonce.c[14] = (u8)(VAR_3 >> 8);
    VAR_0->nonce.c[15] = (u8)VAR_3;

    VAR_0->nonce.c[0] &= ~0x40;
    FUNC_0(&VAR_0->nonce.c[1], VAR_1, 14 - VAR_4);

    return 0;
}
