
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 size_t FUNC_4 (int **) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(BN_CTX *VAR_1)
{
    int VAR_2 = 0;
    size_t VAR_3;
    BIGNUM *VAR_4[15];

    FUNC_2(VAR_1);
    for (VAR_3 = 0; VAR_3 < FUNC_4(VAR_4); VAR_3++) {
        if (!FUNC_5(VAR_4[VAR_3] = FUNC_1(VAR_1)))
            goto err;
        if (VAR_3 % 2 == 1)
            FUNC_3(VAR_4[VAR_3], VAR_0);
    }

    VAR_2 = 1;
 err:
    FUNC_0(VAR_1);
    return VAR_2;
}
