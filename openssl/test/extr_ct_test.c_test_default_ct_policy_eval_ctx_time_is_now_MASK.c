
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int CT_POLICY_EVAL_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int const) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void)
{
    int VAR_0 = 0;
    CT_POLICY_EVAL_CTX *VAR_1 = FUNC_2();
    const time_t VAR_2 =
        (time_t)(FUNC_1(VAR_1) / 1000);
    const time_t VAR_3 = 600;

    if (!FUNC_3(FUNC_4((int)FUNC_5(FUNC_6(((void*)0)), VAR_2)),
                        VAR_3))
        goto end;

    VAR_0 = 1;
end:
    FUNC_0(VAR_1);
    return VAR_0;
}
