
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int VOID ;
typedef int TCHAR ;
typedef int LPBYTE ;
typedef int LPARAM ;
typedef int INFCONTEXT ;
typedef int HWND ;
typedef int HKEY ;
typedef scalar_t__ HINF ;
typedef scalar_t__ DWORD ;
typedef int Buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int,int*) ;
 scalar_t__ FUNC_10 (int *,int ,int *,int,int *) ;
 scalar_t__ FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,int ,int *,int) ;

__attribute__((used)) static VOID
FUNC_14(HWND VAR_14)
{
    HINF VAR_15;
    HKEY VAR_16;
    HWND VAR_17;
    INFCONTEXT VAR_18;
    int VAR_19, VAR_20 = 0;
    DWORD VAR_21, VAR_22, VAR_23;

    VAR_17 = FUNC_0(VAR_14, VAR_6);

    VAR_15 = FUNC_11(FUNC_12("font.inf"), ((void*)0),
                            VAR_8, ((void*)0));

    if (VAR_15 != VAR_9)
    {
        if (FUNC_7(VAR_15, FUNC_12("Font Sizes"), ((void*)0), &VAR_18))
        {
            if (FUNC_2(VAR_5, FUNC_12("SYSTEM\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts"),
                             0, VAR_10, &VAR_16) == VAR_4)
            {
                VAR_21 = VAR_12;
                VAR_23 = VAR_13;

                if (FUNC_3(VAR_16, FUNC_12("LogPixels"), ((void*)0), &VAR_23,
                                    (LPBYTE)&VAR_22, &VAR_21) != VAR_4)
                {
                    VAR_22 = 0;
                }

                FUNC_1(VAR_16);
            }

            for (;;)
            {
                TCHAR VAR_24[VAR_11];
                TCHAR VAR_25[VAR_11];

                if (FUNC_10(&VAR_18, 0, VAR_24, sizeof(VAR_24) / sizeof(TCHAR), ((void*)0)) &&
                    FUNC_9(&VAR_18, 1, &VAR_20))
                {
                    FUNC_13(VAR_25, FUNC_12("%s (%d DPI)"), VAR_24, VAR_20);
                    VAR_19 = FUNC_4(VAR_17, VAR_0, 0, (LPARAM)VAR_25);
                    if (VAR_19 != VAR_1)
                        FUNC_4(VAR_17, VAR_3, (WPARAM)VAR_19, (LPARAM)VAR_20);

                    if ((int)VAR_22 == VAR_20)
                    {
                        FUNC_4(VAR_17, VAR_2, (WPARAM)VAR_19, 0);
                        FUNC_5(FUNC_0(VAR_14, VAR_7), VAR_25);
                    }
                    else
                        FUNC_4(VAR_17, VAR_2, 0, 0);
                }

                if (!FUNC_8(&VAR_18, &VAR_18))
                {
                    break;
                }
            }
        }
    }

    FUNC_6(VAR_15);
}
