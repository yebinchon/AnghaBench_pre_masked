
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ITaskTrigger ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_2;
    HRESULT VAR_3;
    WORD VAR_4;
    ITaskTrigger *VAR_5;

    VAR_2 = FUNC_4();
    FUNC_3(VAR_2, "Failed to setup test_task\n");
    if (!VAR_2)
    {
        FUNC_5("Failed to create task.  Skipping tests.\n");
        return;
    }

    VAR_3 = FUNC_1(VAR_1, &VAR_4, &VAR_5);
    FUNC_3(VAR_3 == VAR_0, "Failed to create trigger: 0x%08x\n", VAR_3);
    if (VAR_3 != VAR_0)
    {
        FUNC_2();
        return;
    }

    FUNC_0(VAR_5);
    FUNC_2();
    return;
}
