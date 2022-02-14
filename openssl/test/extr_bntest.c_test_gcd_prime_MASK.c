
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (int *,int,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(void)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    int VAR_5, VAR_6 = 0;

    if (!FUNC_5(VAR_2 = FUNC_4())
            || !FUNC_5(VAR_3 = FUNC_4())
            || !FUNC_5(VAR_4 = FUNC_4()))
        goto err;

    if (!FUNC_6(FUNC_2(VAR_2, 1024, 0, ((void*)0), ((void*)0), ((void*)0))))
            goto err;
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (!FUNC_6(FUNC_2(VAR_3, 1024, 0,
                                            ((void*)0), ((void*)0), ((void*)0)))
                || !FUNC_6(FUNC_1(VAR_4, VAR_2, VAR_3, VAR_1))
                || !FUNC_6(FUNC_3(VAR_4)))
            goto err;
    }

    VAR_6 = 1;
 err:
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    return VAR_6;
}
