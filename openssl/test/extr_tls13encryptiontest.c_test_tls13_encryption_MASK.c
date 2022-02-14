
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {unsigned char* data; int rec_version; int type; } ;
struct TYPE_19__ {TYPE_3__* new_cipher; } ;
struct TYPE_20__ {TYPE_1__ tmp; } ;
struct TYPE_21__ {struct TYPE_21__* enc_read_ctx; struct TYPE_21__* enc_write_ctx; int read_iv; int write_iv; int rlayer; TYPE_2__ s3; } ;
typedef TYPE_3__ SSL_CTX ;
typedef TYPE_4__ SSL3_RECORD ;
typedef TYPE_3__ SSL ;
typedef int EVP_CIPHER ;


 void* FUNC_0 () ;
 size_t FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int const*,int *,unsigned char*,int *,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (unsigned char*) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_3__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (char*,size_t) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_4__*,int *,unsigned char**,int ,size_t,int ) ;
 int FUNC_22 (int ,int ,size_t) ;
 int * VAR_4 ;
 int FUNC_23 (TYPE_4__*,int *,int) ;
 int FUNC_24 (TYPE_3__*,TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_25(void)
{
    SSL_CTX *VAR_5 = ((void*)0);
    SSL *VAR_6 = ((void*)0);
    SSL3_RECORD VAR_7;
    unsigned char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    const EVP_CIPHER *VAR_11 = FUNC_3();
    int VAR_12 = 0;
    size_t VAR_13, VAR_14;





    VAR_7.data = ((void*)0);
    VAR_7.type = VAR_1;
    VAR_7.rec_version = VAR_3;

    VAR_5 = FUNC_10(FUNC_20());
    if (!FUNC_17(VAR_5)) {
        FUNC_14("Failed creating SSL_CTX");
        goto err;
    }

    VAR_6 = FUNC_12(VAR_5);
    if (!FUNC_17(VAR_6)) {
        FUNC_14("Failed creating SSL");
        goto err;
    }

    VAR_6->enc_read_ctx = FUNC_0();
    if (!FUNC_17(VAR_6->enc_read_ctx))
        goto err;

    VAR_6->enc_write_ctx = FUNC_0();
    if (!FUNC_17(VAR_6->enc_write_ctx))
        goto err;

    VAR_6->s3.tmp.new_cipher = FUNC_8(VAR_6, VAR_2);
    if (!FUNC_17(VAR_6->s3.tmp.new_cipher)) {
        FUNC_14("Failed to find cipher");
        goto err;
    }

    for (VAR_14 = 0; VAR_14 < FUNC_5(VAR_4); VAR_14++) {

        VAR_13 = FUNC_1(VAR_11);
        if (!FUNC_21(&VAR_7, &VAR_4[VAR_14], &VAR_8, VAR_6->read_iv, VAR_13,
                         FUNC_6(&VAR_6->rlayer))) {
            FUNC_13("Failed loading key into EVP_CIPHER_CTX");
            goto err;
        }


        FUNC_22(FUNC_7(&VAR_6->rlayer),
               FUNC_6(&VAR_6->rlayer), VAR_0);
        FUNC_22(VAR_6->write_iv, VAR_6->read_iv, VAR_13);


        if (FUNC_2(VAR_6->enc_write_ctx, VAR_11, ((void*)0), VAR_8, ((void*)0), 1) <= 0
                || FUNC_2(VAR_6->enc_read_ctx, VAR_11, ((void*)0), VAR_8, ((void*)0), 0)
                   <= 0) {
            FUNC_13("Failed loading key into EVP_CIPHER_CTX\n");
            goto err;
        }


        if (!FUNC_18(FUNC_24(VAR_6, &VAR_7, 1, 1), 1)) {
            FUNC_14("Failed to encrypt record %zu", VAR_14);
            goto err;
        }
        if (!FUNC_19(FUNC_23(&VAR_7, &VAR_4[VAR_14], 1))) {
            FUNC_14("Record %zu encryption test failed", VAR_14);
            goto err;
        }


        if (!FUNC_15(FUNC_24(VAR_6, &VAR_7, 1, 0), 1)) {
            FUNC_14("Failed to decrypt record %zu", VAR_14);
            goto err;
        }
        if (!FUNC_19(FUNC_23(&VAR_7, &VAR_4[VAR_14], 0))) {
            FUNC_14("Record %zu decryption test failed", VAR_14);
            goto err;
        }

        FUNC_4(VAR_7.data);
        FUNC_4(VAR_8);
        FUNC_4(VAR_9);
        FUNC_4(VAR_10);
        VAR_7.data = ((void*)0);
        VAR_8 = ((void*)0);
        VAR_9 = ((void*)0);
        VAR_10 = ((void*)0);
    }

    FUNC_16("PASS: %zu records tested", VAR_14);
    VAR_12 = 1;

 err:
    FUNC_4(VAR_7.data);
    FUNC_4(VAR_8);
    FUNC_4(VAR_9);
    FUNC_4(VAR_10);
    FUNC_11(VAR_6);
    FUNC_9(VAR_5);
    return VAR_12;
}
