
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUnknown ;
typedef int ITask ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,char const*,int *,int *,int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (char*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_7(void)
{
    HRESULT VAR_9;
    ITask *VAR_10;
    const WCHAR VAR_11[] = {'T', 'e', 's', 't', 'i', 'n', 'g', 0};
    GUID VAR_12;


    FUNC_0(&VAR_12);


    VAR_9 = FUNC_1(&VAR_3, ((void*)0), VAR_1,
            &VAR_6, (void **) &VAR_8);
    FUNC_5(VAR_9 == VAR_7, "CTaskScheduler CoCreateInstance failed: %08x\n", VAR_9);
    if (VAR_9 != VAR_7)
    {
        FUNC_6("Failed to create task scheduler.  Skipping tests.\n");
        return;
    }


    VAR_9 = FUNC_2(VAR_8, VAR_11,
            &VAR_2, &VAR_5, (IUnknown**)&VAR_10);
    FUNC_5(VAR_9 == VAR_7, "NewNetworkItem failed: %08x\n", VAR_9);
    if (VAR_9 == VAR_7)
        FUNC_4(VAR_10);


    VAR_9 = FUNC_2(VAR_8, VAR_11,
            &VAR_12, &VAR_5, (IUnknown**)&VAR_10);
    FUNC_5(VAR_9 == VAR_0,
            "Expected CLASS_E_CLASSNOTAVAILABLE: %08x\n", VAR_9);


    VAR_9 = FUNC_2(VAR_8, VAR_11,
            &VAR_2, &VAR_12, (IUnknown**)&VAR_10);
    FUNC_5(VAR_9 == VAR_4, "Expected E_NOINTERFACE: %08x\n", VAR_9);


    VAR_9 = FUNC_2(VAR_8, VAR_11,
            &VAR_12, &VAR_12, (IUnknown**)&VAR_10);
    FUNC_5(VAR_9 == VAR_0,
            "Expected CLASS_E_CLASSNOTAVAILABLE: %08x\n", VAR_9);

    FUNC_3(VAR_8);
    return;
}
