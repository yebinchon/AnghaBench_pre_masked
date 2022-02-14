
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* new_cipher; int peer_sigalg; } ;
struct TYPE_19__ {TYPE_2__ tmp; int * peer_tmp; } ;
struct TYPE_20__ {TYPE_3__ s3; } ;
struct TYPE_17__ {long algorithm_mkey; int algorithm_auth; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,size_t,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (int *,int **,int const*,int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 char* FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,unsigned int*) ;
 int FUNC_14 (int *,int *,size_t) ;
 size_t FUNC_15 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 int VAR_20 ;
 int VAR_21 ;
 long VAR_22 ;
 long VAR_23 ;
 long VAR_24 ;
 long VAR_25 ;
 long VAR_26 ;
 long VAR_27 ;
 long VAR_28 ;
 int FUNC_18 (TYPE_4__*,int ,int ,int ) ;
 int VAR_29 ;
 size_t FUNC_19 (TYPE_4__*,unsigned char**,int ,size_t) ;
 scalar_t__ FUNC_20 (TYPE_4__*) ;
 scalar_t__ FUNC_21 (TYPE_4__*,unsigned int,int *) ;
 int FUNC_22 (int ,int const**) ;
 int FUNC_23 (TYPE_4__*,int *) ;
 int FUNC_24 (TYPE_4__*,int *,int **) ;
 int FUNC_25 (TYPE_4__*,int *,int **) ;
 int FUNC_26 (TYPE_4__*,int *) ;
 int FUNC_27 (TYPE_4__*,int *,int **) ;

MSG_PROCESS_RETURN FUNC_28(SSL *VAR_30, PACKET *VAR_31)
{
    long VAR_32;
    EVP_PKEY *VAR_33 = ((void*)0);
    EVP_MD_CTX *VAR_34 = ((void*)0);
    EVP_PKEY_CTX *VAR_35 = ((void*)0);
    PACKET VAR_36, VAR_37;

    VAR_32 = VAR_30->s3.tmp.new_cipher->algorithm_mkey;

    VAR_36 = *VAR_31;


    FUNC_7(VAR_30->s3.peer_tmp);
    VAR_30->s3.peer_tmp = ((void*)0);


    if (VAR_32 & VAR_12) {
        if (!FUNC_26(VAR_30, VAR_31)) {

            goto err;
        }
    }


    if (VAR_32 & (VAR_26 | VAR_27)) {
    } else if (VAR_32 & VAR_28) {
        if (!FUNC_27(VAR_30, VAR_31, &VAR_33)) {

            goto err;
        }
    } else if (VAR_32 & (VAR_22 | VAR_23)) {
        if (!FUNC_24(VAR_30, VAR_31, &VAR_33)) {

            goto err;
        }
    } else if (VAR_32 & (VAR_24 | VAR_25)) {
        if (!FUNC_25(VAR_30, VAR_31, &VAR_33)) {

            goto err;
        }
    } else if (VAR_32) {
        FUNC_18(VAR_30, VAR_10, VAR_11,
                 VAR_18);
        goto err;
    }


    if (VAR_33 != ((void*)0)) {
        PACKET VAR_38;
        int VAR_39;
        const EVP_MD *VAR_40 = ((void*)0);
        unsigned char *VAR_41;
        size_t VAR_42;
        int VAR_43;





        if (!FUNC_14(&VAR_36, &VAR_38,
                                   FUNC_15(&VAR_36) -
                                   FUNC_15(VAR_31))) {
            FUNC_18(VAR_30, VAR_7, VAR_11,
                     VAR_1);
            goto err;
        }

        if (FUNC_17(VAR_30)) {
            unsigned int VAR_44;

            if (!FUNC_13(VAR_31, &VAR_44)) {
                FUNC_18(VAR_30, VAR_7, VAR_11,
                         VAR_17);
                goto err;
            }
            if (FUNC_21(VAR_30, VAR_44, VAR_33) <=0) {

                goto err;
            }
        } else if (!FUNC_23(VAR_30, VAR_33)) {
            FUNC_18(VAR_30, VAR_9, VAR_11,
                     VAR_1);
            goto err;
        }

        if (!FUNC_22(VAR_30->s3.tmp.peer_sigalg, &VAR_40)) {
            FUNC_18(VAR_30, VAR_9, VAR_11,
                     VAR_1);
            goto err;
        }
        if (FUNC_17(VAR_30))
            FUNC_10(VAR_29, "USING TLSv1.2 HASH %s\n",
                        VAR_40 == ((void*)0) ? "n/a" : FUNC_4(VAR_40));

        if (!FUNC_12(VAR_31, &VAR_37)
            || FUNC_15(VAR_31) != 0) {
            FUNC_18(VAR_30, VAR_7, VAR_11,
                     VAR_16);
            goto err;
        }
        VAR_39 = FUNC_8(VAR_33);
        if (VAR_39 < 0) {
            FUNC_18(VAR_30, VAR_9, VAR_11,
                     VAR_1);
            goto err;
        }




        if (FUNC_15(&VAR_37) > (size_t)VAR_39) {

            FUNC_18(VAR_30, VAR_7, VAR_11,
                   VAR_19);
            goto err;
        }

        VAR_34 = FUNC_3();
        if (VAR_34 == ((void*)0)) {
            FUNC_18(VAR_30, VAR_9, VAR_11,
                     VAR_2);
            goto err;
        }

        if (FUNC_1(VAR_34, &VAR_35, VAR_40, ((void*)0), VAR_33) <= 0) {
            FUNC_18(VAR_30, VAR_9, VAR_11,
                     VAR_0);
            goto err;
        }
        if (FUNC_16(VAR_30)) {
            if (FUNC_5(VAR_35, VAR_5) <= 0
                || FUNC_6(VAR_35,
                                                VAR_6) <= 0) {
                FUNC_18(VAR_30, VAR_9,
                         VAR_11, VAR_0);
                goto err;
            }
        }
        VAR_42 = FUNC_19(VAR_30, &VAR_41, FUNC_11(&VAR_38),
                                            FUNC_15(&VAR_38));
        if (VAR_42 == 0) {

            goto err;
        }

        VAR_43 = FUNC_0(VAR_34, FUNC_11(&VAR_37),
                              FUNC_15(&VAR_37), VAR_41, VAR_42);
        FUNC_9(VAR_41);
        if (VAR_43 <= 0) {
            FUNC_18(VAR_30, VAR_8, VAR_11,
                     VAR_14);
            goto err;
        }
        FUNC_2(VAR_34);
        VAR_34 = ((void*)0);
    } else {

        if (!(VAR_30->s3.tmp.new_cipher->algorithm_auth & (VAR_20 | VAR_21))
            && !(VAR_32 & VAR_12)) {

            if (FUNC_20(VAR_30)) {
                FUNC_18(VAR_30, VAR_7, VAR_11,
                         VAR_13);
            }

            goto err;
        }

        if (FUNC_15(VAR_31) != 0) {
            FUNC_18(VAR_30, VAR_7, VAR_11,
                     VAR_15);
            goto err;
        }
    }

    return VAR_3;
 err:
    FUNC_2(VAR_34);
    return VAR_4;
}
