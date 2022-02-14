
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flags1 ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char const*,int *,int *,int ,int*) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{







    static const CHAR VAR_3[] =
     "Software\\Microsoft\\Windows\\CurrentVersion\\Wintrust\\"
     "Trust Providers\\Software Publishing";
    static const CHAR VAR_4[] = "State";
    HKEY VAR_5;
    LONG VAR_6;
    DWORD VAR_7, VAR_8, VAR_9, VAR_10;
    BOOL VAR_11;

    if (!&FUNC_5 || !&FUNC_6)
    {
        FUNC_7("Policy flags functions not present\n");
        return;
    }

    FUNC_5(&VAR_8);

    VAR_6 = FUNC_2(VAR_1, VAR_3, 0, VAR_2,
     &VAR_5);
    FUNC_4(!VAR_6, "RegOpenKeyEx failed: %d\n", VAR_6);

    VAR_10 = sizeof(VAR_7);
    VAR_6 = FUNC_3(VAR_5, VAR_4, ((void*)0), ((void*)0), (LPBYTE)&VAR_7, &VAR_10);
    FUNC_4(!VAR_6 || VAR_6 == VAR_0, "RegQueryValueEx failed: %d\n", VAR_6);
    if (!VAR_6)
        FUNC_4(VAR_7 == VAR_8, "Got %08x flags instead of %08x\n", VAR_7, VAR_8);

    VAR_9 = VAR_8 | 1;
    VAR_11 = FUNC_6(VAR_9);
    FUNC_4(VAR_11, "WintrustSetRegPolicyFlags failed: %d\n", FUNC_0());
    VAR_10 = sizeof(VAR_7);
    VAR_6 = FUNC_3(VAR_5, VAR_4, ((void*)0), ((void*)0), (LPBYTE)&VAR_7, &VAR_10);
    FUNC_4(!VAR_6, "RegQueryValueEx failed: %d\n", VAR_6);
    FUNC_4(VAR_7 == VAR_9, "Got %08x flags instead of %08x\n", VAR_7, VAR_9);

    FUNC_6(VAR_8);

    FUNC_1(VAR_5);
}
