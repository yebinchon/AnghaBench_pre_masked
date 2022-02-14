
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ,int *) ;
 int FUNC_2 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_4 (int *,int,int *,int ,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(void)
{
    BIGNUM *VAR_0 = ((void*)0), *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
    int VAR_3 = 0;

    if (!FUNC_9(VAR_2 = FUNC_5())
            || !FUNC_9(VAR_0 = FUNC_5())
            || !FUNC_9(VAR_1 = FUNC_5()))
        goto err;
    FUNC_7(VAR_2);

    if (!FUNC_10(FUNC_1(VAR_1, VAR_0, VAR_2, FUNC_6(), ((void*)0)))
            || !FUNC_8(VAR_1)
            || !FUNC_10(FUNC_2(VAR_1, VAR_0, VAR_2, FUNC_6(),
                                          ((void*)0), ((void*)0)))
            || !FUNC_8(VAR_1)
            || !FUNC_10(FUNC_3(VAR_1, VAR_0, VAR_2,
                                                    FUNC_6(),
                                                    ((void*)0), ((void*)0)))
            || !FUNC_8(VAR_1)
            || !FUNC_10(FUNC_4(VAR_1, 42, VAR_2,
                                               FUNC_6(), ((void*)0), ((void*)0)))
            || !FUNC_8(VAR_1))
        goto err;

    VAR_3 = 1;
 err:
    FUNC_0(VAR_2);
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
    return VAR_3;
}
