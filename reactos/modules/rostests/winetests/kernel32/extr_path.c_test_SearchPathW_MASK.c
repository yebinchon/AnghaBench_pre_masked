
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathW ;
typedef int path2W ;
typedef int buffW ;
typedef char WCHAR ;
typedef int ULONG_PTR ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int,char*,int,...) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char const*,char const*,int,char*,char**) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    static const WCHAR VAR_4[] = {'.','/','t','e','s','t','d','e','p','.','d','l','l',0};
    static const WCHAR VAR_5[] = {'t','e','s','t','d','e','p','.','d','l','l',0};
    static const WCHAR VAR_6[] = {'t','e','s','t','d','e','p',0};
    static const WCHAR VAR_7[] = {'k','e','r','n','e','l','3','2','.','d','l','l',0};
    static const WCHAR VAR_8[] = {'k','e','r','n','e','l','3','2',0};
    static const WCHAR VAR_9[] = {'o','l','e','3','2',0};
    static const WCHAR VAR_10[] = {'.','e','x','t',0};
    static const WCHAR VAR_11[] = {'.','d','l','l',0};
    static const WCHAR VAR_12[] = { 0 };
    WCHAR VAR_13[VAR_1], VAR_14[VAR_1], VAR_15[VAR_1];
    WCHAR *VAR_16 = ((void*)0);
    ULONG_PTR VAR_17;
    HANDLE VAR_18;
    DWORD VAR_19;

    if (!&FUNC_12)
    {
        FUNC_14("SearchPathW isn't available\n");
        return;
    }

if (0)
{

    FUNC_12(VAR_13, ((void*)0), ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, &VAR_16);
}

    FUNC_2(VAR_13, sizeof(VAR_13)/sizeof(WCHAR));


    FUNC_3(0xdeadbeef);
    VAR_19 = FUNC_12(VAR_13, VAR_12, ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, &VAR_16);
    FUNC_8(VAR_19 == 0, "Expected failure, got %d\n", VAR_19);
    FUNC_8(FUNC_0() == VAR_0,
      "Expected ERROR_INVALID_PARAMETER, got %x\n", FUNC_0());

    if (!&FUNC_9)
        return;

    FUNC_4("testdep1.manifest", VAR_2);
    FUNC_4("main.manifest", VAR_3);

    VAR_18 = FUNC_13("main.manifest");
    FUNC_5("testdep1.manifest");
    FUNC_5("main.manifest");


    VAR_19 = FUNC_12(((void*)0), VAR_5, ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(VAR_19 == 0, "got %d\n", VAR_19);

    VAR_19 = FUNC_12(((void*)0), VAR_7, ((void*)0), sizeof(VAR_15)/sizeof(WCHAR), VAR_15, ((void*)0));
    FUNC_8(VAR_19 && VAR_19 == FUNC_7(VAR_15), "got %d\n", VAR_19);


    FUNC_1(VAR_13, sizeof(VAR_13)/sizeof(WCHAR));
    VAR_19 = FUNC_12(VAR_13, VAR_8, ((void*)0), sizeof(VAR_15)/sizeof(WCHAR), VAR_15, ((void*)0));
    FUNC_8(VAR_19 == 0, "got %d\n", VAR_19);

    FUNC_2(VAR_13, sizeof(VAR_13)/sizeof(WCHAR));

    VAR_19 = FUNC_9(VAR_18, &VAR_17);
    FUNC_8(VAR_19, "failed to activate context, %u\n", FUNC_0());


    VAR_19 = FUNC_12(((void*)0), VAR_5, ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(VAR_19 && VAR_19 == FUNC_7(VAR_14), "got %d\n", VAR_19);

    VAR_19 = FUNC_12(((void*)0), VAR_5, VAR_10, sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(VAR_19 && VAR_19 == FUNC_7(VAR_14), "got %d\n", VAR_19);

    VAR_19 = FUNC_12(((void*)0), VAR_6, VAR_11, sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(VAR_19 && VAR_19 == FUNC_7(VAR_14), "got %d\n", VAR_19);

    VAR_19 = FUNC_12(((void*)0), VAR_6, VAR_10, sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(!VAR_19, "got %d\n", VAR_19);


    VAR_19 = FUNC_12(((void*)0), VAR_4, ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(!VAR_19, "got %d\n", VAR_19);


    VAR_19 = FUNC_12(VAR_13, VAR_5, ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(!VAR_19, "got %d\n", VAR_19);


    VAR_19 = FUNC_12(((void*)0), VAR_7, ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(VAR_19 && VAR_19 == FUNC_7(VAR_14), "got %d\n", VAR_19);
    FUNC_8(FUNC_6(VAR_14, VAR_15), "got wrong path %s, %s\n", FUNC_15(VAR_14), FUNC_15(VAR_15));


    VAR_19 = FUNC_12(((void*)0), VAR_9, ((void*)0), sizeof(VAR_14)/sizeof(WCHAR), VAR_14, ((void*)0));
    FUNC_8(VAR_19 && VAR_19 == FUNC_7(VAR_14), "got %d\n", VAR_19);

    VAR_19 = FUNC_10(0, VAR_17);
    FUNC_8(VAR_19, "failed to deactivate context, %u\n", FUNC_0());
    FUNC_11(VAR_18);
}
