
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int * FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *,char*,int) ;
 int VAR_0 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,int *) ;

BIGNUM *FUNC_11(const char *VAR_1, int VAR_2, ASN1_INTEGER **VAR_3)
{
    BIO *VAR_4 = ((void*)0);
    BIGNUM *VAR_5 = ((void*)0);
    char VAR_6[1024];
    ASN1_INTEGER *VAR_7 = ((void*)0);

    VAR_7 = FUNC_1();
    if (VAR_7 == ((void*)0))
        goto err;

    VAR_4 = FUNC_4(VAR_1, "r");
    if (VAR_4 == ((void*)0)) {
        if (!VAR_2) {
            FUNC_9(VAR_1);
            goto err;
        }
        FUNC_7();
        VAR_5 = FUNC_6();
        if (VAR_5 == ((void*)0) || !FUNC_10(VAR_5, VAR_7))
            FUNC_5(VAR_0, "Out of memory\n");
    } else {
        if (!FUNC_8(VAR_4, VAR_7, VAR_6, 1024)) {
            FUNC_5(VAR_0, "unable to load number from %s\n",
                       VAR_1);
            goto err;
        }
        VAR_5 = FUNC_2(VAR_7, ((void*)0));
        if (VAR_5 == ((void*)0)) {
            FUNC_5(VAR_0,
                       "error converting number from bin to BIGNUM\n");
            goto err;
        }
    }

    if (VAR_5 && VAR_3) {
        *VAR_3 = VAR_7;
        VAR_7 = ((void*)0);
    }
 err:
    FUNC_3(VAR_4);
    FUNC_0(VAR_7);
    return VAR_5;
}
