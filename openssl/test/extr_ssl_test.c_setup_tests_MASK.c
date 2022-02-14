
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,char*,long*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int VAR_1 ;

int FUNC_8(void)
{
    long VAR_2;

    if (!FUNC_6(VAR_0 = FUNC_3(((void*)0)))

            || !FUNC_4(FUNC_2(VAR_0, FUNC_7(0), ((void*)0)), 0)
            || !FUNC_5(FUNC_1(VAR_0, ((void*)0), "num_tests",
                                               &VAR_2), 0))
        return 0;

    FUNC_0(VAR_1, (int)VAR_2);
    return 1;
}
