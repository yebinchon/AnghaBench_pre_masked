
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int pad; size_t keylen; size_t ivlen; unsigned int mode; size_t blocksize; int libctx; int const* hw; int flags; } ;
typedef int PROV_CIPHER_HW ;
typedef TYPE_1__ PROV_CIPHER_CTX ;


 int FUNC_0 (void*) ;

void FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2,
                            size_t VAR_3, unsigned int VAR_4, uint64_t VAR_5,
                            const PROV_CIPHER_HW *VAR_6, void *VAR_7)
{
    PROV_CIPHER_CTX *VAR_8 = (PROV_CIPHER_CTX *)VAR_0;

    VAR_8->flags = VAR_5;
    VAR_8->pad = 1;
    VAR_8->keylen = ((VAR_1) / 8);
    VAR_8->ivlen = ((VAR_3) / 8);
    VAR_8->hw = VAR_6;
    VAR_8->mode = VAR_4;
    VAR_8->blocksize = VAR_2 / 8;
    if (VAR_7 != ((void*)0))
        VAR_8->libctx = FUNC_0(VAR_7);
}
