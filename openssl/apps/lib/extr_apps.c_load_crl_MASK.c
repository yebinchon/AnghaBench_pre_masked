
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_CRL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int VAR_3 ;
 int * FUNC_4 (char const*,char,int) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (char const*,int *,int **) ;

X509_CRL *FUNC_7(const char *VAR_4, int VAR_5)
{
    X509_CRL *VAR_6 = ((void*)0);
    BIO *VAR_7 = ((void*)0);

    if (VAR_5 == VAR_1) {

        FUNC_6(VAR_4, ((void*)0), &VAR_6);

        return VAR_6;
    }

    VAR_7 = FUNC_4(VAR_4, 'r', VAR_5);
    if (VAR_7 == ((void*)0))
        goto end;
    if (VAR_5 == VAR_0) {
        VAR_6 = FUNC_5(VAR_7, ((void*)0));
    } else if (VAR_5 == VAR_2) {
        VAR_6 = FUNC_3(VAR_7, ((void*)0), ((void*)0), ((void*)0));
    } else {
        FUNC_1(VAR_3, "bad input format specified for input crl\n");
        goto end;
    }
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_3, "unable to load CRL\n");
        FUNC_2(VAR_3);
        goto end;
    }

 end:
    FUNC_0(VAR_7);
    return VAR_6;
}
