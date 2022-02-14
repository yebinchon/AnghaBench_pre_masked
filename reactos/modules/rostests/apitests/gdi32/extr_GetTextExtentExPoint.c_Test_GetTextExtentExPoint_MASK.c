
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int*,int *,int *) ;
 int FUNC_2 (int ,char*,int,int,int*,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,int) ;

void FUNC_7()
{
    INT VAR_0;
    SIZE VAR_1;
    BOOL VAR_2;

    FUNC_3(0);

    VAR_2 = FUNC_1(FUNC_0(0), "test", 4, 1000, &VAR_0, ((void*)0), &VAR_1);
    FUNC_5(VAR_2, 1);
    FUNC_5(VAR_0, 4);
    FUNC_4(0);
    FUNC_6("nFit = %d\n", VAR_0);

    VAR_2 = FUNC_1(FUNC_0(0), "test", 4, 1, &VAR_0, ((void*)0), &VAR_1);
    FUNC_5(VAR_2, 1);
    FUNC_5(VAR_0, 0);
    FUNC_4(0);
    FUNC_6("nFit = %d\n", VAR_0);

    VAR_2 = FUNC_1(FUNC_0(0), "test", 4, 0, &VAR_0, ((void*)0), &VAR_1);
    FUNC_5(VAR_2, 1);
    FUNC_5(VAR_0, 0);
    FUNC_4(0);

    VAR_2 = FUNC_1(FUNC_0(0), "test", 4, -1, &VAR_0, ((void*)0), &VAR_1);
    FUNC_5(VAR_2, 1);
    FUNC_5(VAR_0, 4);
    FUNC_4(0);

    VAR_2 = FUNC_1(FUNC_0(0), "test", 4, -2, &VAR_0, ((void*)0), &VAR_1);
    FUNC_5(VAR_2, 0);
    FUNC_4(87);

    VAR_2 = FUNC_2(FUNC_0(0), L"test", 4, -10, &VAR_0, ((void*)0), &VAR_1);
    FUNC_5(VAR_2, 1);

    VAR_2 = FUNC_1(FUNC_0(0), "test", 4, -10, &VAR_0, ((void*)0), &VAR_1);
    FUNC_5(VAR_2, 0);
}
