
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OCSP_SINGLERESP ;
typedef int OCSP_CERTID ;
typedef int OCSP_BASICRESP ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int*,int **,int **,int **) ;

int FUNC_3(OCSP_BASICRESP *VAR_0, OCSP_CERTID *VAR_1, int *VAR_2,
                          int *VAR_3,
                          ASN1_GENERALIZEDTIME **VAR_4,
                          ASN1_GENERALIZEDTIME **VAR_5,
                          ASN1_GENERALIZEDTIME **VAR_6)
{
    int VAR_7;
    OCSP_SINGLERESP *VAR_8;
    VAR_7 = FUNC_0(VAR_0, VAR_1, -1);

    if (VAR_7 < 0)
        return 0;
    VAR_8 = FUNC_1(VAR_0, VAR_7);
    VAR_7 = FUNC_2(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_2)
        *VAR_2 = VAR_7;
    return 1;
}
