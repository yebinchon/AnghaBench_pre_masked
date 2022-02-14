
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,char const*,int ) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int,char*,char*) ;
 scalar_t__ FUNC_8 (int ,int ,char const*,char*,char*,int*) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    LONG VAR_7;
    HKEY VAR_8;
    HRESULT VAR_9;
    static const CHAR VAR_10[] = {
        '.','w','i','n','e','t','e','s','t',0
    };
    static const CHAR VAR_11[] = {
        'w','i','n','e','t','e','s','t', 'f','i','l','e',0
    };
    static const CHAR VAR_12[] = {
        'w','i','n','e','t','e','s','t','f','i','l','e',
        '\\','s','h','e','l','l',
        '\\','f','o','o',
        '\\','c','o','m','m','a','n','d',0
    };
    static const CHAR VAR_13[] = {
        'n','o','t','e','p','a','d','.','e','x','e',0
    };
    CHAR VAR_14[VAR_4];
    DWORD VAR_15 = VAR_4;

    if (!&FUNC_8)
    {
        FUNC_11("AssocQueryStringA() is missing\n");
        return;
    }

    VAR_14[0] = '\0';
    VAR_7 = FUNC_2(VAR_3, VAR_10, &VAR_8);
    if (VAR_7 != VAR_2) {
        FUNC_9("failed to create dotWinetest key\n");
        return;
    }

    VAR_7 = FUNC_3(VAR_8, ((void*)0), VAR_5, VAR_11, FUNC_6(VAR_11));
    FUNC_1(VAR_8);
    if (VAR_7 != VAR_2)
    {
        FUNC_9("failed to set dotWinetest key\n");
        goto cleanup;
    }

    VAR_7 = FUNC_2(VAR_3, VAR_12, &VAR_8);
    if (VAR_7 != VAR_2)
    {
        FUNC_9("failed to create winetestfileAction key\n");
        goto cleanup;
    }

    VAR_7 = FUNC_3(VAR_8, ((void*)0), VAR_5, VAR_13, FUNC_6(VAR_13));
    FUNC_1(VAR_8);
    if (VAR_7 != VAR_2)
    {
        FUNC_9("failed to set winetestfileAction key\n");
        goto cleanup;
    }

    VAR_9 = FUNC_8(0, VAR_0, VAR_10, ((void*)0), VAR_14, &VAR_15);
    FUNC_7(VAR_9 == VAR_6 ||
       VAR_9 == FUNC_0(VAR_1),
       "Unexpected result : %08x\n", VAR_9);
    VAR_9 = FUNC_8(0, VAR_0, VAR_10, "foo", VAR_14, &VAR_15);
    FUNC_5(VAR_6, VAR_9);
    FUNC_7(FUNC_10(VAR_14, VAR_13) != ((void*)0),
        "got '%s' (Expected result to include 'notepad.exe')\n", VAR_14);

cleanup:
    FUNC_4(VAR_3, VAR_10);
    FUNC_4(VAR_3, VAR_11);

}
