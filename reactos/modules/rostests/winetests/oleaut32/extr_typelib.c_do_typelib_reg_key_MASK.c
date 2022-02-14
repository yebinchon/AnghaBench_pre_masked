
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int typelibW ;
typedef scalar_t__ WORD ;
typedef char WCHAR ;
typedef scalar_t__ LPCWSTR ;
typedef int HKEY ;
typedef int GUID ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,int) ;
 scalar_t__ FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char const*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_13(GUID *VAR_7, WORD VAR_8, WORD VAR_9, DWORD VAR_10, LPCWSTR VAR_11, BOOL VAR_12)
{
    static const WCHAR VAR_13[] = {'T','y','p','e','l','i','b','\\',0};
    static const WCHAR VAR_14[] = {'\\','%','u','.','%','u','\\','0','\\','w','i','n','%','u',0};
    static const WCHAR VAR_15[] = {'%','s','_','%','u','_','%','u','.','d','l','l',0};
    WCHAR VAR_16[128];
    HKEY VAR_17;
    BOOL VAR_18 = VAR_6;
    DWORD VAR_19;

    FUNC_7(VAR_16, VAR_13, sizeof(VAR_13));
    FUNC_5(VAR_7, VAR_16 + FUNC_6(VAR_16), 40);

    if (VAR_12)
    {
        FUNC_9(FUNC_8(VAR_3, VAR_16, 0) == VAR_1, "SHDeleteKey failed\n");
        return VAR_6;
    }

    FUNC_12(VAR_16 + FUNC_6(VAR_16), VAR_14, VAR_8, VAR_9, VAR_10);

    FUNC_4(0xdeadbeef);
    VAR_19 = FUNC_2(VAR_3, VAR_16, 0, ((void*)0), 0,
                          VAR_4, ((void*)0), &VAR_17, ((void*)0));
    if (FUNC_0() == VAR_0)
    {
        FUNC_11("W-calls are not implemented\n");
        return VAR_2;
    }

    if (VAR_19 != VAR_1)
    {
        FUNC_10("RegCreateKeyExW failed: %u\n", VAR_19);
        return VAR_2;
    }

    FUNC_12(VAR_16, VAR_15, VAR_11, VAR_8, VAR_9);
    if (FUNC_3(VAR_17, ((void*)0), 0, VAR_5,
                       (BYTE *)VAR_16, (FUNC_6(VAR_16) + 1) * sizeof(WCHAR)) != VAR_1)
    {
        FUNC_10("RegSetValueExW failed\n");
        VAR_18 = VAR_2;
    }
    FUNC_1(VAR_17);
    return VAR_18;
}
