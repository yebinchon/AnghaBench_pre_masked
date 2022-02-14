
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(EVP_PKEY *VAR_1)
{
    int VAR_2 = FUNC_3(VAR_1);


    if (VAR_2 == VAR_0) {
        const EC_KEY *VAR_3 = FUNC_2(VAR_1);
        return FUNC_0(FUNC_1(VAR_3));
    }

    return VAR_2;
}
