
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int systemdir ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ HRESULT ;
typedef int * HANDLE ;


 char* VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ FUNC_11 (int *,char*,char*,char*,char*,int **,int,int *) ;

__attribute__((used)) static void FUNC_12(void)
{
    HRESULT VAR_10;
    HANDLE VAR_11;
    char VAR_12[VAR_6];
    char VAR_13[VAR_6];
    char VAR_14[VAR_6];

    FUNC_2(VAR_14, sizeof(VAR_14));


    VAR_10 = FUNC_11(((void*)0), ((void*)0), "Install", "Dir", "Title", ((void*)0), 0, ((void*)0));
    FUNC_10(VAR_10 == VAR_5, "Expected E_INVALIDARG, got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "winver.exe", "Install", ((void*)0), "Title", ((void*)0), 0, ((void*)0));
    FUNC_10(VAR_10 == VAR_5, "Expected E_INVALIDARG, got %d\n", VAR_10);





    VAR_11 = (HANDLE)0xdeadbeef;

    VAR_10 = FUNC_11(((void*)0), "idontexist.exe", "Install", VAR_14, "Title", &VAR_11, 0, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_2),
       "Expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got %d\n", VAR_10);
    FUNC_10(VAR_11 == ((void*)0), "Expected hexe to be NULL\n");
    FUNC_10(!FUNC_5(VAR_11, 0), "Expected TerminateProcess to fail\n");





    VAR_11 = (HANDLE)0xdeadbeef;

    VAR_10 = FUNC_11(((void*)0), "winver.exe", "Install", "non\\existent\\directory", "Title", &VAR_11, 0, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_1),
       "Expected HRESULT_FROM_WIN32(ERROR_DIRECTORY), got %d\n", VAR_10);
    FUNC_10(VAR_11 == ((void*)0), "Expected hexe to be NULL\n");
    FUNC_10(!FUNC_5(VAR_11, 0), "Expected TerminateProcess to fail\n");





    VAR_11 = (HANDLE)0xdeadbeef;

    VAR_10 = FUNC_11(((void*)0), "winver.exe", "Install", VAR_14, "Title", &VAR_11, VAR_7 | VAR_8, ((void*)0));
    FUNC_10(FUNC_7(VAR_10), "Expected a setupapi error, got %d\n", VAR_10);



    FUNC_10(VAR_11 == (HANDLE)0xdeadbeef, "Expected hexe to be 0xdeadbeef\n");

    FUNC_10(!FUNC_5(VAR_11, 0), "Expected TerminateProcess to fail\n");





    VAR_11 = (HANDLE)0xdeadbeef;

    VAR_10 = FUNC_11(((void*)0), "winver.exe", "Install", VAR_14, "Title", &VAR_11, 0, ((void*)0));
    FUNC_10(VAR_10 == VAR_9, "Expected S_ASYNCHRONOUS, got %d\n", VAR_10);
    FUNC_10(VAR_11 != ((void*)0), "Expected hexe to be non-NULL\n");
    FUNC_10(FUNC_5(VAR_11, 0), "Expected TerminateProcess to succeed\n");

    FUNC_0("one", ((void*)0));
    FUNC_6("one\\test.inf");


    FUNC_9(VAR_12, VAR_0);
    FUNC_8(VAR_12, "\\one\\test.inf");
    FUNC_9(VAR_13, VAR_0);
    FUNC_8(VAR_13, "\\one");
    VAR_10 = FUNC_11(((void*)0), VAR_12, "DefaultInstall", VAR_13, "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == VAR_4, "Expected ERROR_SUCCESS, got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), VAR_12, "DefaultInstall", ((void*)0), "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_3),
       "Expected HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER), got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), VAR_12, "DefaultInstall", "", "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == VAR_4, "Expected ERROR_SUCCESS, got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "one\\test.inf", "DefaultInstall", VAR_13, "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == VAR_4, "Expected ERROR_SUCCESS, got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "one\\test.inf", "DefaultInstall", ((void*)0), "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_3),
       "Expected HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER), got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "one\\test.inf", "DefaultInstall", "", "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == VAR_4, "Expected ERROR_SUCCESS, got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "test.inf", "DefaultInstall", VAR_13, "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_2), "Expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "test.inf", "DefaultInstall", ((void*)0), "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_3),
       "Expected HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER), got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "test.inf", "DefaultInstall", "", "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_2), "Expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got %d\n", VAR_10);

    FUNC_1("one\\test.inf");
    FUNC_4("one");

    FUNC_6("test.inf");


    VAR_10 = FUNC_11(((void*)0), "test.inf", "DefaultInstall", VAR_0, "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_2), "Expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "test.inf", "DefaultInstall", ((void*)0), "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_3),
       "Expected HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER), got %d\n", VAR_10);


    VAR_10 = FUNC_11(((void*)0), "test.inf", "DefaultInstall", VAR_0, "Title", ((void*)0), VAR_7 | VAR_8, ((void*)0));
    FUNC_10(VAR_10 == FUNC_3(VAR_2), "Expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got %d\n", VAR_10);
}
