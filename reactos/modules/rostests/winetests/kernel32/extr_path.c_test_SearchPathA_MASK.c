
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpdirA ;
typedef int pathA ;
typedef int path2A ;
typedef int buffA ;
typedef int ULONG_PTR ;
typedef int HANDLE ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*,int) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char const*,char*,int,char*,char**) ;
 int FUNC_15 (char*,char*,char*,char const*,...) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    static const CHAR VAR_5[] = "testdep.dll";
    static const CHAR VAR_6[] = "./testdep.dll";
    static const CHAR VAR_7[] = "kernel32.dll";
    static const CHAR VAR_8[] = "";
    CHAR VAR_9[VAR_2], VAR_10[VAR_2], VAR_11[VAR_2], VAR_12[VAR_2], VAR_13[VAR_2];
    CHAR VAR_14[VAR_2], *VAR_15 = ((void*)0);
    ULONG_PTR VAR_16;
    HANDLE VAR_17;
    BOOL VAR_18;
    DWORD VAR_19;

    if (!&FUNC_14)
    {
        FUNC_19("SearchPathA isn't available\n");
        return;
    }

    FUNC_5(VAR_9, sizeof(VAR_9)/sizeof(CHAR));


    FUNC_7(0xdeadbeef);
    VAR_19 = FUNC_14(VAR_9, ((void*)0), ((void*)0), sizeof(VAR_10)/sizeof(CHAR), VAR_10, &VAR_15);
    FUNC_10(VAR_19 == 0, "Expected failure, got %d\n", VAR_19);
    FUNC_10(FUNC_3() == VAR_0,
      "Expected ERROR_INVALID_PARAMETER, got %x\n", FUNC_3());


    FUNC_7(0xdeadbeef);
    VAR_19 = FUNC_14(VAR_9, VAR_8, ((void*)0), sizeof(VAR_10)/sizeof(CHAR), VAR_10, &VAR_15);
    FUNC_10(VAR_19 == 0, "Expected failure, got %d\n", VAR_19);
    FUNC_10(FUNC_3() == VAR_0,
      "Expected ERROR_INVALID_PARAMETER, got %x\n", FUNC_3());

    if (!&FUNC_11)
        return;

    FUNC_8("testdep1.manifest", VAR_3);
    FUNC_8("main.manifest", VAR_4);

    VAR_17 = FUNC_18("main.manifest");
    FUNC_9("testdep1.manifest");
    FUNC_9("main.manifest");


    VAR_19 = FUNC_14(((void*)0), VAR_5, ((void*)0), sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(VAR_19 == 0, "got %d\n", VAR_19);

    VAR_19 = FUNC_14(((void*)0), VAR_7, ((void*)0), sizeof(VAR_11)/sizeof(CHAR), VAR_11, ((void*)0));
    FUNC_10(VAR_19 && VAR_19 == FUNC_17(VAR_11), "got %d\n", VAR_19);

    VAR_19 = FUNC_11(VAR_17, &VAR_16);
    FUNC_10(VAR_19, "failed to activate context, %u\n", FUNC_3());


    VAR_19 = FUNC_14(((void*)0), VAR_5, ((void*)0), sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(VAR_19 && VAR_19 == FUNC_17(VAR_10), "got %d\n", VAR_19);

    VAR_19 = FUNC_14(((void*)0), "testdep.dll", ".ext", sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(VAR_19 && VAR_19 == FUNC_17(VAR_10), "got %d\n", VAR_19);

    VAR_19 = FUNC_14(((void*)0), "testdep", ".dll", sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(VAR_19 && VAR_19 == FUNC_17(VAR_10), "got %d\n", VAR_19);

    VAR_19 = FUNC_14(((void*)0), "testdep", ".ext", sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(!VAR_19, "got %d\n", VAR_19);


    VAR_19 = FUNC_14(((void*)0), VAR_6, ((void*)0), sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(!VAR_19, "got %d\n", VAR_19);


    VAR_19 = FUNC_14(VAR_9, VAR_5, ((void*)0), sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(!VAR_19, "got %d\n", VAR_19);


    VAR_19 = FUNC_14(((void*)0), VAR_7, ((void*)0), sizeof(VAR_10)/sizeof(CHAR), VAR_10, ((void*)0));
    FUNC_10(VAR_19 && VAR_19 == FUNC_17(VAR_10), "got %d\n", VAR_19);
    FUNC_10(FUNC_16(VAR_10, VAR_11), "got wrong path %s, %s\n", VAR_10, VAR_11);

    VAR_19 = FUNC_12(0, VAR_16);
    FUNC_10(VAR_19, "failed to deactivate context, %u\n", FUNC_3());
    FUNC_13(VAR_17);


    FUNC_4(sizeof(VAR_14), VAR_14);
    VAR_19 = FUNC_2(VAR_2, VAR_13);
    FUNC_10(VAR_19, "failed to obtain working directory.\n");
    FUNC_15(VAR_9, "%s\\%s", VAR_14, VAR_7);
    VAR_19 = FUNC_14(((void*)0), VAR_7, ((void*)0), sizeof(VAR_11)/sizeof(CHAR), VAR_11, ((void*)0));
    FUNC_10(VAR_19 && VAR_19 == FUNC_17(VAR_11), "got %d\n", VAR_19);
    VAR_18 = FUNC_0(VAR_11, VAR_9, VAR_1);
    FUNC_10(VAR_18 != 0, "failed to copy test executable to temp directory, %u\n", FUNC_3());
    FUNC_15(VAR_12, "%s%s%s", VAR_13, VAR_13[FUNC_17(VAR_13)-1] != '\\' ? "\\" : "", VAR_7);
    VAR_18 = FUNC_0(VAR_11, VAR_12, VAR_1);
    FUNC_10(VAR_18 != 0, "failed to copy test executable to launch directory, %u\n", FUNC_3());
    VAR_18 = FUNC_6(VAR_14);
    FUNC_10(VAR_18, "failed to change working directory\n");
    VAR_19 = FUNC_14(((void*)0), VAR_7, ".exe", sizeof(VAR_10), VAR_10, ((void*)0));
    FUNC_10(VAR_19 && VAR_19 == FUNC_17(VAR_10), "got %d\n", VAR_19);
    FUNC_10(FUNC_16(VAR_10, VAR_12) == 0, "expected %s, got %s\n", VAR_12, VAR_10);
    VAR_18 = FUNC_6(VAR_13);
    FUNC_10(VAR_18, "failed to reset working directory\n");
    FUNC_1(VAR_12);
    FUNC_1(VAR_9);
}
