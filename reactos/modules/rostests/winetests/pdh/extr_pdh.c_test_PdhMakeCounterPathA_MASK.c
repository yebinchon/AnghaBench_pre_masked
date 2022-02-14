
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int e ;
typedef int buffer ;
struct TYPE_4__ {char* szMachineName; char* szObjectName; char* szInstanceName; char* szParentInstance; int dwInstanceIndex; char* szCounterName; } ;
typedef char* PDH_STATUS ;
typedef TYPE_1__ PDH_COUNTER_PATH_ELEMENTS_A ;
typedef int DWORD ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (TYPE_1__*,char*,int*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    PDH_STATUS VAR_2;
    PDH_COUNTER_PATH_ELEMENTS_A VAR_3;
    char VAR_4[1024];
    DWORD VAR_5;

    VAR_2 = FUNC_0(((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);

    VAR_5 = 0;
    VAR_2 = FUNC_0(((void*)0), ((void*)0), &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);

    VAR_5 = 0;
    VAR_2 = FUNC_0(((void*)0), VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);

    VAR_5 = sizeof(VAR_4);
    FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szMachineName = (char *)"machine";
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, ""), "expected \"machine\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szObjectName = (char *)"object";
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, ""), "expected \"machine\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szInstanceName = (char *)"instance";
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, ""), "expected \"machine\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szParentInstance = (char *)"parent";
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, ""), "expected \"machine\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.dwInstanceIndex = 1;
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, ""), "expected \"machine\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szCounterName = (char *)"counter";
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_0, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, "\\\\machine\\object(parent/instance#1)\\counter"),
       "expected \"\\\\machine\\object(parent/instance#1)\\counter\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szParentInstance = ((void*)0);
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_0, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, "\\\\machine\\object(instance#1)\\counter"),
       "expected \"\\\\machine\\object(instance#1)\\counter\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szInstanceName = ((void*)0);
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_0, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, "\\\\machine\\object\\counter"),
       "expected \"\\\\machine\\object\\counter\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szMachineName = ((void*)0);
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_0, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
    FUNC_2(!FUNC_3(VAR_4, "\\object\\counter"),
       "expected \"\\object\\counter\" got %s\n", VAR_4);

    VAR_4[0] = 0;
    VAR_5 = sizeof(VAR_4);
    VAR_3.szObjectName = ((void*)0);
    VAR_2 = FUNC_0(&VAR_3, VAR_4, &VAR_5, 0);
    FUNC_2(VAR_2 == VAR_1, "PdhMakeCounterPathA failed 0x%08x\n", VAR_2);
}
