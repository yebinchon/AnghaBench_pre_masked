
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int,int *,int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(int VAR_0)
{
    BIGNUM *VAR_1;
    int VAR_2 = 0;

    if (!FUNC_6(VAR_1 = FUNC_2()))
        goto err;

    if (VAR_0 <= 5 && VAR_0 != 3) {
        if (!FUNC_4(FUNC_1(VAR_1, VAR_0, 1,
                                             ((void*)0), ((void*)0), ((void*)0))))
            goto err;
    } else {
        if (!FUNC_7(FUNC_1(VAR_1, VAR_0, 1,
                                            ((void*)0), ((void*)0), ((void*)0)))
                || !FUNC_5(FUNC_3(VAR_1), VAR_0))
            goto err;
    }

    VAR_2 = 1;
 err:
    FUNC_0(VAR_1);
    return VAR_2;
}
