
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;
typedef int * HANDLE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *,char*,char*,int,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(HINTERNET VAR_9, HINTERNET VAR_10)
{
    BOOL VAR_11;
    HANDLE VAR_12;
    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(((void*)0), ((void*)0), "non_existing_remote", VAR_7, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_4 ||
         FUNC_4() == VAR_5,
        "Expected ERROR_INVALID_HANDLE (win98) or ERROR_INVALID_PARAMETER, got %d\n", FUNC_4());


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(((void*)0), "non_existing_local", "non_existing_remote", 5, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_4,
        "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_4());


    FUNC_2("non_existing_local");


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_9, ((void*)0), "non_existing_remote", VAR_7, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_5,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_4());


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_9, "non_existing_local", ((void*)0), VAR_7, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_5,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_4());


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_9, "non_existing_local", "non_existing_remote", 5, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_1 || FUNC_4() == VAR_5,
        "Expected ERROR_FILE_NOT_FOUND or ERROR_INVALID_PARAMETER (win98), got %d\n", FUNC_4());


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_9, "non_existing_local", "non_existing_remote", VAR_7, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_1,
        "Expected ERROR_FILE_NOT_FOUND, got %d\n", FUNC_4());


    FUNC_5(0xdeadbeef);
    VAR_12 = FUNC_1("now_existing_local", VAR_8, 0, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_6 ( VAR_12 != ((void*)0), "Error creating a local file : %d\n", FUNC_4());
    FUNC_0(VAR_12);


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_9, "now_existing_local", "non_existing_remote", VAR_7, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_2,
        "Expected ERROR_INTERNET_EXTENDED_ERROR, got %d\n", FUNC_4());

    FUNC_2("now_existing_local");


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_10, ((void*)0), "non_existing_remote", VAR_7, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_3 ||
         FUNC_4() == VAR_5,
        "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE (win98) or ERROR_INVALID_PARAMETER, got %d\n", FUNC_4());


    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_10, "non_existing_local", "non_existing_remote", 5, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_3,
        "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE, got %d\n", FUNC_4());

    FUNC_5(0xdeadbeef);
    VAR_11 = FUNC_3(VAR_10, "non_existing_local", "non_existing_remote", VAR_7, 0);
    FUNC_6 ( VAR_11 == VAR_6, "Expected FtpPutFileA to fail\n");
    FUNC_6 ( FUNC_4() == VAR_3,
        "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE, got %d\n", FUNC_4());
}
