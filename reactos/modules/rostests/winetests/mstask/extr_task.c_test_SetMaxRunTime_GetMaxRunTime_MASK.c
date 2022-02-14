
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_3;
    HRESULT VAR_4;
    DWORD VAR_5;

    VAR_3 = FUNC_4();
    FUNC_3(VAR_3, "Failed to setup test_task\n");
    if (!VAR_3)
    {
        FUNC_5("Failed to create task.  Skipping tests.\n");
        return;
    }



    VAR_5 = 0;
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "Failed to get max runtime: 0x%08x\n", VAR_4);
    FUNC_3(VAR_5 == 259200000, "Expected 259200000: %d\n", VAR_5);


    VAR_5 = 0;
    VAR_4 = FUNC_1(VAR_2, 1234);
    FUNC_3(VAR_4 == VAR_1, "Failed to set max runtime: 0x%08x\n", VAR_4);
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "Failed to get max runtime: 0x%08x\n", VAR_4);
    FUNC_3(VAR_5 == 1234, "Expected 1234: %d\n", VAR_5);


    VAR_5 = 1;
    VAR_4 = FUNC_1(VAR_2, 0);
    FUNC_3(VAR_4 == VAR_1, "Failed to set max runtime: 0x%08x\n", VAR_4);
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "Failed to get max runtime: 0x%08x\n", VAR_4);
    FUNC_3(VAR_5 == 0, "Expected 0: %d\n", VAR_5);


    VAR_5 = 0;
    VAR_4 = FUNC_1(VAR_2, 1);
    FUNC_3(VAR_4 == VAR_1, "Failed to set max runtime: 0x%08x\n", VAR_4);
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "Failed to get max runtime: 0x%08x\n", VAR_4);
    FUNC_3(VAR_5 == 1, "Expected 1: %d\n", VAR_5);


    VAR_5 = 0;
    VAR_4 = FUNC_1(VAR_2, VAR_0);
    FUNC_3(VAR_4 == VAR_1, "Failed to set max runtime: 0x%08x\n", VAR_4);
    VAR_4 = FUNC_0(VAR_2, &VAR_5);
    FUNC_3(VAR_4 == VAR_1, "Failed to get max runtime: 0x%08x\n", VAR_4);
    FUNC_3(VAR_5 == VAR_0, "Expected INFINITE: %d\n", VAR_5);

    FUNC_2();
    return;
}
