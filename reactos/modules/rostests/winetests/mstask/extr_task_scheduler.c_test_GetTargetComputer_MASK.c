
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,char**) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char*,scalar_t__,...) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    HRESULT VAR_6;
    WCHAR *VAR_7;


    VAR_6 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_3, (void **) &VAR_5);
    FUNC_4(VAR_6 == VAR_4, "CTaskScheduler CoCreateInstance failed: %08x\n", VAR_6);
    if (VAR_6 != VAR_4)
    {
        FUNC_5("Failed to create task scheduler.\n");
        return;
    }

    if (0)
    {

        VAR_6 = FUNC_2(VAR_5, ((void*)0));
        FUNC_4(VAR_6 == VAR_2, "got 0x%x (expected E_INVALIDARG)\n", VAR_6);
    }

    VAR_6 = FUNC_2(VAR_5, &VAR_7);
    FUNC_4((VAR_6 == VAR_4) && VAR_7 && VAR_7[0] == '\\' && VAR_7[1] == '\\' && VAR_7[2],
        "got 0x%x and %s (expected S_OK and an unc name)\n", VAR_6, FUNC_6(VAR_7));

    FUNC_1(VAR_7);

    FUNC_3(VAR_5);
    return;
}
