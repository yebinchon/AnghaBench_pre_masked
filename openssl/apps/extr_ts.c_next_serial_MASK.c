
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIO ;
typedef int BIGNUM ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int *,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static ASN1_INTEGER *FUNC_12(const char *VAR_1)
{
    int VAR_2 = 0;
    BIO *VAR_3 = ((void*)0);
    ASN1_INTEGER *VAR_4 = ((void*)0);
    BIGNUM *VAR_5 = ((void*)0);

    if ((VAR_4 = FUNC_1()) == ((void*)0))
        goto err;

    if ((VAR_3 = FUNC_5(VAR_1, "r")) == ((void*)0)) {
        FUNC_10();
        FUNC_6(VAR_0, "Warning: could not open file %s for "
                   "reading, using serial number: 1\n", VAR_1);
        if (!FUNC_2(VAR_4, 1))
            goto err;
    } else {
        char VAR_6[1024];
        if (!FUNC_11(VAR_3, VAR_4, VAR_6, sizeof(VAR_6))) {
            FUNC_6(VAR_0, "unable to load number from %s\n",
                       VAR_1);
            goto err;
        }
        if ((VAR_5 = FUNC_3(VAR_4, ((void*)0))) == ((void*)0))
            goto err;
        FUNC_0(VAR_4);
        VAR_4 = ((void*)0);
        if (!FUNC_7(VAR_5, 1))
            goto err;
        if ((VAR_4 = FUNC_9(VAR_5, ((void*)0))) == ((void*)0))
            goto err;
    }
    VAR_2 = 1;

 err:
    if (!VAR_2) {
        FUNC_0(VAR_4);
        VAR_4 = ((void*)0);
    }
    FUNC_4(VAR_3);
    FUNC_8(VAR_5);
    return VAR_4;
}
