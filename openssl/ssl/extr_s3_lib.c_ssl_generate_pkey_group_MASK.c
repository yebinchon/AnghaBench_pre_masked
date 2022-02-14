
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int flags; int nid; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;
typedef int SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int DH ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int **) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_12 (int) ;

EVP_PKEY *FUNC_13(SSL *VAR_10, uint16_t VAR_11)
{
    const TLS_GROUP_INFO *VAR_12 = FUNC_12(VAR_11);
    EVP_PKEY_CTX *VAR_13 = ((void*)0);
    EVP_PKEY *VAR_14 = ((void*)0);
    uint16_t VAR_15;

    DH *VAR_16 = ((void*)0);


    if (VAR_12 == ((void*)0)) {
        FUNC_11(VAR_10, VAR_5, VAR_6,
                 VAR_1);
        goto err;
    }
    VAR_15 = VAR_12->flags & VAR_9;

    if (VAR_15 == VAR_8)
        VAR_13 = FUNC_3(VAR_3, ((void*)0));

    else



    {
        if (VAR_15 == VAR_7)
            VAR_13 = FUNC_3(VAR_12->nid, ((void*)0));
        else
            VAR_13 = FUNC_3(VAR_4, ((void*)0));
    }

    if (VAR_13 == ((void*)0)) {
        FUNC_11(VAR_10, VAR_5, VAR_6,
                 VAR_2);
        goto err;
    }
    if (FUNC_9(VAR_13) <= 0) {
        FUNC_11(VAR_10, VAR_5, VAR_6,
                 VAR_0);
        goto err;
    }

    if (VAR_15 == VAR_8) {
        if ((VAR_14 = FUNC_10()) == ((void*)0)
                || (VAR_16 = FUNC_1(VAR_12->nid)) == ((void*)0)
                || !FUNC_6(VAR_14, VAR_3, VAR_16)) {
            FUNC_11(VAR_10, VAR_5, VAR_6,
                    VAR_0);
            FUNC_0(VAR_16);
            FUNC_7(VAR_14);
            VAR_14 = ((void*)0);
            goto err;
        }
        if (FUNC_4(VAR_13, VAR_12->nid) <= 0) {
            FUNC_11(VAR_10, VAR_5, VAR_6,
                    VAR_0);
            FUNC_7(VAR_14);
            VAR_14 = ((void*)0);
            goto err;
        }
    }

    else



    {
        if (VAR_15 != VAR_7
                && FUNC_5(VAR_13, VAR_12->nid) <= 0) {
            FUNC_11(VAR_10, VAR_5, VAR_6,
                     VAR_0);
            goto err;
        }
    }

    if (FUNC_8(VAR_13, &VAR_14) <= 0) {
        FUNC_11(VAR_10, VAR_5, VAR_6,
                 VAR_0);
        FUNC_7(VAR_14);
        VAR_14 = ((void*)0);
    }

 err:
    FUNC_2(VAR_13);
    return VAR_14;
}
