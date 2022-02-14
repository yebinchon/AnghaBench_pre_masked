
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUnknown ;
typedef int ITask ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,char const*,int *,int **) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
    HRESULT VAR_7;
    ITask *VAR_8 = ((void*)0);
    const WCHAR VAR_9[] =
            {'N', 'o', 'S', 'u', 'c', 'h', 'T', 'a', 's', 'k', 0};


    VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_4, (void **) &VAR_6);
    FUNC_3(VAR_7 == VAR_5, "CTaskScheduler CoCreateInstance failed: %08x\n", VAR_7);
    if (VAR_7 != VAR_5)
    {
        FUNC_4("Failed to create task scheduler.  Skipping tests.\n");
        return;
    }


    VAR_7 = FUNC_1(VAR_6, VAR_9,
            &VAR_3, (IUnknown**)&VAR_8);
    FUNC_3(VAR_7 == VAR_2, "Expected COR_E_FILENOTFOUND: %08x\n", VAR_7);

    FUNC_2(VAR_6);
    return;
}
