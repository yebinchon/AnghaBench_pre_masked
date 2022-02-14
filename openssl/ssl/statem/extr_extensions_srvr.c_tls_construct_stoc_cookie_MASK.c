
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_14__ {int new_cipher; } ;
struct TYPE_15__ {int flags; int * peer_tmp; TYPE_2__ tmp; int group_id; } ;
struct TYPE_19__ {TYPE_6__* session_ctx; TYPE_4__* ctx; TYPE_3__ s3; TYPE_1__* method; } ;
struct TYPE_17__ {int cookie_hmac_key; } ;
struct TYPE_18__ {TYPE_5__ ext; } ;
struct TYPE_16__ {scalar_t__ (* gen_stateless_cookie_cb ) (TYPE_7__*,unsigned char*,size_t*) ;} ;
struct TYPE_13__ {int (* put_cipher_by_char ) (int ,int *,size_t*) ;} ;
typedef TYPE_7__ SSL ;
typedef int EXT_RETURN ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,size_t*,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,int *) ;
 size_t VAR_3 ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int *,int ,int) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (TYPE_7__*,int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int *,size_t,unsigned char**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,size_t*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,unsigned int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,size_t,unsigned char**) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (TYPE_7__*,int ) ;
 int FUNC_19 (TYPE_7__*,unsigned char*,size_t,size_t*) ;
 int FUNC_20 (int ,int *,size_t*) ;
 scalar_t__ FUNC_21 (TYPE_7__*,unsigned char*,size_t*) ;
 scalar_t__ FUNC_22 (int *) ;

EXT_RETURN FUNC_23(SSL *VAR_18, WPACKET *VAR_19, unsigned int VAR_20,
                                     X509 *VAR_21, size_t VAR_22)
{

    unsigned char *VAR_23, *VAR_24, *VAR_25, *VAR_26, *VAR_27;
    unsigned char *VAR_28, *VAR_29;
    size_t VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    EVP_MD_CTX *VAR_36;
    EVP_PKEY *VAR_37;
    int VAR_38 = VAR_5;

    if ((VAR_18->s3.flags & VAR_16) == 0)
        return VAR_6;

    if (VAR_18->ctx->gen_stateless_cookie_cb == ((void*)0)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_14);
        return VAR_5;
    }

    if (!FUNC_11(VAR_19, VAR_17)
            || !FUNC_15(VAR_19)
            || !FUNC_15(VAR_19)
            || !FUNC_10(VAR_19, &VAR_30)
            || !FUNC_14(VAR_19, VAR_8, &VAR_27)
            || !FUNC_11(VAR_19, VAR_0)
            || !FUNC_11(VAR_19, VAR_15)
            || !FUNC_11(VAR_19, VAR_18->s3.group_id)
            || !VAR_18->method->put_cipher_by_char(VAR_18->s3.tmp.new_cipher, VAR_19,
                                              &VAR_31)

            || !FUNC_13(VAR_19, VAR_18->s3.peer_tmp == ((void*)0))
            || !FUNC_12(VAR_19, (unsigned int)FUNC_22(((void*)0)))
            || !FUNC_15(VAR_19)
            || !FUNC_14(VAR_19, VAR_3, &VAR_23)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        return VAR_5;
    }






    if (!FUNC_18(VAR_18, 0)
            || !FUNC_19(VAR_18, VAR_23, VAR_3, &VAR_33)) {

        return VAR_5;
    }

    if (!FUNC_8(VAR_19, VAR_33, &VAR_24)
            || !FUNC_17(VAR_23 == VAR_24)
            || !FUNC_9(VAR_19)
            || !FUNC_16(VAR_19)
            || !FUNC_14(VAR_19, VAR_11, &VAR_25)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        return VAR_5;
    }


    if (VAR_18->ctx->gen_stateless_cookie_cb(VAR_18, VAR_25, &VAR_35) == 0) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_13);
        return VAR_5;
    }

    if (!FUNC_8(VAR_19, VAR_35, &VAR_26)
            || !FUNC_17(VAR_25 == VAR_26)
            || !FUNC_9(VAR_19)
            || !FUNC_10(VAR_19, &VAR_32)
            || !FUNC_14(VAR_19, VAR_9, &VAR_28)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        return VAR_5;
    }
    VAR_34 = VAR_9;

    VAR_32 -= VAR_30;
    if (!FUNC_17(VAR_32 <= VAR_8 - VAR_9)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        return VAR_5;
    }


    VAR_36 = FUNC_2();
    VAR_37 = FUNC_5(VAR_4, ((void*)0),
                                        VAR_18->session_ctx->ext.cookie_hmac_key,
                                        sizeof(VAR_18->session_ctx->ext
                                               .cookie_hmac_key));
    if (VAR_36 == ((void*)0) || VAR_37 == ((void*)0)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_2);
        goto err;
    }

    if (FUNC_1(VAR_36, ((void*)0), FUNC_6(), ((void*)0), VAR_37) <= 0
            || FUNC_0(VAR_36, VAR_28, &VAR_34, VAR_27,
                              VAR_32) <= 0) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        goto err;
    }

    if (!FUNC_17(VAR_32 + VAR_34 <= VAR_8)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        goto err;
    }

    if (!FUNC_8(VAR_19, VAR_34, &VAR_29)
            || !FUNC_17(VAR_28 == VAR_29)
            || !FUNC_17(VAR_27 == VAR_28 - VAR_32)
            || !FUNC_9(VAR_19)
            || !FUNC_9(VAR_19)) {
        FUNC_7(VAR_18, VAR_10, VAR_12,
                 VAR_1);
        goto err;
    }

    VAR_38 = VAR_7;

 err:
    FUNC_3(VAR_36);
    FUNC_4(VAR_37);
    return VAR_38;



}
