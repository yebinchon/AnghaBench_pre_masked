
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int FUNC_0 (char const*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_7 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    WCHAR VAR_8[VAR_6];
    BOOL VAR_9;
    static const WCHAR VAR_10[] = { 0 };
    static const WCHAR VAR_11[] = {'P','l','e','a','s','e',' ','R','e','m','o','v','e',' ','M','e',0};
    static const WCHAR VAR_12[] = {'.',0};
    static const WCHAR VAR_13[] = {'/',0};
    static const WCHAR VAR_14[] = {'.','.',0};
    static const WCHAR VAR_15[] = {'?',0};
    WCHAR VAR_16[VAR_6];

    VAR_9 = FUNC_0(((void*)0), ((void*)0));
    if (!VAR_9 && FUNC_2() == VAR_2)
    {
        FUNC_10("CreateDirectoryW is not available\n");
        return;
    }
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_4,
       "should not create NULL path ret %u err %u\n", VAR_9, FUNC_2());

    VAR_9 = FUNC_0(VAR_10, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_4,
       "should not create empty path ret %u err %u\n", VAR_9, FUNC_2());

    VAR_9 = FUNC_3(VAR_8, VAR_6);
    FUNC_9(VAR_9 < VAR_6, "System directory should fit into MAX_PATH\n");

    FUNC_1(VAR_6, VAR_16);
    VAR_9 = FUNC_6(VAR_8);
    FUNC_9(VAR_9 == VAR_7, "could not chdir to the System directory ret %u err %u\n", VAR_9, FUNC_2());

    VAR_9 = FUNC_0(VAR_12, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_1,
       "should not create existing path ret %u err %u\n", VAR_9, FUNC_2());

    VAR_9 = FUNC_0(VAR_14, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_1,
       "should not create existing path ret %u err %u\n", VAR_9, FUNC_2());

    FUNC_4(VAR_6, VAR_8);
    VAR_8[3] = 0;
    VAR_9 = FUNC_0(VAR_8, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && (FUNC_2() == VAR_0 || FUNC_2() == VAR_1),
       "should deny access to the drive root ret %u err %u\n", VAR_9, FUNC_2());

    FUNC_4(VAR_6, VAR_8);
    FUNC_7(VAR_8, VAR_11);
    VAR_9 = FUNC_0(VAR_8, ((void*)0));
    FUNC_9(VAR_9 == VAR_7, "CreateDirectoryW should always succeed\n");

    VAR_9 = FUNC_0(VAR_8, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_1,
       "should not create existing path ret %u err %u\n", VAR_9, FUNC_2());

    VAR_9 = FUNC_5(VAR_8);
    FUNC_9(VAR_9 == VAR_7, "RemoveDirectoryW should always succeed\n");

    FUNC_7(VAR_8, VAR_15);
    VAR_9 = FUNC_0(VAR_8, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_3,
       "CreateDirectoryW with ? wildcard name should fail with error 183, ret=%s error=%d\n",
       VAR_9 ? " True" : "False", FUNC_2());
    VAR_9 = FUNC_5(VAR_8);
    FUNC_9(VAR_9 == VAR_5, "RemoveDirectoryW should have failed\n");

    VAR_8[FUNC_8(VAR_8) - 1] = '*';
    VAR_9 = FUNC_0(VAR_8, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_3,
       "CreateDirectoryW with * wildcard name should fail with error 183, ret=%s error=%d\n",
       VAR_9 ? " True" : "False", FUNC_2());
    VAR_9 = FUNC_5(VAR_8);
    FUNC_9(VAR_9 == VAR_5, "RemoveDirectoryW should have failed\n");

    FUNC_4(VAR_6, VAR_8);
    FUNC_7(VAR_8, VAR_11);
    FUNC_7(VAR_8, VAR_13);
    FUNC_7(VAR_8, VAR_11);
    VAR_9 = FUNC_0(VAR_8, ((void*)0));
    FUNC_9(VAR_9 == VAR_5 && FUNC_2() == VAR_4,
      "CreateDirectoryW with multiple nonexistent directories in path should fail ret %u err %u\n",
       VAR_9, FUNC_2());
    VAR_9 = FUNC_5(VAR_8);
    FUNC_9(VAR_9 == VAR_5, "RemoveDirectoryW should have failed\n");

    FUNC_6(VAR_16);
}
