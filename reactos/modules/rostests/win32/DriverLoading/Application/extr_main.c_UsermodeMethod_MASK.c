
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int BOOL ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static BOOL
FUNC_5(LPCWSTR VAR_3)
{
    FUNC_4(L"\nStarting %s.sys via the SCM\n", VAR_0);

    if (!FUNC_1(VAR_0))
    {
        FUNC_4(L"[%lu] Failed to start %s\n", FUNC_0(), VAR_0);
        FUNC_3(VAR_0);
        return VAR_1;
    }

    FUNC_4(L"\tStarted\n");

    FUNC_4(L"Stopping %s.sys via the SCM\n", VAR_0);

    if (!FUNC_2(VAR_0))
    {
        FUNC_4(L"[%lu] Failed to stop %s\n", FUNC_0(), VAR_0);
        FUNC_3(VAR_0);
        return VAR_1;
    }

    FUNC_4(L"\tStopped\n");

    return VAR_2;
}
