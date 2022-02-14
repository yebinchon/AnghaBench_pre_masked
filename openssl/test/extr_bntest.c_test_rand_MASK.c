
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void)
{
    BIGNUM *VAR_0 = ((void*)0);
    int VAR_1 = 0;

    if (!FUNC_6(VAR_0 = FUNC_1()))
        return 0;


    if (!FUNC_5(FUNC_2(VAR_0, 0, 0 , 0 ))
            || !FUNC_5(FUNC_2(VAR_0, 0, 1 , 1 ))
            || !FUNC_7(FUNC_2(VAR_0, 1, 0 , 0 ))
            || !FUNC_3(VAR_0)
            || !FUNC_5(FUNC_2(VAR_0, 1, 1 , 0 ))
            || !FUNC_7(FUNC_2(VAR_0, 1, -1 , 1 ))
            || !FUNC_3(VAR_0)
            || !FUNC_7(FUNC_2(VAR_0, 2, 1 , 0 ))
            || !FUNC_4(VAR_0, 3))
        goto err;

    VAR_1 = 1;
 err:
    FUNC_0(VAR_0);
    return VAR_1;
}
