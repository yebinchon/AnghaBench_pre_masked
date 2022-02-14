
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {unsigned int legacy_version; unsigned int session_id_len; scalar_t__ dtls_cookie_len; scalar_t__ compressions_len; struct TYPE_17__* pre_proc_exts; int pre_proc_exts_len; int extensions; scalar_t__ compressions; int ciphersuites; scalar_t__ dtls_cookie; scalar_t__ session_id; scalar_t__ random; scalar_t__ isv2; } ;
struct TYPE_15__ {int send_connection_binding; } ;
struct TYPE_16__ {int renegotiate; int options; int new_session; scalar_t__ hello_retry_request; TYPE_3__* clienthello; int rlayer; TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;
typedef TYPE_3__ CLIENTHELLO_MSG ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (int *,scalar_t__,unsigned int,scalar_t__*) ;
 int FUNC_4 (int *,scalar_t__,unsigned int) ;
 int FUNC_5 (int *,unsigned int*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,unsigned int*) ;
 int FUNC_9 (int *,int *,unsigned int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_18 (scalar_t__,int ,unsigned int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_2__*,int ,int ) ;
 int FUNC_21 (TYPE_2__*,int *,int ,TYPE_3__**,int *,int) ;

MSG_PROCESS_RETURN FUNC_22(SSL *VAR_25, PACKET *VAR_26)
{

    PACKET VAR_27, VAR_28, VAR_29, VAR_30;
    static const unsigned char VAR_31 = 0;
    CLIENTHELLO_MSG *VAR_32 = ((void*)0);


    if (VAR_25->renegotiate == 0 && !FUNC_14(VAR_25)) {
        if (!FUNC_19(!FUNC_15(VAR_25))) {
            FUNC_17(VAR_25, VAR_11, VAR_15,
                     VAR_1);
            goto err;
        }
        if ((VAR_25->options & VAR_20) != 0
                || (!VAR_25->s3.send_connection_binding
                    && (VAR_25->options
                        & VAR_18) == 0)) {
            FUNC_20(VAR_25, VAR_7, VAR_12);
            return VAR_5;
        }
        VAR_25->renegotiate = 1;
        VAR_25->new_session = 1;
    }

    VAR_32 = FUNC_1(sizeof(*VAR_32));
    if (VAR_32 == ((void*)0)) {
        FUNC_17(VAR_25, VAR_11, VAR_15,
                 VAR_1);
        goto err;
    }




    VAR_32->isv2 = FUNC_12(&VAR_25->rlayer);
    FUNC_10(&VAR_30);

    if (VAR_32->isv2) {
        unsigned int VAR_33;

        if (!FUNC_14(VAR_25)
                || VAR_25->hello_retry_request != VAR_16) {
            FUNC_17(VAR_25, VAR_13,
                     VAR_15, VAR_24);
            goto err;
        }
        if (!FUNC_5(VAR_26, &VAR_33)
            || VAR_33 != VAR_6) {





            FUNC_17(VAR_25, VAR_11, VAR_15,
                     VAR_1);
            goto err;
        }
    }

    if (!FUNC_8(VAR_26, &VAR_32->legacy_version)) {
        FUNC_17(VAR_25, VAR_9, VAR_15,
                 VAR_22);
        goto err;
    }


    if (VAR_32->isv2) {





        unsigned int VAR_34, VAR_35, VAR_36;
        PACKET VAR_37;

        if (!FUNC_8(VAR_26, &VAR_34)
            || !FUNC_8(VAR_26, &VAR_35)
            || !FUNC_8(VAR_26, &VAR_36)) {
            FUNC_17(VAR_25, VAR_9, VAR_15,
                     VAR_23);
            goto err;
        }

        if (VAR_35 > VAR_17) {
            FUNC_17(VAR_25, VAR_10,
                     VAR_15, VAR_21);
            goto err;
        }

        if (!FUNC_9(VAR_26, &VAR_32->ciphersuites,
                                   VAR_34)
            || !FUNC_4(VAR_26, VAR_32->session_id, VAR_35)
            || !FUNC_9(VAR_26, &VAR_37, VAR_36)

            || FUNC_11(VAR_26) != 0) {
            FUNC_17(VAR_25, VAR_9, VAR_15,
                     VAR_23);
            goto err;
        }
        VAR_32->session_id_len = VAR_35;






        VAR_36 = VAR_36 > VAR_8
                        ? VAR_8 : VAR_36;
        FUNC_18(VAR_32->random, 0, VAR_8);
        if (!FUNC_4(&VAR_37,
                               VAR_32->random + VAR_8 -
                               VAR_36, VAR_36)

            || !FUNC_2(&VAR_28, &VAR_31, 1)) {
            FUNC_17(VAR_25, VAR_11, VAR_15,
                     VAR_1);
            goto err;
        }

        FUNC_10(&VAR_32->extensions);
    } else {

        if (!FUNC_4(VAR_26, VAR_32->random, VAR_8)
            || !FUNC_6(VAR_26, &VAR_27)
            || !FUNC_3(&VAR_27, VAR_32->session_id,
                    VAR_17,
                    &VAR_32->session_id_len)) {
            FUNC_17(VAR_25, VAR_9, VAR_15,
                     VAR_21);
            goto err;
        }

        if (FUNC_13(VAR_25)) {
            if (!FUNC_6(VAR_26, &VAR_30)) {
                FUNC_17(VAR_25, VAR_9, VAR_15,
                         VAR_21);
                goto err;
            }
            if (!FUNC_3(&VAR_30, VAR_32->dtls_cookie,
                                 VAR_0,
                                 &VAR_32->dtls_cookie_len)) {
                FUNC_17(VAR_25, VAR_11,
                         VAR_15, VAR_1);
                goto err;
            }





            if (FUNC_16(VAR_25) & VAR_19) {
                if (VAR_32->dtls_cookie_len == 0) {
                    FUNC_0(VAR_32);
                    return VAR_5;
                }
            }
        }

        if (!FUNC_7(VAR_26, &VAR_32->ciphersuites)) {
            FUNC_17(VAR_25, VAR_9, VAR_15,
                     VAR_21);
            goto err;
        }

        if (!FUNC_6(VAR_26, &VAR_28)) {
            FUNC_17(VAR_25, VAR_9, VAR_15,
                     VAR_21);
            goto err;
        }


        if (FUNC_11(VAR_26) == 0) {
            FUNC_10(&VAR_32->extensions);
        } else {
            if (!FUNC_7(VAR_26, &VAR_32->extensions)
                    || FUNC_11(VAR_26) != 0) {
                FUNC_17(VAR_25, VAR_9, VAR_15,
                         VAR_21);
                goto err;
            }
        }
    }

    if (!FUNC_3(&VAR_28, VAR_32->compressions,
                         VAR_2,
                         &VAR_32->compressions_len)) {
        FUNC_17(VAR_25, VAR_11, VAR_15,
                 VAR_1);
        goto err;
    }


    VAR_29 = VAR_32->extensions;
    if (!FUNC_21(VAR_25, &VAR_29, VAR_14,
                                &VAR_32->pre_proc_exts,
                                &VAR_32->pre_proc_exts_len, 1)) {

        goto err;
    }
    VAR_25->clienthello = VAR_32;

    return VAR_3;

 err:
    if (VAR_32 != ((void*)0))
        FUNC_0(VAR_32->pre_proc_exts);
    FUNC_0(VAR_32);

    return VAR_4;
}
