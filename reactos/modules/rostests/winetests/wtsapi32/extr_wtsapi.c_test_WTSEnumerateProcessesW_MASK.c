
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int pProcessName; } ;
typedef TYPE_1__* PWTS_PROCESS_INFOW ;
typedef size_t DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int,TYPE_1__**,size_t*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    BOOL VAR_4 = VAR_1, VAR_5;
    DWORD VAR_6, VAR_7;
    PWTS_PROCESS_INFOW VAR_8;
    WCHAR *VAR_9, VAR_10[VAR_2];

    FUNC_1(((void*)0), VAR_10, VAR_2);
    for (VAR_9 = VAR_10 + FUNC_7(VAR_10); VAR_9 > VAR_10; VAR_9--)
    {
        if(*VAR_9 == '/' || *VAR_9 == '\\')
        {
            VAR_9++;
            break;
        }
    }

    VAR_8 = ((void*)0);
    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_3(VAR_3, 1, 1, &VAR_8, &VAR_6);
    FUNC_8(!VAR_5, "expected WTSEnumerateProcessesW to fail\n");
    FUNC_8(FUNC_0()== VAR_0, "expected ERROR_INVALID_PARAMETER got: %d\n", FUNC_0());
    if (VAR_8) FUNC_4(VAR_8);

    VAR_8 = ((void*)0);
    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_3(VAR_3, 0, 0, &VAR_8, &VAR_6);
    FUNC_8(!VAR_5, "expected WTSEnumerateProcessesW to fail\n");
    FUNC_8(FUNC_0()== VAR_0, "expected ERROR_INVALID_PARAMETER got: %d\n", FUNC_0());
    if (VAR_8) FUNC_4(VAR_8);

    VAR_8 = ((void*)0);
    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_3(VAR_3, 0, 2, &VAR_8, &VAR_6);
    FUNC_8(!VAR_5, "expected WTSEnumerateProcessesW to fail\n");
    FUNC_8(FUNC_0()== VAR_0, "expected ERROR_INVALID_PARAMETER got: %d\n", FUNC_0());
    if (VAR_8) FUNC_4(VAR_8);

    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_3(VAR_3, 0, 1, ((void*)0), &VAR_6);
    FUNC_8(!VAR_5, "expected WTSEnumerateProcessesW to fail\n");
    FUNC_8(FUNC_0()== VAR_0, "expected ERROR_INVALID_PARAMETER got: %d\n", FUNC_0());

    VAR_8 = ((void*)0);
    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_3(VAR_3, 0, 1, &VAR_8, ((void*)0));
    FUNC_8(!VAR_5, "expected WTSEnumerateProcessesW to fail\n");
    FUNC_8(FUNC_0()== VAR_0, "expected ERROR_INVALID_PARAMETER got: %d\n", FUNC_0());
    if (VAR_8) FUNC_4(VAR_8);

    VAR_6 = 0;
    VAR_8 = ((void*)0);
    FUNC_2(0xdeadbeef);
    VAR_5 = FUNC_3(VAR_3, 0, 1, &VAR_8, &VAR_6);
    FUNC_8(VAR_5 || FUNC_5(!VAR_5),
        "expected WTSEnumerateProcessesW to succeed; failed with %d\n", FUNC_0());
    for(VAR_7 = 0; VAR_5 && VAR_7 < VAR_6; VAR_7++)
    {
        VAR_4 = VAR_4 || !FUNC_6(VAR_9, VAR_8[VAR_7].pProcessName);
    }
    FUNC_8(VAR_4 || FUNC_5(!VAR_5), "process name %s not found\n", FUNC_9(VAR_9));
    if (VAR_8) FUNC_4(VAR_8);
}
