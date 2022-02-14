
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int test_exe ;
struct TYPE_4__ {scalar_t__ type; int * data; } ;
typedef TYPE_1__ reg_save_value ;
typedef int HKEY ;
typedef char* DWORD ;
typedef int BYTE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,char const*,int *) ;
 char* FUNC_5 (int ,char const*,int ,int *,int ,int ,int *,int *,char**) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,char*,int ,int ,int *,int) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int,char*,char*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int ,char*,TYPE_1__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char const*,int *) ;
 int FUNC_17 (char*) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_18(void)
{
    static const char* VAR_16="Software\\Microsoft\\Windows NT\\CurrentVersion\\AeDebug";
    static const char* VAR_17="Software\\Wine\\WineDbg";
    char VAR_18[VAR_7];
    DWORD VAR_19;
    HKEY VAR_20;
    DWORD VAR_21;
    reg_save_value VAR_22;
    reg_save_value VAR_23;

    FUNC_1(FUNC_2(((void*)0)), VAR_18, sizeof(VAR_18));
    if (FUNC_0(VAR_18) == VAR_5)
        FUNC_14(VAR_18, ".so");
    if (FUNC_0(VAR_18) == VAR_5)
    {
        FUNC_10(0, "could not find the test executable '%s'\n", VAR_18);
        return;
    }

    VAR_19=FUNC_5(VAR_4, VAR_16, 0, ((void*)0), VAR_11, VAR_6, ((void*)0), &VAR_20, &VAR_21);
    if (VAR_19 == VAR_2)
    {
        FUNC_12(VAR_20, "auto", &VAR_22);
        FUNC_12(VAR_20, "debugger", &VAR_23);
        FUNC_16("HKLM\\%s\\debugger is set to '%s'\n", VAR_16, VAR_23.data);
    }
    else if (VAR_19 == VAR_0)
    {
        FUNC_13("not enough privileges to change the debugger\n");
        return;
    }
    else if (VAR_19 != VAR_1)
    {
        FUNC_10(0, "could not open the AeDebug key: %d\n", VAR_19);
        return;
    }
    else VAR_23.data = ((void*)0);

    if (VAR_23.data && VAR_23.type == VAR_12 &&
        FUNC_15((char*)VAR_23.data, "winedbg --auto"))
    {
        HKEY VAR_24;
        VAR_19=FUNC_4(VAR_3, VAR_17, &VAR_24);
        if (VAR_19 == VAR_2)
        {
            static DWORD VAR_25;
            reg_save_value VAR_26;
            FUNC_12(VAR_24, "ShowCrashDialog", &VAR_26);
            FUNC_7(VAR_24, "ShowCrashDialog", 0, VAR_9, (BYTE *)&VAR_25, sizeof(DWORD));
            FUNC_9(VAR_20, VAR_18);
            FUNC_11(VAR_24, &VAR_26);
            FUNC_3(VAR_24);
        }
        else
            FUNC_10(0, "Couldn't access WineDbg Key - error %u\n", VAR_19);
    }

    if (VAR_15)



        FUNC_8(VAR_20, VAR_18, "dbg,none");
    else
        FUNC_13("\"none\" debugger test needs user interaction\n");
    FUNC_10(VAR_21 == VAR_10, "expected REG_OPENED_EXISTING_KEY, got %d\n", VAR_21);
    FUNC_8(VAR_20, VAR_18, "dbg,event,order");
    FUNC_8(VAR_20, VAR_18, "dbg,attach,event,code2");
    if (VAR_14)
        FUNC_8(VAR_20, VAR_18, "dbg,attach,event,nokill");
    else
        FUNC_17("DebugSetProcessKillOnExit is not available\n");
    if (VAR_13)
        FUNC_8(VAR_20, VAR_18, "dbg,attach,event,detach");
    else
        FUNC_17("DebugActiveProcessStop is not available\n");

    if (VAR_21 == VAR_8)
    {
        FUNC_3(VAR_20);
        FUNC_6(VAR_4, VAR_16);
    }
    else
    {
        FUNC_11(VAR_20, &VAR_22);
        FUNC_11(VAR_20, &VAR_23);
        FUNC_3(VAR_20);
    }
}
