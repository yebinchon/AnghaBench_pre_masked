
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void)
{
    BN_CTX *VAR_0 = ((void*)0);
    BN_CTX *VAR_1 = ((void*)0);
    size_t VAR_2 = 0;
    int VAR_3 = 0;

    if (!FUNC_3(VAR_0 = FUNC_1())
            || !FUNC_3(VAR_1 = FUNC_2()))
        goto err;

    for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        BN_CTX *VAR_4 = VAR_2 == 0 ? VAR_0 : VAR_1;
        if (!FUNC_4(FUNC_6(VAR_4))
                || !FUNC_4(FUNC_5(VAR_4)))
            goto err;
    }

    VAR_3 = 1;
 err:
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
    return VAR_3;
}
