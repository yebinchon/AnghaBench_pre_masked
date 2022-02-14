
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int rtag ;
struct TYPE_6__ {unsigned char* plaintext; size_t plaintext_len; unsigned char* ciphertext; size_t ciphertext_len; scalar_t__ aead; int iv_len; unsigned char* tag; int tag_len; scalar_t__ key_bits; unsigned char** aad; int* aad_len; scalar_t__ tag_late; int * iv; int * cipher; int * key; int key_len; scalar_t__ rounds; } ;
struct TYPE_5__ {char* err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef int EVP_CIPHER_CTX ;
typedef TYPE_2__ CIPHER_DATA ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *,unsigned char*,int*) ;
 int FUNC_10 (int *,int *,int *,int *,int *,int) ;
 int FUNC_11 (int *,unsigned char*,int*,unsigned char*,int) ;
 int VAR_10 ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (size_t) ;
 int FUNC_14 (int *,size_t,int ,size_t) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int,int) ;
 unsigned char* FUNC_17 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_18 (TYPE_1__*,char*,unsigned char*,size_t,unsigned char*,int) ;

__attribute__((used)) static int FUNC_19(EVP_TEST *VAR_11, int VAR_12,
                           size_t VAR_13, size_t VAR_14, int VAR_15)
{
    CIPHER_DATA *VAR_16 = VAR_11->data;
    unsigned char *VAR_17, *VAR_18, *VAR_19 = ((void*)0);
    size_t VAR_20, VAR_21, VAR_22 = 0;
    int VAR_23 = 0, VAR_24, VAR_25, VAR_26, VAR_27;
    EVP_CIPHER_CTX *VAR_28 = ((void*)0);

    VAR_11->err = "TEST_FAILURE";
    if (!FUNC_15(VAR_28 = FUNC_4()))
        goto err;
    FUNC_5(VAR_28, VAR_0);
    if (VAR_12) {
        VAR_17 = VAR_16->plaintext;
        VAR_20 = VAR_16->plaintext_len;
        VAR_18 = VAR_16->ciphertext;
        VAR_21 = VAR_16->ciphertext_len;
    } else {
        VAR_17 = VAR_16->ciphertext;
        VAR_20 = VAR_16->ciphertext_len;
        VAR_18 = VAR_16->plaintext;
        VAR_21 = VAR_16->plaintext_len;
    }
    if (VAR_14 == (size_t)-1) {



        VAR_19 = FUNC_13(VAR_13 + VAR_20 + 2 * VAR_10);
        if (!VAR_19)
            goto err;
        VAR_17 = FUNC_17(VAR_19 + VAR_13, VAR_17, VAR_20);
    } else {
        VAR_14 += 16 - ((VAR_13 + VAR_20) & 15);
        VAR_19 = FUNC_13(VAR_13 + VAR_20 + 2 * VAR_10 +
                             VAR_14 + VAR_20);
        if (!VAR_19)
            goto err;
        VAR_17 = FUNC_17(VAR_19 + VAR_13 + VAR_20 + 2 * VAR_10 +
                    VAR_14, VAR_17, VAR_20);
    }
    if (!FUNC_10(VAR_28, VAR_16->cipher, ((void*)0), ((void*)0), ((void*)0), VAR_12)) {
        VAR_11->err = "CIPHERINIT_ERROR";
        goto err;
    }
    if (VAR_16->iv) {
        if (VAR_16->aead) {
            if (!FUNC_0(VAR_28, VAR_6,
                                     VAR_16->iv_len, 0)) {
                VAR_11->err = "INVALID_IV_LENGTH";
                goto err;
            }
        } else if (VAR_16->iv_len != (size_t)FUNC_3(VAR_28)) {
            VAR_11->err = "INVALID_IV_LENGTH";
            goto err;
        }
    }
    if (VAR_16->aead) {
        unsigned char *VAR_29;




        if (VAR_12 || VAR_16->aead == VAR_4 || VAR_16->tag_late) {
            VAR_11->err = "TAG_LENGTH_SET_ERROR";
            VAR_29 = ((void*)0);
        } else {
            VAR_11->err = "TAG_SET_ERROR";
            VAR_29 = VAR_16->tag;
        }
        if (VAR_29 || VAR_16->aead != VAR_3) {
            if (!FUNC_0(VAR_28, VAR_7,
                                     VAR_16->tag_len, VAR_29))
                goto err;
        }
    }

    if (VAR_16->rounds > 0) {
        int VAR_30 = (int)VAR_16->rounds;

        if (!FUNC_0(VAR_28, VAR_9, VAR_30, ((void*)0))) {
            VAR_11->err = "INVALID_ROUNDS";
            goto err;
        }
    }

    if (!FUNC_6(VAR_28, VAR_16->key_len)) {
        VAR_11->err = "INVALID_KEY_LENGTH";
        goto err;
    }
    if (VAR_16->key_bits > 0) {
        int VAR_31 = (int)VAR_16->key_bits;

        if (!FUNC_0(VAR_28, VAR_8, VAR_31, ((void*)0))) {
            VAR_11->err = "INVALID KEY BITS";
            goto err;
        }
    }
    if (!FUNC_10(VAR_28, ((void*)0), ((void*)0), VAR_16->key, VAR_16->iv, -1)) {
        VAR_11->err = "KEY_SET_ERROR";
        goto err;
    }


    if (VAR_16->iv != ((void*)0)
        && (FUNC_8(VAR_16->cipher) & VAR_2) == 0
        && !FUNC_14(VAR_16->iv, VAR_16->iv_len,
                        FUNC_2(VAR_28), VAR_16->iv_len)) {
        VAR_11->err = "INVALID_IV";
        goto err;
    }

    if (VAR_16->aead == VAR_1) {
        if (!FUNC_11(VAR_28, ((void*)0), &VAR_24, ((void*)0), VAR_21)) {
            VAR_11->err = "CCM_PLAINTEXT_LENGTH_SET_ERROR";
            goto err;
        }
    }
    if (VAR_16->aad[0] != ((void*)0)) {
        VAR_11->err = "AAD_SET_ERROR";
        if (!VAR_15) {
            for (VAR_27 = 0; VAR_16->aad[VAR_27] != ((void*)0); VAR_27++) {
                if (!FUNC_11(VAR_28, ((void*)0), &VAR_25, VAR_16->aad[VAR_27],
                                      VAR_16->aad_len[VAR_27]))
                    goto err;
            }
        } else {



            for (VAR_27 = 0; VAR_16->aad[VAR_27] != ((void*)0); VAR_27++) {
                if (VAR_16->aad_len[VAR_27] > 0) {
                    if (!FUNC_11(VAR_28, ((void*)0), &VAR_25, VAR_16->aad[VAR_27], 1))
                        goto err;
                    VAR_22++;
                }
                if (VAR_16->aad_len[VAR_27] > 2) {
                    if (!FUNC_11(VAR_28, ((void*)0), &VAR_25,
                                          VAR_16->aad[VAR_27] + VAR_22,
                                          VAR_16->aad_len[VAR_27] - 2))
                        goto err;
                    VAR_22 += VAR_16->aad_len[VAR_27] - 2;
                }
                if (VAR_16->aad_len[VAR_27] > 1
                    && !FUNC_11(VAR_28, ((void*)0), &VAR_25,
                                         VAR_16->aad[VAR_27] + VAR_22, 1))
                    goto err;
            }
        }
    }

    if (!VAR_12 && (VAR_16->aead == VAR_4 || VAR_16->tag_late)) {
        if (!FUNC_0(VAR_28, VAR_7,
                                 VAR_16->tag_len, VAR_16->tag)) {
            VAR_11->err = "TAG_SET_ERROR";
            goto err;
        }
    }

    FUNC_7(VAR_28, 0);
    VAR_11->err = "CIPHERUPDATE_ERROR";
    VAR_24 = 0;
    if (!VAR_15) {

        if (!FUNC_11(VAR_28, VAR_19 + VAR_13, &VAR_24, VAR_17, VAR_20))
            goto err;
    } else {

        if (VAR_20 > 0) {
            if (!FUNC_11(VAR_28, VAR_19 + VAR_13, &VAR_25, VAR_17, 1))
                goto err;
            VAR_24 += VAR_25;
            VAR_17++;
            VAR_20--;
        }
        if (VAR_20 > 1) {
            if (!FUNC_11(VAR_28, VAR_19 + VAR_13 + VAR_24, &VAR_25,
                                  VAR_17, VAR_20 - 1))
                goto err;
            VAR_24 += VAR_25;
            VAR_17 += VAR_20 - 1;
            VAR_20 = 1;
        }
        if (VAR_20 > 0 ) {
            if (!FUNC_11(VAR_28, VAR_19 + VAR_13 + VAR_24, &VAR_25,
                                  VAR_17, 1))
                goto err;
            VAR_24 += VAR_25;
        }
    }
    if (!FUNC_9(VAR_28, VAR_19 + VAR_13 + VAR_24, &VAR_26)) {
        VAR_11->err = "CIPHERFINAL_ERROR";
        goto err;
    }
    if (!FUNC_18(VAR_11, "VALUE_MISMATCH", VAR_18, VAR_21,
                            VAR_19 + VAR_13, VAR_24 + VAR_26))
        goto err;
    if (VAR_12 && VAR_16->aead) {
        unsigned char VAR_32[16];

        if (!FUNC_16(VAR_16->tag_len, sizeof(VAR_32))) {
            VAR_11->err = "TAG_LENGTH_INTERNAL_ERROR";
            goto err;
        }
        if (!FUNC_0(VAR_28, VAR_5,
                                 VAR_16->tag_len, VAR_32)) {
            VAR_11->err = "TAG_RETRIEVE_ERROR";
            goto err;
        }
        if (!FUNC_18(VAR_11, "TAG_VALUE_MISMATCH",
                                VAR_16->tag, VAR_16->tag_len,
                                VAR_32, VAR_16->tag_len))
            goto err;
    }
    VAR_11->err = ((void*)0);
    VAR_23 = 1;
 err:
    FUNC_12(VAR_19);
    FUNC_1(VAR_28);
    return VAR_23;
}
