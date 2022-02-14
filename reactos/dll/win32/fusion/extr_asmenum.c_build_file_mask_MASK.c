
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token ;
typedef int revision ;
typedef int minor ;
typedef int major ;
typedef int build ;
typedef char* WORD ;
typedef char WCHAR ;
typedef char const* LPCWSTR ;
typedef int IAssemblyName ;
typedef int HRESULT ;
typedef int DWORD ;
typedef char* BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int*,char*) ;
 int FUNC_1 (int *,int ,char**,int*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (char*,char const*,char const*,...) ;
 int FUNC_4 (char**,char*) ;

__attribute__((used)) static void FUNC_5(IAssemblyName *VAR_8, int VAR_9, const WCHAR *VAR_10,
                            const WCHAR *VAR_11, WCHAR *VAR_12)
{
    static const WCHAR VAR_13[] = {'*',0};
    static const WCHAR VAR_14[] = {'%','s','\\','%','s',0};
    static const WCHAR VAR_15[] = {'%','s','\\','%','s','_','_','%','s',0};
    static const WCHAR VAR_16[] = {'%','s','\\','%','s','%','s','_','_','%','s',0};
    static const WCHAR VAR_17[] = {'%','u','.','%','u','.','%','u','.','%','u',0};
    static const WCHAR VAR_18[] = {'%','s','\\','*',0};
    static const WCHAR VAR_19[] = {'%','s','\\','%','s','*',0};
    WCHAR VAR_20[VAR_6], VAR_21[24];
    LPCWSTR VAR_22, VAR_23;
    HRESULT VAR_24;
    DWORD VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    WORD VAR_30, VAR_31, VAR_32, VAR_33;
    WCHAR VAR_34[VAR_7 + 1];
    BYTE VAR_35[VAR_5];

    if (!VAR_8)
    {
        if (VAR_11 && VAR_9 == 1)
            FUNC_3(VAR_12, VAR_19, VAR_10, VAR_11);
        else
            FUNC_3(VAR_12, VAR_18, VAR_10);
        return;
    }
    if (VAR_9 == 0)
    {
        VAR_25 = VAR_6;
        *VAR_20 = '\0';
        VAR_24 = FUNC_0(VAR_8, &VAR_25, VAR_20);
        if (FUNC_2(VAR_24))
            FUNC_3(VAR_12, VAR_14, VAR_10, VAR_20);
        else
            FUNC_3(VAR_12, VAR_14, VAR_10, VAR_13);
    }
    else if (VAR_9 == 1)
    {
        VAR_26 = sizeof(VAR_30);
        FUNC_1(VAR_8, VAR_1, &VAR_30, &VAR_26);

        VAR_27 = sizeof(VAR_31);
        FUNC_1(VAR_8, VAR_2, &VAR_31, &VAR_27);

        VAR_28 = sizeof(VAR_32);
        FUNC_1(VAR_8, VAR_0, &VAR_32, &VAR_28);

        VAR_29 = sizeof(VAR_33);
        FUNC_1(VAR_8, VAR_4, &VAR_33, &VAR_29);

        if (!VAR_26 || !VAR_27 || !VAR_28 || !VAR_29) VAR_22 = VAR_13;
        else
        {
            FUNC_3(VAR_21, VAR_17, VAR_30, VAR_31, VAR_32, VAR_33);
            VAR_22 = VAR_21;
        }

        VAR_25 = sizeof(VAR_35);
        FUNC_1(VAR_8, VAR_3, VAR_35, &VAR_25);

        if (!VAR_25) VAR_23 = VAR_13;
        else
        {
            FUNC_4(VAR_35, VAR_34);
            VAR_23 = VAR_34;
        }

        if (VAR_11)
            FUNC_3(VAR_12, VAR_16, VAR_10, VAR_11, VAR_22, VAR_23);
        else
            FUNC_3(VAR_12, VAR_15, VAR_10, VAR_22, VAR_23);
    }
}
