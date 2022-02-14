
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prime_t ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_8(void)
{
    int VAR_2 = 0, VAR_3;
    BIGNUM *VAR_4 = ((void*)0);

    if (!(FUNC_5(VAR_4 = FUNC_2()) && FUNC_6(FUNC_3(VAR_4, 3))))
        goto err;

    for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
        prime_t VAR_5 = VAR_1[VAR_3];
        if (VAR_5 > 3 && VAR_5 <= 751 && !FUNC_1(VAR_4, VAR_5))
            goto err;
        if (VAR_5 > 751)
            break;
    }
    VAR_2 = FUNC_4(FUNC_7(), VAR_4);
err:
    FUNC_0(VAR_4);
    return VAR_2;
}
