
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509V3_EXT_METHOD ;
typedef int BIGNUM ;
typedef int ASN1_ENUMERATED ;


 int * FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 char* FUNC_3 (int *) ;

char *FUNC_4(X509V3_EXT_METHOD *VAR_2, const ASN1_ENUMERATED *VAR_3)
{
    BIGNUM *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);

    if (!VAR_3)
        return ((void*)0);
    if ((VAR_4 = FUNC_0(VAR_3, ((void*)0))) == ((void*)0)
        || (VAR_5 = FUNC_3(VAR_4)) == ((void*)0))
        FUNC_2(VAR_1, VAR_0);
    FUNC_1(VAR_4);
    return VAR_5;
}
