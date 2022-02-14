
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int flags; int nid; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int **) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_9 (int ) ;

EVP_PKEY *FUNC_10(uint16_t VAR_5)
{
    EVP_PKEY_CTX *VAR_6 = ((void*)0);
    EVP_PKEY *VAR_7 = ((void*)0);
    const TLS_GROUP_INFO *VAR_8 = FUNC_9(VAR_5);
    int VAR_9;

    if (VAR_8 == ((void*)0))
        goto err;

    if ((VAR_8->flags & VAR_4) == VAR_2) {
        VAR_7 = FUNC_5();
        if (VAR_7 != ((void*)0) && FUNC_8(VAR_7, VAR_8->nid))
            return VAR_7;
        FUNC_4(VAR_7);
        return ((void*)0);
    }

    VAR_9 = (VAR_8->flags & VAR_3)
                        ? VAR_0 : VAR_1;
    VAR_6 = FUNC_1(VAR_9, ((void*)0));
    if (VAR_6 == ((void*)0))
        goto err;
    if (FUNC_7(VAR_6) <= 0)
        goto err;

    if (VAR_8->flags & VAR_3) {
        if (FUNC_2(VAR_6, VAR_8->nid) <= 0)
            goto err;
    }

    else



    {
        if (FUNC_3(VAR_6, VAR_8->nid) <= 0)
            goto err;
    }

    if (FUNC_6(VAR_6, &VAR_7) <= 0) {
        FUNC_4(VAR_7);
        VAR_7 = ((void*)0);
    }

 err:
    FUNC_0(VAR_6);
    return VAR_7;
}
