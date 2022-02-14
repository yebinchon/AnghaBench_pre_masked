
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;
typedef char WCHAR ;
typedef int UINT ;
typedef char* LPWSTR ;
typedef char const* LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ HMMIO ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char const*,char const*,char const*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (int ,int *,int ,int*,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,int *,int) ;

__attribute__((used)) static HMMIO FUNC_10(UINT VAR_6, LPCWSTR VAR_7)
{
    WCHAR VAR_8[128];
    LPWSTR VAR_9;
    HMMIO VAR_10;
    HKEY VAR_11, VAR_12, VAR_13, VAR_14;
    DWORD VAR_15, VAR_16, VAR_17;

    static const WCHAR VAR_18[] = {'S','o','u','n','d','s',0};
    static const WCHAR VAR_19[] = {'D','e','f','a','u','l','t',0};
    static const WCHAR VAR_20[] = {'A','p','p','E','v','e','n','t','s','\\',
                                    'S','c','h','e','m','e','s','\\',
                                    'A','p','p','s',0};
    static const WCHAR VAR_21[] = {'.','D','e','f','a','u','l','t',0};
    static const WCHAR VAR_22[] = {'.','C','u','r','r','e','n','t',0};
    static const WCHAR VAR_23[] = {0};

    FUNC_5("searching in SystemSound list for %s\n", FUNC_7(VAR_7));
    FUNC_1(VAR_18, VAR_7, VAR_23, VAR_8, sizeof(VAR_8)/sizeof(VAR_8[0]));
    if (FUNC_8(VAR_8) == 0)
    {
 if (VAR_6 & VAR_5) goto next;
 FUNC_1(VAR_18, VAR_19, VAR_23, VAR_8, sizeof(VAR_8)/sizeof(VAR_8[0]));
 if (FUNC_8(VAR_8) == 0) goto next;
    }
    for (VAR_9 = VAR_8; *VAR_9 && *VAR_9 != ','; VAR_9++);
    if (*VAR_9) *VAR_9 = 0;
    VAR_10 = FUNC_9(VAR_8, ((void*)0), VAR_1 | VAR_3 | VAR_2);
    if (VAR_10 != 0) return VAR_10;
 next:




    if (FUNC_3(VAR_0, VAR_20, &VAR_11) != 0) goto none;
    if (VAR_6 & VAR_4)
    {
        DWORD VAR_24;

        VAR_15 = 1;
        VAR_24 = FUNC_0(0, VAR_8, sizeof(VAR_8)/sizeof(VAR_8[0]));
        if (VAR_24 > 0 && VAR_24 < sizeof(VAR_8)/sizeof(VAR_8[0]))
        {
            for (VAR_9 = VAR_8 + FUNC_8(VAR_8) - 1; VAR_9 >= VAR_8; VAR_9--)
            {
                if (*VAR_9 == '.') *VAR_9 = 0;
                if (*VAR_9 == '\\')
                {
                    VAR_15 = FUNC_3(VAR_11, VAR_9+1, &VAR_12);
                    break;
                }
            }
        }
    }
    else
    {
        VAR_15 = FUNC_3(VAR_11, VAR_21, &VAR_12);
    }
    FUNC_2(VAR_11);
    if (VAR_15 != 0) goto none;
    VAR_15 = FUNC_3(VAR_12, VAR_7, &VAR_13);
    FUNC_2(VAR_12);
    if (VAR_15 != 0) goto none;

    VAR_15 = FUNC_3(VAR_13, VAR_21, &VAR_14);
    if (VAR_15 != 0)
    {
        VAR_15 = FUNC_3(VAR_13, VAR_22, &VAR_14);
        FUNC_2(VAR_13);
        if (VAR_15 != 0)
            goto none;
    }
    VAR_17 = sizeof(VAR_8);
    VAR_15 = FUNC_4(VAR_14, ((void*)0), 0, &VAR_16, (LPBYTE)VAR_8, &VAR_17);
    FUNC_2(VAR_14);
    if (VAR_15 != 0 || !*VAR_8) goto none;
    VAR_10 = FUNC_9(VAR_8, ((void*)0), VAR_1 | VAR_3 | VAR_2);
    if (VAR_10) return VAR_10;
 none:
    FUNC_6("can't find SystemSound=%s !\n", FUNC_7(VAR_7));
    return 0;
}
