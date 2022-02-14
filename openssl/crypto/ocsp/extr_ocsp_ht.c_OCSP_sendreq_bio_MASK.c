
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OCSP_RESPONSE ;
typedef int OCSP_REQ_CTX ;
typedef int OCSP_REQUEST ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *) ;
 int * FUNC_3 (int *,char const*,int *,int) ;

OCSP_RESPONSE *FUNC_4(BIO *VAR_0, const char *VAR_1, OCSP_REQUEST *VAR_2)
{
    OCSP_RESPONSE *VAR_3 = ((void*)0);
    OCSP_REQ_CTX *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, -1);

    if (VAR_4 == ((void*)0))
        return ((void*)0);

    do {
        VAR_5 = FUNC_2(&VAR_3, VAR_4);
    } while ((VAR_5 == -1) && FUNC_0(VAR_0));

    FUNC_1(VAR_4);

    if (VAR_5)
        return VAR_3;

    return ((void*)0);
}
