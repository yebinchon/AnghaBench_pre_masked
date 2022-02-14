
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int REGSAM ;
typedef int MSIHANDLE ;
typedef int * LPBYTE ;
typedef scalar_t__ INSTALLSTATE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (char*,char*,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_6 (char*,char*,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char*,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,char*,int ,int,int *) ;
 scalar_t__ FUNC_12 (int ,int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_13 (int ,int *,int ,char*,int ) ;
 scalar_t__ FUNC_14 (int ,int *,int ,int ,int *,int ) ;
 scalar_t__ FUNC_15 (int ,char*,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_16 (int,char*,...) ;
 scalar_t__ FUNC_17 (int *,int ,int *) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    MSIHANDLE VAR_13;
    UINT VAR_14;
    HKEY VAR_15;
    DWORD VAR_16, VAR_17;
    LPBYTE VAR_18 = ((void*)0);
    INSTALLSTATE VAR_19;
    REGSAM VAR_20 = VAR_9;

    if (VAR_12)
        VAR_20 |= VAR_10;

    VAR_14 = FUNC_17(((void*)0), 0, &VAR_13);
    FUNC_16( VAR_14 == VAR_2,"wrong error\n");

    VAR_19 = FUNC_7(((void*)0));
    FUNC_16( VAR_19 == VAR_8, "wrong return\n");

    VAR_14 = FUNC_5(((void*)0),0,((void*)0),((void*)0));
    FUNC_16( VAR_14 == VAR_2,"wrong error\n");

    VAR_14 = FUNC_4(((void*)0), ((void*)0), 0);
    FUNC_16( VAR_14 == VAR_2, "wrong error\n");

    VAR_14 = FUNC_3("{00000000-0000-0000-0000-000000000000}", ((void*)0), 0);
    FUNC_16( VAR_14 == VAR_2, "wrong error\n");

    VAR_14 = FUNC_3("{00000000-0000-0000-0000-000000000001}", "foo", 0);
    FUNC_16( VAR_14 == VAR_2, "wrong error %d\n", VAR_14);

    VAR_14 = FUNC_3("{00000000-0000-0000-0000-000000000002}", "foo", VAR_7);
    FUNC_16( VAR_14 == VAR_4, "wrong error %d\n", VAR_14);





    VAR_14 = FUNC_11(VAR_6, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall", 0, VAR_20, &VAR_15);
    if (VAR_14 == VAR_0)
    {
        FUNC_18("Not enough rights to perform tests\n");
        return;
    }
    FUNC_16( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);

    VAR_14 = FUNC_12(VAR_15, ((void*)0), 0, &VAR_16, VAR_18, &VAR_17);
    FUNC_16 ( VAR_14 == VAR_3 || VAR_14 == VAR_1, "wrong error %d\n", VAR_14);
    if ( VAR_14 == VAR_3 )
    {
        VAR_18 = FUNC_1(FUNC_0(), 0, VAR_17);
        if (!VAR_18)
            FUNC_18("Out of memory\n");
        else
        {
            VAR_14 = FUNC_12(VAR_15, ((void*)0), 0, &VAR_16, VAR_18, &VAR_17);
            FUNC_16 ( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);
        }
    }

    VAR_14 = FUNC_13(VAR_15, ((void*)0), VAR_11, "test", FUNC_19("test"));
    if (VAR_14 == VAR_0)
    {
        FUNC_18("Not enough rights to perform tests\n");
        FUNC_2(FUNC_0(), 0, VAR_18);
        FUNC_8(VAR_15);
        return;
    }
    FUNC_16( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);

    VAR_14 = FUNC_6("", "", ((void*)0), ((void*)0));
    FUNC_16 ( VAR_14 == VAR_2, "wrong error %d\n", VAR_14);

    if (VAR_18)
    {
        VAR_14 = FUNC_14(VAR_15, ((void*)0), 0, VAR_16, VAR_18, VAR_17);
        FUNC_16 ( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);

        FUNC_2(FUNC_0(), 0, VAR_18);
    }
    else
    {
        VAR_14 = FUNC_10(VAR_15, ((void*)0));
        FUNC_16 ( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);
    }

    VAR_14 = FUNC_8(VAR_15);
    FUNC_16( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);


    VAR_14 = FUNC_9(VAR_6, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\{F1C3AF50-8B56-4A69-A00C-00773FE42F30}",
                        0, ((void*)0), 0, VAR_20, ((void*)0), &VAR_15, ((void*)0));
    FUNC_16( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);

    VAR_14 = FUNC_13(VAR_15, ((void*)0), VAR_11, "test", FUNC_19("test"));
    FUNC_16( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);

    VAR_14 = FUNC_6("{F1C3AF50-8B56-4A69-A00C-00773FE42F30}", "", ((void*)0), ((void*)0));
    FUNC_16 ( VAR_14 == VAR_5, "wrong error %d\n", VAR_14);

    VAR_14 = FUNC_8(VAR_15);
    FUNC_16( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);

    VAR_14 = FUNC_15(VAR_6, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\{F1C3AF50-8B56-4A69-A00C-00773FE42F30}",
                   VAR_20 & VAR_10);
    FUNC_16( VAR_14 == VAR_3, "wrong error %d\n", VAR_14);
}
