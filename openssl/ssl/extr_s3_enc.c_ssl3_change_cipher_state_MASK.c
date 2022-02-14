
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int enc_write_state; } ;
struct TYPE_9__ {unsigned char* key_block; size_t key_block_length; TYPE_1__* new_compression; int * new_hash; int * new_sym_enc; } ;
struct TYPE_10__ {unsigned char* read_mac_secret; unsigned char* write_mac_secret; TYPE_2__ tmp; } ;
struct TYPE_12__ {TYPE_4__ statem; TYPE_3__ s3; int rlayer; int * compress; int write_hash; int * enc_write_ctx; int * expand; int read_hash; int * enc_read_ctx; } ;
struct TYPE_8__ {int * method; } ;
typedef TYPE_5__ SSL ;
typedef int EVP_MD ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef int COMP_METHOD ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 () ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int FUNC_6 (int *,int const*,int *,unsigned char*,unsigned char*,int) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_11 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *,int const*) ;

int FUNC_14(SSL *VAR_11, int VAR_12)
{
    unsigned char *VAR_13, *VAR_14;
    unsigned char *VAR_15, *VAR_16, *VAR_17;
    EVP_CIPHER_CTX *VAR_18;
    const EVP_CIPHER *VAR_19;

    COMP_METHOD *VAR_20;

    const EVP_MD *VAR_21;
    int VAR_22;
    size_t VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    int VAR_28 = 0;

    VAR_19 = VAR_11->s3.tmp.new_sym_enc;
    VAR_21 = VAR_11->s3.tmp.new_hash;

    if (!FUNC_12(VAR_21 != ((void*)0))) {
        FUNC_10(VAR_11, VAR_8, VAR_9,
                 VAR_2);
        goto err;
    }

    if (VAR_11->s3.tmp.new_compression == ((void*)0))
        VAR_20 = ((void*)0);
    else
        VAR_20 = VAR_11->s3.tmp.new_compression->method;


    if (VAR_12 & VAR_4) {
        if (VAR_11->enc_read_ctx != ((void*)0)) {
            VAR_28 = 1;
        } else if ((VAR_11->enc_read_ctx = FUNC_2()) == ((void*)0)) {
            FUNC_10(VAR_11, VAR_8, VAR_9,
                     VAR_3);
            goto err;
        } else {



            FUNC_3(VAR_11->enc_read_ctx);
        }
        VAR_18 = VAR_11->enc_read_ctx;

        if (FUNC_13(&VAR_11->read_hash, VAR_21) == ((void*)0)) {
            FUNC_10(VAR_11, VAR_8, VAR_9,
                     VAR_2);
            goto err;
        }


        FUNC_0(VAR_11->expand);
        VAR_11->expand = ((void*)0);
        if (VAR_20 != ((void*)0)) {
            VAR_11->expand = FUNC_1(VAR_20);
            if (VAR_11->expand == ((void*)0)) {
                FUNC_10(VAR_11, VAR_8,
                         VAR_9,
                         VAR_10);
                goto err;
            }
        }

        FUNC_8(&VAR_11->rlayer);
        VAR_14 = &(VAR_11->s3.read_mac_secret[0]);
    } else {
        VAR_11->statem.enc_write_state = VAR_0;
        if (VAR_11->enc_write_ctx != ((void*)0)) {
            VAR_28 = 1;
        } else if ((VAR_11->enc_write_ctx = FUNC_2()) == ((void*)0)) {
            FUNC_10(VAR_11, VAR_8, VAR_9,
                     VAR_3);
            goto err;
        } else {



            FUNC_3(VAR_11->enc_write_ctx);
        }
        VAR_18 = VAR_11->enc_write_ctx;
        if (FUNC_13(&VAR_11->write_hash, VAR_21) == ((void*)0)) {
            FUNC_10(VAR_11, VAR_8, VAR_9,
                     VAR_3);
            goto err;
        }


        FUNC_0(VAR_11->compress);
        VAR_11->compress = ((void*)0);
        if (VAR_20 != ((void*)0)) {
            VAR_11->compress = FUNC_1(VAR_20);
            if (VAR_11->compress == ((void*)0)) {
                FUNC_10(VAR_11, VAR_8,
                         VAR_9,
                         VAR_10);
                goto err;
            }
        }

        FUNC_9(&VAR_11->rlayer);
        VAR_14 = &(VAR_11->s3.write_mac_secret[0]);
    }

    if (VAR_28)
        FUNC_3(VAR_18);

    VAR_13 = VAR_11->s3.tmp.key_block;
    VAR_22 = FUNC_7(VAR_21);
    if (VAR_22 < 0) {
        FUNC_10(VAR_11, VAR_8, VAR_9,
                 VAR_2);
        goto err;
    }
    VAR_24 = VAR_22;
    VAR_27 = FUNC_5(VAR_19);
    VAR_25 = VAR_27;
    VAR_26 = FUNC_4(VAR_19);
    if ((VAR_12 == VAR_6) ||
        (VAR_12 == VAR_7)) {
        VAR_15 = &(VAR_13[0]);
        VAR_23 = VAR_24 + VAR_24;
        VAR_16 = &(VAR_13[VAR_23]);
        VAR_23 += VAR_25 + VAR_25;
        VAR_17 = &(VAR_13[VAR_23]);
        VAR_23 += VAR_26 + VAR_26;
    } else {
        VAR_23 = VAR_24;
        VAR_15 = &(VAR_13[VAR_23]);
        VAR_23 += VAR_24 + VAR_25;
        VAR_16 = &(VAR_13[VAR_23]);
        VAR_23 += VAR_25 + VAR_26;
        VAR_17 = &(VAR_13[VAR_23]);
        VAR_23 += VAR_26;
    }

    if (VAR_23 > VAR_11->s3.tmp.key_block_length) {
        FUNC_10(VAR_11, VAR_8, VAR_9,
                 VAR_2);
        goto err;
    }

    FUNC_11(VAR_14, VAR_15, VAR_24);

    if (!FUNC_6(VAR_18, VAR_19, ((void*)0), VAR_16, VAR_17, (VAR_12 & VAR_5))) {
        FUNC_10(VAR_11, VAR_8, VAR_9,
                 VAR_2);
        goto err;
    }

    VAR_11->statem.enc_write_state = VAR_1;
    return 1;
 err:
    return 0;
}
