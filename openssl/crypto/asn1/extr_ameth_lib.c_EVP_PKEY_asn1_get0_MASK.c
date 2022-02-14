
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_ASN1_METHOD ;


 int FUNC_0 (int const**) ;
 int VAR_0 ;
 int const* FUNC_1 (int ,int) ;
 int const** VAR_1 ;

const EVP_PKEY_ASN1_METHOD *FUNC_2(int VAR_2)
{
    int VAR_3 = FUNC_0(VAR_1);
    if (VAR_2 < 0)
        return ((void*)0);
    if (VAR_2 < VAR_3)
        return VAR_1[VAR_2];
    VAR_2 -= VAR_3;
    return FUNC_1(VAR_0, VAR_2);
}
