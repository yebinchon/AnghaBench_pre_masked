
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u64 ;
typedef int (* block128_f ) (unsigned char*,unsigned char*,void*) ;
struct TYPE_6__ {unsigned char* c; } ;
struct TYPE_5__ {unsigned char* c; int* u; } ;
struct TYPE_7__ {int blocks; TYPE_2__ nonce; TYPE_1__ cmac; void* key; int (* block ) (unsigned char*,unsigned char*,void*) ;} ;
typedef TYPE_3__ CCM128_CONTEXT ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,void*) ;
 int FUNC_4 (unsigned char*,unsigned char*,void*) ;
 int FUNC_5 (unsigned char*,unsigned char*,void*) ;
 int FUNC_6 (unsigned char*,unsigned char*,void*) ;
 int FUNC_7 (unsigned char*,unsigned char*,void*) ;
 int FUNC_8 (unsigned char*,unsigned char*,void*) ;

int FUNC_9(CCM128_CONTEXT *VAR_0,
                          const unsigned char *VAR_1, unsigned char *VAR_2,
                          size_t VAR_3)
{
    size_t VAR_4;
    unsigned int VAR_5, VAR_6;
    unsigned char VAR_7 = VAR_0->nonce.c[0];
    block128_f VAR_8 = VAR_0->block;
    void *VAR_9 = VAR_0->key;
    union {
        u64 u[2];
        u8 c[16];
    } VAR_10;

    if (!(VAR_7 & 0x40))
        (*VAR_8) (VAR_0->nonce.c, VAR_0->cmac.c, VAR_9), VAR_0->blocks++;

    VAR_0->nonce.c[0] = VAR_6 = VAR_7 & 7;
    for (VAR_4 = 0, VAR_5 = 15 - VAR_6; VAR_5 < 15; ++VAR_5) {
        VAR_4 |= VAR_0->nonce.c[VAR_5];
        VAR_0->nonce.c[VAR_5] = 0;
        VAR_4 <<= 8;
    }
    VAR_4 |= VAR_0->nonce.c[15];
    VAR_0->nonce.c[15] = 1;

    if (VAR_4 != VAR_3)
        return -1;

    VAR_0->blocks += ((VAR_3 + 15) >> 3) | 1;
    if (VAR_0->blocks > (FUNC_0(1) << 61))
        return -2;

    while (VAR_3 >= 16) {
        VAR_0->cmac.u[0] ^= ((u64 *)VAR_1)[0];
        VAR_0->cmac.u[1] ^= ((u64 *)VAR_1)[1];

        (*VAR_8) (VAR_0->cmac.c, VAR_0->cmac.c, VAR_9);
        (*VAR_8) (VAR_0->nonce.c, VAR_10.c, VAR_9);
        FUNC_1(VAR_0->nonce.c);





        ((u64 *)VAR_2)[0] = VAR_10.u[0] ^ ((u64 *)VAR_1)[0];
        ((u64 *)VAR_2)[1] = VAR_10.u[1] ^ ((u64 *)VAR_1)[1];

        VAR_1 += 16;
        VAR_2 += 16;
        VAR_3 -= 16;
    }

    if (VAR_3) {
        for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
            VAR_0->cmac.c[VAR_5] ^= VAR_1[VAR_5];
        (*VAR_8) (VAR_0->cmac.c, VAR_0->cmac.c, VAR_9);
        (*VAR_8) (VAR_0->nonce.c, VAR_10.c, VAR_9);
        for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
            VAR_2[VAR_5] = VAR_10.c[VAR_5] ^ VAR_1[VAR_5];
    }

    for (VAR_5 = 15 - VAR_6; VAR_5 < 16; ++VAR_5)
        VAR_0->nonce.c[VAR_5] = 0;

    (*VAR_8) (VAR_0->nonce.c, VAR_10.c, VAR_9);
    VAR_0->cmac.u[0] ^= VAR_10.u[0];
    VAR_0->cmac.u[1] ^= VAR_10.u[1];

    VAR_0->nonce.c[0] = VAR_7;

    return 0;
}
