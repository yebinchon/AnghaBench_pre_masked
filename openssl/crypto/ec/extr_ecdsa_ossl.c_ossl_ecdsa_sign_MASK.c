
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned char const*,int,int const*,int const*,int *) ;
 unsigned int FUNC_2 (int *,unsigned char**) ;

int FUNC_3(int VAR_0, const unsigned char *VAR_1, int VAR_2,
                    unsigned char *VAR_3, unsigned int *VAR_4,
                    const BIGNUM *VAR_5, const BIGNUM *VAR_6, EC_KEY *VAR_7)
{
    ECDSA_SIG *VAR_8;

    VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7);
    if (VAR_8 == ((void*)0)) {
        *VAR_4 = 0;
        return 0;
    }
    *VAR_4 = FUNC_2(VAR_8, &VAR_3);
    FUNC_0(VAR_8);
    return 1;
}
