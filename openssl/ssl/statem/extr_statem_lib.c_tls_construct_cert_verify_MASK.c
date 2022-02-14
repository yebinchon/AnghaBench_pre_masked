
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_18__ {int sig; int sigalg; } ;
struct TYPE_14__ {TYPE_1__* cert; TYPE_6__* sigalg; } ;
struct TYPE_15__ {TYPE_2__ tmp; } ;
struct TYPE_17__ {scalar_t__ version; TYPE_4__* session; TYPE_3__ s3; } ;
struct TYPE_16__ {int master_key; scalar_t__ master_key_length; } ;
struct TYPE_13__ {int * privatekey; } ;
typedef TYPE_5__ SSL ;
typedef TYPE_6__ SIGALG_LOOKUP ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (unsigned char*,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,unsigned char*,size_t*,void*,size_t) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_3 (int *,int **,int const*,int *,int *) ;
 scalar_t__ FUNC_4 (int *,void*,size_t) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_5 ;
 size_t FUNC_10 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (unsigned char*) ;
 unsigned char* FUNC_12 (size_t) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*,int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,unsigned char*,size_t) ;
 int FUNC_17 (TYPE_5__*,unsigned char*,void**,size_t*) ;
 int FUNC_18 (TYPE_5__*,int ) ;
 int FUNC_19 (TYPE_6__ const*,int const**) ;

int FUNC_20(SSL *VAR_15, WPACKET *VAR_16)
{
    EVP_PKEY *VAR_17 = ((void*)0);
    const EVP_MD *VAR_18 = ((void*)0);
    EVP_MD_CTX *VAR_19 = ((void*)0);
    EVP_PKEY_CTX *VAR_20 = ((void*)0);
    size_t VAR_21 = 0, VAR_22 = 0;
    void *VAR_23;
    unsigned char *VAR_24 = ((void*)0);
    unsigned char VAR_25[VAR_14 + VAR_4];
    const SIGALG_LOOKUP *VAR_26 = VAR_15->s3.tmp.sigalg;

    if (VAR_26 == ((void*)0) || VAR_15->s3.tmp.cert == ((void*)0)) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_1);
        goto err;
    }
    VAR_17 = VAR_15->s3.tmp.cert->privatekey;

    if (VAR_17 == ((void*)0) || !FUNC_19(VAR_26, &VAR_18)) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_1);
        goto err;
    }

    VAR_19 = FUNC_7();
    if (VAR_19 == ((void*)0)) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_2);
        goto err;
    }


    if (!FUNC_17(VAR_15, VAR_25, &VAR_23, &VAR_21)) {

        goto err;
    }

    if (FUNC_13(VAR_15) && !FUNC_15(VAR_16, VAR_26->sigalg)) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_1);
        goto err;
    }
    VAR_22 = FUNC_10(VAR_17);
    VAR_24 = FUNC_12(VAR_22);
    if (VAR_24 == ((void*)0)) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_2);
        goto err;
    }

    if (FUNC_3(VAR_19, &VAR_20, VAR_18, ((void*)0), VAR_17) <= 0) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_0);
        goto err;
    }

    if (VAR_26->sig == VAR_5) {
        if (FUNC_8(VAR_20, VAR_9) <= 0
            || FUNC_9(VAR_20,
                                                VAR_10) <= 0) {
            FUNC_14(VAR_15, VAR_12, VAR_13,
                     VAR_0);
            goto err;
        }
    }
    if (VAR_15->version == VAR_11) {
        if (FUNC_4(VAR_19, VAR_23, VAR_21) <= 0




            || FUNC_5(VAR_19, VAR_3,
                               (int)VAR_15->session->master_key_length,
                               VAR_15->session->master_key) <= 0
            || FUNC_2(VAR_19, VAR_24, &VAR_22) <= 0) {

            FUNC_14(VAR_15, VAR_12, VAR_13,
                     VAR_0);
            goto err;
        }
    } else if (FUNC_1(VAR_19, VAR_24, &VAR_22, VAR_23, VAR_21) <= 0) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_0);
        goto err;
    }


    {
        int VAR_27 = VAR_26->sig;

        if (VAR_27 == VAR_6
            || VAR_27 == VAR_7
            || VAR_27 == VAR_8)
            FUNC_0(VAR_24, ((void*)0), VAR_22);
    }


    if (!FUNC_16(VAR_16, VAR_24, VAR_22)) {
        FUNC_14(VAR_15, VAR_12, VAR_13,
                 VAR_1);
        goto err;
    }


    if (!FUNC_18(VAR_15, 0)) {

        goto err;
    }

    FUNC_11(VAR_24);
    FUNC_6(VAR_19);
    return 1;
 err:
    FUNC_11(VAR_24);
    FUNC_6(VAR_19);
    return 0;
}
