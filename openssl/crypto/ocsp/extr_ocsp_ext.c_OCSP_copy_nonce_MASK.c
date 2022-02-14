
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int OCSP_REQUEST ;
typedef int OCSP_BASICRESP ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(OCSP_BASICRESP *VAR_1, OCSP_REQUEST *VAR_2)
{
    X509_EXTENSION *VAR_3;
    int VAR_4;

    VAR_4 = FUNC_2(VAR_2, VAR_0, -1);

    if (VAR_4 < 0)
        return 2;
    VAR_3 = FUNC_1(VAR_2, VAR_4);
    return FUNC_0(VAR_1, VAR_3, -1);
}
