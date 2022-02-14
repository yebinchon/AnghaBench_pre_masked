
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * failInfo; int * statusString; int status; } ;
typedef TYPE_1__ OSSL_CMP_PKISI ;
typedef int ASN1_UTF8STRING ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *) ;

OSSL_CMP_PKISI *FUNC_10(int VAR_1, int VAR_2,
                                        const char *VAR_3)
{
    OSSL_CMP_PKISI *VAR_4 = FUNC_7();
    ASN1_UTF8STRING *VAR_5 = ((void*)0);
    int VAR_6;

    if (VAR_4 == ((void*)0))
        goto err;
    if (!FUNC_2(VAR_4->status, VAR_1))
        goto err;

    if (VAR_3 != ((void*)0)) {
        if ((VAR_5 = FUNC_5()) == ((void*)0)
                || !FUNC_3(VAR_5, VAR_3, -1))
            goto err;
        if ((VAR_4->statusString = FUNC_8()) == ((void*)0))
            goto err;
        if (!FUNC_9(VAR_4->statusString, VAR_5))
            goto err;

        VAR_5 = ((void*)0);
    }

    for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
        if ((VAR_2 & (1 << VAR_6)) != 0) {
            if (VAR_4->failInfo == ((void*)0)
                    && (VAR_4->failInfo = FUNC_0()) == ((void*)0))
                goto err;
            if (!FUNC_1(VAR_4->failInfo, VAR_6, 1))
                goto err;
        }
    }
    return VAR_4;

 err:
    FUNC_6(VAR_4);
    FUNC_4(VAR_5);
    return ((void*)0);
}
