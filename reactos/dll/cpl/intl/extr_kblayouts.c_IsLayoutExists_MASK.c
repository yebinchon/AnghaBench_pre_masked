
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szTmp ;
typedef int szPreload ;
typedef int szLayoutNum ;
typedef char WCHAR ;
typedef int PWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LANGID ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,char*,int*,int *,int*,int *,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int *,int *,int ,int*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*,int *,int) ;
 int FUNC_7 (char*,char*,char*) ;

__attribute__((used)) static BOOL
FUNC_8(PWSTR VAR_7, PWSTR VAR_8)
{
    HKEY VAR_9, VAR_10;
    WCHAR VAR_11[VAR_0 + 1], VAR_12[3 + 1],
          VAR_13[VAR_0 + 1], VAR_14[VAR_0 + 1];
    DWORD VAR_15 = 0, VAR_16, VAR_17;
    BOOL VAR_18 = VAR_2;
    LANGID VAR_19;

    if (FUNC_3(VAR_3, L"Keyboard Layout\\Preload",
        0, VAR_4, &VAR_9) == VAR_1)
    {
        VAR_17 = sizeof(VAR_12);

        while (FUNC_2(VAR_9, VAR_15, VAR_12, &VAR_17, ((void*)0), &VAR_16, ((void*)0), ((void*)0)) == VAR_1)
        {
            VAR_17 = sizeof(VAR_11);
            if (FUNC_4(VAR_9, VAR_12, ((void*)0), ((void*)0), (LPBYTE)VAR_11, &VAR_17) != VAR_1)
            {
                FUNC_1(VAR_9);
                return VAR_2;
            }

            VAR_19 = (LANGID)FUNC_6(VAR_11, ((void*)0), 16);
            FUNC_0(VAR_19, VAR_5, VAR_13, sizeof(VAR_13) / sizeof(WCHAR));
            FUNC_7(VAR_14, L"0000%s", VAR_13);

            if (FUNC_5(VAR_14, VAR_8) == 0)
                VAR_18 = VAR_6;
            else
                VAR_18 = VAR_2;

            if (VAR_11[0] == 'd')
            {
                if (FUNC_3(VAR_3, L"Keyboard Layout\\Substitutes",
                                 0, VAR_4, &VAR_10) == VAR_1)
                {
                    VAR_17 = sizeof(VAR_13);
                    FUNC_4(VAR_10, VAR_11, ((void*)0), ((void*)0), (LPBYTE)VAR_13, &VAR_17);

                    if ((FUNC_5(VAR_13, VAR_7) == 0)&&(VAR_18))
                    {
                        FUNC_1(VAR_10);
                        FUNC_1(VAR_9);
                        return VAR_6;
                    }
                }
            }
            else
            {
                if ((FUNC_5(VAR_11, VAR_7) == 0) && (VAR_18))
                {
                    FUNC_1(VAR_9);
                    return VAR_6;
                }
            }

            VAR_18 = VAR_2;
            VAR_17 = sizeof(VAR_12);
            VAR_15++;
        }

        FUNC_1(VAR_9);
    }

    return VAR_2;
}
