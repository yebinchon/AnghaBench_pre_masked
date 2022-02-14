
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char TCHAR ;
typedef int LPBYTE ;
typedef int INT ;
typedef int HKEY ;
typedef int HANDLE ;
typedef int FILETIME ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int *,int*,int ,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int) ;
 int VAR_12 ;
 char* FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*,int,char*) ;

int FUNC_12(DWORD VAR_13, INT VAR_14)
{
    HKEY VAR_15, VAR_16;
    DWORD VAR_17, VAR_18, VAR_19;
    TCHAR VAR_20[VAR_7];
    TCHAR VAR_21[VAR_7];
    TCHAR VAR_22[VAR_7];
    TCHAR VAR_23[VAR_7];
    FILETIME VAR_24;
    BOOL VAR_25 = VAR_2;
    BOOL VAR_26 = VAR_2;
    INT VAR_27 = 0, VAR_28 = 0, VAR_29 = 1;
    HANDLE VAR_30;

    if (FUNC_5(VAR_6,
                   FUNC_8("Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall"),
                   &VAR_15) != VAR_1)
    {
        FUNC_10(FUNC_8("ERROR: Can not open Uninstall key. Press any key for continue...\n"));
        FUNC_9();
        return 0;
    }

    VAR_30 = FUNC_2(VAR_11);
    FUNC_7(VAR_30, VAR_3 | VAR_4);

    VAR_17 = VAR_7;
    while (FUNC_4(VAR_15, VAR_27, VAR_20, &VAR_17, ((void*)0), ((void*)0), ((void*)0), &VAR_24) == VAR_1)
    {
        if (FUNC_5(VAR_15, VAR_20, &VAR_16) == VAR_1)
        {
            VAR_18 = VAR_8;
            VAR_17 = sizeof(DWORD);

            if (FUNC_6(VAR_16, FUNC_8("SystemComponent"),
                                ((void*)0), &VAR_18,
                                (LPBYTE)&VAR_19, &VAR_17) == VAR_1)
            {
                VAR_26 = (VAR_19 == 0x1);
            }
            else
            {
                VAR_26 = VAR_2;
            }

            VAR_18 = VAR_9;
            VAR_17 = VAR_7;

            VAR_25 = (FUNC_6(VAR_16, FUNC_8("ParentKeyName"),
                                         ((void*)0), &VAR_18,
                                         (LPBYTE) VAR_21,
                                         &VAR_17) == VAR_1);
            VAR_17 = VAR_7;
            if (FUNC_6(VAR_16, FUNC_8("DisplayName"),
                                ((void*)0), &VAR_18,
                                (LPBYTE) VAR_22,
                                &VAR_17) == VAR_1)
            {
                if (!VAR_26)
                {
                    if ((VAR_13 == VAR_10) || ((VAR_13 == VAR_0) && (!VAR_25)) || ((VAR_13 == VAR_12) && (VAR_25)))
                    {
                        if (VAR_14 == -1)
                        {
                            FUNC_11(VAR_23, FUNC_8(" %d \t %s\n"), VAR_29, VAR_22);
                            FUNC_1(VAR_23, VAR_23);
                            FUNC_10("%s", VAR_23);
                        }
                        else
                        {
                            VAR_18 = VAR_9;
                            VAR_17 = VAR_7;

                            if ((FUNC_6(VAR_16, FUNC_8("UninstallString"), ((void*)0), &VAR_18,
                                                (LPBYTE) VAR_23, &VAR_17) == VAR_1) && (VAR_14 == VAR_29))
                            {
                                FUNC_0(VAR_23);
                            }
                        }
                        VAR_29++;
                        VAR_28++;
                    }
                }
            }
        }

        if (VAR_28 <= 5)
        {
            FUNC_7(VAR_30, VAR_3 | VAR_4);
        }
        else
        {
            FUNC_7(VAR_30, VAR_3 | VAR_4 | VAR_5);
            if (VAR_28 >= 10) VAR_28 = 0;
        }

        VAR_17 = VAR_7;
        VAR_27++;
    }

    FUNC_3(VAR_16);
    FUNC_3(VAR_15);

    FUNC_7(VAR_30, VAR_3 | VAR_4);
    FUNC_10("\n\nPlease enter application/update number and press ENTER for uninstall\nor press any key for Exit...\n");

    return 1;
}
