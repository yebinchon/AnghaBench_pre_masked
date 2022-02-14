
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BN_BLINDING ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(BN_BLINDING *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2,
                                BN_CTX *VAR_3)
{
    if (VAR_2 == ((void*)0)) {



        return FUNC_0(VAR_1, ((void*)0), VAR_0, VAR_3);
    } else {



        int VAR_4;

        FUNC_1(VAR_0);
        VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);
        FUNC_2(VAR_0);

        return VAR_4;
    }
}
