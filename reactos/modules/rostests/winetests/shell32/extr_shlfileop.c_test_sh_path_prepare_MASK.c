
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_PATH_A ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int ,int ,int ,int,char*,int,int *,scalar_t__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_12;
    CHAR VAR_13[VAR_5];
    CHAR VAR_14[VAR_5];
    BOOL VAR_15;


    FUNC_9(VAR_13, "testdir2\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_8);
    FUNC_8(VAR_12 == VAR_9, "res == 0x%08x, expected S_OK\n", VAR_12);


    FUNC_9(VAR_13, "testdir2\\test4.txt\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_7);
    FUNC_8(VAR_12 == VAR_9, "res == 0x%08x, expected S_OK\n", VAR_12);


    FUNC_9(VAR_13, "testdir2\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_6);
    FUNC_8(VAR_12 == VAR_9, "res == 0x%08x, expected S_OK\n", VAR_12);


    FUNC_9(VAR_13, "testdir2\\test4.txt\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_7|VAR_6);
    FUNC_8(VAR_12 == VAR_9, "res == 0x%08x, expected S_OK\n", VAR_12);
    FUNC_8(!FUNC_7("nonexistent\\"), "nonexistent\\ exists but shouldn't\n");


    FUNC_9(VAR_13, "test1.txt\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_8);
    FUNC_8(VAR_12 == FUNC_1(VAR_1) ||
       VAR_12 == FUNC_1(VAR_3) ||
       VAR_12 == FUNC_1(VAR_2),
       "Unexpected result : 0x%08x\n", VAR_12);


    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_6);
    FUNC_8(VAR_12 == FUNC_1(VAR_1) ||
       VAR_12 == FUNC_1(VAR_3) ||
       VAR_12 == FUNC_1(VAR_2),
       "Unexpected result : 0x%08x\n", VAR_12);


    FUNC_9(VAR_13, "test1.txt\\\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_8);
    FUNC_8(VAR_12 == FUNC_1(VAR_1) ||
       VAR_12 == FUNC_1(VAR_3) ||
       VAR_12 == FUNC_1(VAR_2),
       "Unexpected result : 0x%08x\n", VAR_12);


    VAR_12 = FUNC_3(0, 0, ".\\testdir2", VAR_6);
    FUNC_8(VAR_12 == VAR_9, "res == 0x%08x, expected S_OK\n", VAR_12);


    VAR_12 = FUNC_3(0, 0, ".\\testdir2\\test4.txt", VAR_6);
    FUNC_8(VAR_12 == FUNC_1(VAR_3), "res == 0x%08x, expected HRESULT_FROM_WIN32(ERROR_PATH_NOT_FOUND)\n", VAR_12);
    FUNC_8(!FUNC_7(".\\testdir2\\test4.txt\\"), ".\\testdir2\\test4.txt\\ exists but shouldn't\n");


    FUNC_9(VAR_13, "nonexistent\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_8);
    FUNC_8(VAR_12 == FUNC_1(VAR_3), "res == 0x%08x, expected HRESULT_FROM_WIN32(ERROR_PATH_NOT_FOUND)\n", VAR_12);


    FUNC_9(VAR_13, "nonexistent\\notreal\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_7);
    FUNC_8(VAR_12 == FUNC_1(VAR_3), "res == 0x%08x, expected HRESULT_FROM_WIN32(ERROR_PATH_NOT_FOUND)\n", VAR_12);
    FUNC_8(!FUNC_7("nonexistent\\notreal"), "nonexistent\\notreal exists but shouldn't\n");
    FUNC_8(!FUNC_7("nonexistent\\"), "nonexistent\\ exists but shouldn't\n");


    FUNC_9(VAR_13, "testdir2\\test4.txt\\\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_7|VAR_6);
    FUNC_8(VAR_12 == VAR_9, "res == 0x%08x, expected S_OK\n", VAR_12);
    FUNC_8(FUNC_7("testdir2\\test4.txt\\"), "testdir2\\test4.txt doesn't exist but should\n");


    FUNC_9(VAR_13, "nonexistent\\notreal\0");
    VAR_12 = FUNC_3(0, 0, VAR_13, VAR_6);
    FUNC_8(VAR_12 == VAR_9, "res == 0x%08x, expected S_OK\n", VAR_12);
    FUNC_8(FUNC_7("nonexistent\\notreal"), "nonexistent\\notreal doesn't exist but should\n");



    FUNC_5(0xdeadbeef);
    VAR_15 = VAR_4;
    if (FUNC_6(VAR_0, VAR_11, VAR_10, -1, VAR_14, sizeof(VAR_14), ((void*)0), &VAR_15) == 0)
    {
        FUNC_10("Could not convert Unicode path name to multibyte (%d)\n", FUNC_0());
        return;
    }
    if (VAR_15)
    {
        FUNC_10("Could not find unique multibyte representation for directory name using default codepage\n");
        return;
    }


    FUNC_2(VAR_14);
    VAR_12 = FUNC_4(0, 0, VAR_10, VAR_8);
    FUNC_8(VAR_12 == FUNC_1(VAR_3), "res == %08x, expected HRESULT_FROM_WIN32(ERROR_PATH_NOT_FOUND)\n", VAR_12);
    FUNC_8(!FUNC_7(VAR_14), "unicode path was created but shouldn't be\n");
    FUNC_2(VAR_14);


    VAR_12 = FUNC_4(0, 0, VAR_10, VAR_6);
    FUNC_8(VAR_12 == VAR_9, "res == %08x, expected S_OK\n", VAR_12);
    FUNC_8(FUNC_7(VAR_14), "unicode path should've been created\n");


    VAR_12 = FUNC_4(0, 0, VAR_10, VAR_8);
    FUNC_8(VAR_12 == VAR_9, "ret == %08x, expected S_OK\n", VAR_12);


    VAR_12 = FUNC_4(0, 0, VAR_10, VAR_6);
    FUNC_8(VAR_12 == VAR_9, "ret == %08x, expected S_OK\n", VAR_12);
    FUNC_2(VAR_14);
}
