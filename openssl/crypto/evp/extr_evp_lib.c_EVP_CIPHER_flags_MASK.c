
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int EVP_CIPHER ;


 unsigned int FUNC_0 (int const*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (int const*,int *) ;

int FUNC_3(const EVP_CIPHER *VAR_3)
{
    int VAR_4;
    unsigned int VAR_5 = FUNC_0(VAR_3) & VAR_0;
    OSSL_PARAM VAR_6[2] = { VAR_2, VAR_2 };

    VAR_6[0] = FUNC_1(VAR_1, &VAR_5);
    VAR_4 = FUNC_2(VAR_3, VAR_6);

    return VAR_4 != 0 ? (int)VAR_5 : 0;
}
