
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t keylen; int * cipher; int * ctx_df; int * ctx; } ;
struct TYPE_5__ {TYPE_2__ ctr; } ;
struct TYPE_7__ {int type; size_t strength; size_t seedlen; int flags; size_t min_entropylen; int max_entropylen; int min_noncelen; int max_perslen; int max_adinlen; int max_request; void* max_noncelen; int * meth; int libctx; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_CTR ;
typedef TYPE_3__ RAND_DRBG ;
typedef int EVP_CIPHER ;


 void* VAR_0 ;
 void* FUNC_0 () ;
 int * FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,unsigned char const*,int *,int) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;

int FUNC_5(RAND_DRBG *VAR_5)
{
    RAND_DRBG_CTR *VAR_6 = &VAR_5->data.ctr;
    size_t VAR_7;
    EVP_CIPHER *VAR_8 = ((void*)0);

    switch (VAR_5->type) {
    default:

        return 0;
    case 130:
        VAR_7 = 16;
        VAR_8 = FUNC_1(VAR_5->libctx, "AES-128-ECB", "");
        break;
    case 129:
        VAR_7 = 24;
        VAR_8 = FUNC_1(VAR_5->libctx, "AES-192-ECB", "");
        break;
    case 128:
        VAR_7 = 32;
        VAR_8 = FUNC_1(VAR_5->libctx, "AES-256-ECB", "");
        break;
    }
    if (VAR_8 == ((void*)0))
        return 0;

    FUNC_2(VAR_6->cipher);
    VAR_6->cipher = VAR_8;

    VAR_5->meth = &VAR_4;

    VAR_6->keylen = VAR_7;
    if (VAR_6->ctx == ((void*)0))
        VAR_6->ctx = FUNC_0();
    if (VAR_6->ctx == ((void*)0))
        return 0;
    VAR_5->strength = VAR_7 * 8;
    VAR_5->seedlen = VAR_7 + 16;

    if ((VAR_5->flags & VAR_1) == 0) {

        static const unsigned char VAR_9[32] = {
            0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
            0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
            0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
            0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
        };

        if (VAR_6->ctx_df == ((void*)0))
            VAR_6->ctx_df = FUNC_0();
        if (VAR_6->ctx_df == ((void*)0))
            return 0;

        if (!FUNC_3(VAR_6->ctx_df, VAR_6->cipher, ((void*)0), VAR_9, ((void*)0), 1))
            return 0;

        VAR_5->min_entropylen = VAR_6->keylen;
        VAR_5->max_entropylen = VAR_0;
        VAR_5->min_noncelen = VAR_5->min_entropylen / 2;
        VAR_5->max_noncelen = VAR_0;
        VAR_5->max_perslen = VAR_0;
        VAR_5->max_adinlen = VAR_0;
    } else {





        VAR_5->min_entropylen = VAR_5->seedlen;
        VAR_5->max_entropylen = VAR_5->seedlen;

        VAR_5->min_noncelen = 0;
        VAR_5->max_noncelen = 0;
        VAR_5->max_perslen = VAR_5->seedlen;
        VAR_5->max_adinlen = VAR_5->seedlen;

    }

    VAR_5->max_request = 1 << 16;

    return 1;
}
