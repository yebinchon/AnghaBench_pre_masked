
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueA ;
typedef int keyA ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int CLSID ;
typedef char const CHAR ;


 int FUNC_0 (struct compat_value*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,char const*,int) ;
 scalar_t__ FUNC_3 (int ,int,char const*,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,char const*,int *) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 int FUNC_7 (char const*,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    struct compat_value {
        CHAR nameA[30];
        DWORD value;
    };

    struct compat_value VAR_2[] = {
        { "OTNEEDSSFCACHE", 0x1 },
        { "NO_WEBVIEW", 0x2 },
        { "UNBINDABLE", 0x4 },
        { "PINDLL", 0x8 },
        { "NEEDSFILESYSANCESTOR", 0x10 },
        { "NOTAFILESYSTEM", 0x20 },
        { "CTXMENU_NOVERBS", 0x40 },
        { "CTXMENU_LIMITEDQI", 0x80 },
        { "COCREATESHELLFOLDERONLY", 0x100 },
        { "NEEDSSTORAGEANCESTOR", 0x200 },
        { "NOLEGACYWEBVIEW", 0x400 },
        { "CTXMENU_XPQCMFLAGS", 0x1000 },
        { "NOIPROPERTYSTORE", 0x2000 }
    };

    static const char VAR_3[] = "Software\\Microsoft\\Windows\\CurrentVersion\\ShellCompatibility\\Objects";
    CHAR VAR_4[39];
    HKEY VAR_5;
    DWORD VAR_6;
    int VAR_7;


    VAR_6 = FUNC_8(((void*)0), ((void*)0));
    FUNC_6(VAR_6 == 0, "got %d\n", VAR_6);

    VAR_6 = FUNC_4(VAR_1, VAR_3, &VAR_5);
    if (VAR_6 != VAR_0)
    {
        FUNC_9("No compatibility class data found\n");
        return;
    }

    for (VAR_7 = 0; FUNC_2(VAR_5, VAR_7, VAR_4, sizeof(VAR_4)) == VAR_0; VAR_7++)
    {
        HKEY VAR_8;

        if (FUNC_4(VAR_5, VAR_4, &VAR_8) == VAR_0)
        {
            CHAR VAR_9[30];
            DWORD VAR_10 = 0, VAR_11, VAR_12 = sizeof(VAR_9);
            CLSID VAR_13;
            int VAR_14;

            for (VAR_14 = 0; FUNC_3(VAR_8, VAR_14, VAR_9, &VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == VAR_0; VAR_14++)
            {
                int VAR_15;

                for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_2); VAR_15++)
                    if (FUNC_5(VAR_2[VAR_15].nameA, VAR_9) == 0)
                    {
                        VAR_10 |= VAR_2[VAR_15].value;
                        break;
                    }

                VAR_12 = sizeof(VAR_9);
            }

            FUNC_7(VAR_4, &VAR_13);
            VAR_11 = FUNC_8(((void*)0), &VAR_13);
            FUNC_6(VAR_11 == VAR_10, "got 0x%08x, expected 0x%08x. Key %s\n", VAR_11, VAR_10, VAR_4);

            FUNC_1(VAR_8);
        }
    }

    FUNC_1(VAR_5);
}
