
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ PWSTR ;
typedef int Lang ;
typedef int LPBYTE ;
typedef int LCID ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,int*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int*,int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (scalar_t__,int*) ;
 scalar_t__ FUNC_11 (int*,scalar_t__) ;
 scalar_t__ FUNC_12 (int*) ;
 int FUNC_13 (scalar_t__,int *,int) ;
 int FUNC_14 (int*,char*,...) ;

__attribute__((used)) static BOOL
FUNC_15(PWSTR VAR_12, PWSTR VAR_13)
{
    WCHAR VAR_14[VAR_1 + 1], VAR_15[VAR_7],
          VAR_16[VAR_0 + 1], VAR_17[VAR_0 + 1];
    HKEY VAR_18, VAR_19;
    DWORD VAR_20;
    LCID VAR_21;

    if (FUNC_6(VAR_4, L"Keyboard Layout\\Preload", 0, VAR_5, &VAR_18) == VAR_2)
    {
        if (FUNC_7(VAR_18, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_20, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == VAR_2)
        {
            FUNC_9(VAR_20 + 1, VAR_14, 10);

            VAR_21 = FUNC_13(VAR_13, ((void*)0), 16);

            FUNC_1(FUNC_3(VAR_21, VAR_10), VAR_6, VAR_15, sizeof(VAR_15) / sizeof(WCHAR));
            FUNC_14(VAR_16, L"0000%s", VAR_15);

            if (FUNC_2(VAR_12, VAR_16))
            {
                FUNC_4(VAR_18);
                return VAR_3;
            }

            if (FUNC_0(VAR_15) >= 1)
            {
                FUNC_14(VAR_17, L"d%03d%s", FUNC_0(VAR_15), VAR_15);
            }
            else if ((FUNC_11(VAR_16, VAR_12) != 0) && (FUNC_0(VAR_15) == 0))
            {
                FUNC_14(VAR_17, L"d%03d%s", 0, VAR_15);
            }
            else VAR_17[0] = L'\0';

            if (FUNC_12(VAR_17) != 0)
            {
                if (FUNC_5(VAR_4, L"Keyboard Layout\\Substitutes", 0, ((void*)0),
                                    VAR_8, VAR_5,
                                    ((void*)0), &VAR_19, ((void*)0)) == VAR_2)
                {
                    if (FUNC_8(VAR_19, VAR_17, 0, VAR_9, (LPBYTE)VAR_12,
                                       (DWORD)((VAR_0 + 1) * sizeof(WCHAR))) != VAR_2)
                    {
                        FUNC_4(VAR_19);
                        FUNC_4(VAR_18);
                        return VAR_3;
                    }
                    FUNC_4(VAR_19);
                }
                FUNC_10(VAR_12, VAR_17);
            }

            FUNC_8(VAR_18,
                           VAR_14,
                           0,
                           VAR_9,
                           (LPBYTE)VAR_12,
                           (DWORD)((VAR_0 + 1) * sizeof(WCHAR)));
        }
        FUNC_4(VAR_18);
    }

    return VAR_11;
}
