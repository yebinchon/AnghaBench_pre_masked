
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,void (*) (int,int,void*),void*) ;
 int FUNC_1 (int const*,int,int *,int ,int *) ;

int FUNC_2(const BIGNUM *VAR_0, int VAR_1,
                void (*VAR_2) (int, int, void *), BN_CTX *VAR_3,
                void *VAR_4)
{
    BN_GENCB VAR_5;
    FUNC_0(&VAR_5, VAR_2, VAR_4);
    return FUNC_1(VAR_0, VAR_1, VAR_3, 0, &VAR_5);
}
