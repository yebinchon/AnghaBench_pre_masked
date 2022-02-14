
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* hw; } ;
struct TYPE_12__ {int aad; int text; } ;
struct TYPE_11__ {int d; } ;
struct TYPE_14__ {int* counter; TYPE_7__ base; scalar_t__ partial_len; int buf; TYPE_1__ key; } ;
struct TYPE_16__ {size_t tls_payload_length; int mac_inited; unsigned char* tls_aad; int aad; unsigned char* tag; size_t tag_len; TYPE_2__ len; TYPE_4__ chacha; int poly1305; } ;
struct TYPE_15__ {scalar_t__ enc; } ;
struct TYPE_13__ {int (* cipher ) (TYPE_7__*,unsigned char*,unsigned char const*,size_t) ;} ;
typedef TYPE_5__ PROV_CIPHER_CTX ;
typedef TYPE_6__ PROV_CHACHA20_POLY1305_CTX ;
typedef int POLY1305 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (int ,unsigned char*,int ,int ,int*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned char const*,size_t) ;
 int FUNC_5 (TYPE_5__*,unsigned char*,size_t*,unsigned char const*,size_t) ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,int ,size_t) ;
 int FUNC_8 (TYPE_7__*,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_9 (TYPE_7__*,unsigned char*,unsigned char const*,size_t) ;
 unsigned char* VAR_4 ;

__attribute__((used)) static int FUNC_10(PROV_CIPHER_CTX *VAR_5,
                                         unsigned char *VAR_6, size_t *VAR_7,
                                         const unsigned char *VAR_8, size_t VAR_9)
{
    PROV_CHACHA20_POLY1305_CTX *VAR_10 = (PROV_CHACHA20_POLY1305_CTX *)VAR_5;
    POLY1305 *VAR_11 = &VAR_10->poly1305;
    size_t VAR_12, VAR_13 = VAR_10->tls_payload_length;
    size_t VAR_14 = 0;
    int VAR_15 = 0;

    const union {
        long one;
        char little;
    } VAR_16 = { 1 };

    if (!VAR_10->mac_inited) {

        if (VAR_13 != VAR_2 && VAR_6 != ((void*)0)) {
            return FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        }

        VAR_10->chacha.counter[0] = 0;
        FUNC_1(VAR_10->chacha.buf, VAR_4, VAR_0,
                       VAR_10->chacha.key.d, VAR_10->chacha.counter);
        FUNC_3(VAR_11, VAR_10->chacha.buf);
        VAR_10->chacha.counter[0] = 1;
        VAR_10->chacha.partial_len = 0;
        VAR_10->len.aad = VAR_10->len.text = 0;
        VAR_10->mac_inited = 1;
        if (VAR_13 != VAR_2) {
            FUNC_4(VAR_11, VAR_10->tls_aad, VAR_1);
            VAR_10->len.aad = VAR_1;
            VAR_10->aad = 1;
        }
    }

    if (VAR_8 != ((void*)0)) {
        if (VAR_6 == ((void*)0)) {
            FUNC_4(VAR_11, VAR_8, VAR_9);
            VAR_10->len.aad += VAR_9;
            VAR_10->aad = 1;
            goto finish;
        } else {
            if (VAR_10->aad) {
                if ((VAR_12 = (size_t)VAR_10->len.aad % VAR_3))
                    FUNC_4(VAR_11, VAR_4, VAR_3 - VAR_12);
                VAR_10->aad = 0;
            }

            VAR_10->tls_payload_length = VAR_2;
            if (VAR_13 == VAR_2)
                VAR_13 = VAR_9;
            else if (VAR_9 != VAR_13 + VAR_3)
                goto err;

            if (VAR_5->enc) {
                VAR_10->chacha.base.hw->cipher(&VAR_10->chacha.base, VAR_6, VAR_8, VAR_13);
                FUNC_4(VAR_11, VAR_6, VAR_13);
                VAR_8 += VAR_13;
                VAR_6 += VAR_13;
                VAR_10->len.text += VAR_13;
            } else {
                FUNC_4(VAR_11, VAR_8, VAR_13);
                VAR_10->chacha.base.hw->cipher(&VAR_10->chacha.base, VAR_6, VAR_8, VAR_13);
                VAR_8 += VAR_13;
                VAR_6 += VAR_13;
                VAR_10->len.text += VAR_13;
            }
        }
    }

    if (VAR_8 == ((void*)0) || VAR_9 != VAR_13) {

        unsigned char VAR_17[VAR_3];

        if (VAR_10->aad) {
            if ((VAR_12 = (size_t)VAR_10->len.aad % VAR_3))
                FUNC_4(VAR_11, VAR_4, VAR_3 - VAR_12);
            VAR_10->aad = 0;
        }

        if ((VAR_12 = (size_t)VAR_10->len.text % VAR_3))
            FUNC_4(VAR_11, VAR_4, VAR_3 - VAR_12);

        if (VAR_16.little) {
            FUNC_4(VAR_11, (unsigned char *)&VAR_10->len,
                            VAR_3);
        } else {
            VAR_17[0] = (unsigned char)(VAR_10->len.aad);
            VAR_17[1] = (unsigned char)(VAR_10->len.aad>>8);
            VAR_17[2] = (unsigned char)(VAR_10->len.aad>>16);
            VAR_17[3] = (unsigned char)(VAR_10->len.aad>>24);
            VAR_17[4] = (unsigned char)(VAR_10->len.aad>>32);
            VAR_17[5] = (unsigned char)(VAR_10->len.aad>>40);
            VAR_17[6] = (unsigned char)(VAR_10->len.aad>>48);
            VAR_17[7] = (unsigned char)(VAR_10->len.aad>>56);
            VAR_17[8] = (unsigned char)(VAR_10->len.text);
            VAR_17[9] = (unsigned char)(VAR_10->len.text>>8);
            VAR_17[10] = (unsigned char)(VAR_10->len.text>>16);
            VAR_17[11] = (unsigned char)(VAR_10->len.text>>24);
            VAR_17[12] = (unsigned char)(VAR_10->len.text>>32);
            VAR_17[13] = (unsigned char)(VAR_10->len.text>>40);
            VAR_17[14] = (unsigned char)(VAR_10->len.text>>48);
            VAR_17[15] = (unsigned char)(VAR_10->len.text>>56);
            FUNC_4(VAR_11, VAR_17, VAR_3);
        }
        FUNC_2(VAR_11, VAR_5->enc ? VAR_10->tag : VAR_17);
        VAR_10->mac_inited = 0;

        if (VAR_8 != ((void*)0) && VAR_9 != VAR_13) {
            if (VAR_5->enc) {
                FUNC_6(VAR_6, VAR_10->tag, VAR_3);
            } else {
                if (FUNC_0(VAR_17, VAR_8, VAR_3)) {
                    FUNC_7(VAR_6 - VAR_13, 0, VAR_13);
                    goto err;
                }
            }
        }
        else if (!VAR_5->enc) {
            if (FUNC_0(VAR_17, VAR_10->tag, VAR_10->tag_len))
                goto err;
        }
    }
finish:
    VAR_14 = VAR_9;
    VAR_15 = 1;
err:
    *VAR_7 = VAR_14;
    return VAR_15;
}
