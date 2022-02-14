
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HINTERNET ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int ,int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*,char*,scalar_t__,int ,int ,int ) ;
 int * FUNC_6 (int *,char*,int,int,int ) ;
 scalar_t__ FUNC_7 (int *,char*,char*,int ,int ) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,char*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static void FUNC_16(HINTERNET VAR_15, HINTERNET VAR_16)
{
    HINTERNET VAR_17;


    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(((void*)0), "welcome.msg", VAR_12, VAR_10, 0);
    FUNC_14 ( !VAR_17, "Expected FtpOpenFileA to fail\n");
    FUNC_14 ( FUNC_10() == VAR_5,
        "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_10());
    FUNC_11(VAR_17);


    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(VAR_15, ((void*)0), VAR_12, VAR_10, 0);
    FUNC_14 ( !VAR_17, "Expected FtpOpenFileA to fail\n");
    FUNC_14 ( FUNC_10() == VAR_6,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_10());
    FUNC_11(VAR_17);


    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(VAR_15, "welcome.msg", 0, VAR_10, 0);
    FUNC_14 ( !VAR_17, "Expected FtpOpenFileA to fail\n");
    FUNC_14 ( FUNC_10() == VAR_6,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_10());
    FUNC_11(VAR_17);


    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(VAR_15, "welcome.msg", VAR_12|VAR_13, VAR_10, 0);
    FUNC_14 ( !VAR_17, "Expected FtpOpenFileA to fail\n");
    FUNC_14 ( FUNC_10() == VAR_6,
        "Expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_10());
    FUNC_11(VAR_17);


    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(VAR_15, "welcome.msg", VAR_12, 0xffffffff, 0);
    FUNC_14 ( !VAR_17, "Expected FtpOpenFileA to fail\n");
    FUNC_14 ( FUNC_10() == VAR_3 || FUNC_10() == VAR_6,
        "Expected ERROR_INTERNET_EXTENDED_ERROR or ERROR_INVALID_PARAMETER (win98), got %d\n", FUNC_10());
    FUNC_11(VAR_17);

    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(VAR_15, "welcome.msg", VAR_12, VAR_10, 0);
    FUNC_14 ( VAR_17 != ((void*)0), "Expected FtpOpenFileA to succeed\n");
    FUNC_14 ( FUNC_10() == VAR_7 ||
        FUNC_13(FUNC_10() == VAR_1),
        "Expected ERROR_SUCCESS, got %u\n", FUNC_10());

    if (VAR_17)
    {
        BOOL VAR_18;
        DWORD VAR_19;
        HINTERNET VAR_20;
        HANDLE VAR_21;


        FUNC_12(0xdeadbeef);
        VAR_18 = FUNC_3(VAR_15, "new_directory_deadbeef");
        VAR_19 = FUNC_10();
        FUNC_14 ( VAR_18 == VAR_8, "Expected FtpCreateDirectoryA to fail\n");
        FUNC_14 ( VAR_19 == VAR_2 || FUNC_13(VAR_19 == VAR_3),
            "Expected ERROR_FTP_TRANSFER_IN_PROGRESS, got %d\n", VAR_19);
        FUNC_15(VAR_19);

        FUNC_12(0xdeadbeef);
        VAR_18 = FUNC_4(VAR_15, "non_existent_file_deadbeef");
        VAR_19 = FUNC_10();
        FUNC_14 ( VAR_18 == VAR_8, "Expected FtpDeleteFileA to fail\n");
        FUNC_14 ( VAR_19 == VAR_2 || FUNC_13(VAR_19 == VAR_3),
            "Expected ERROR_FTP_TRANSFER_IN_PROGRESS, got %d\n", VAR_19);
        FUNC_15(VAR_19);

        FUNC_12(0xdeadbeef);
        VAR_18 = FUNC_5(VAR_15, "welcome.msg", "should_be_non_existing_deadbeef", VAR_8, VAR_9, VAR_11, 0);
        VAR_19 = FUNC_10();
        FUNC_14 ( VAR_18 == VAR_8 || FUNC_13(VAR_18 == VAR_14), "Expected FtpGetFileA to fail\n");
        FUNC_14 ( VAR_19 == VAR_2 || FUNC_13(VAR_19 == VAR_7),
            "Expected ERROR_FTP_TRANSFER_IN_PROGRESS, got %d\n", VAR_19);
        FUNC_2("should_be_non_existing_deadbeef");

        FUNC_12(0xdeadbeef);
        VAR_20 = FUNC_6(VAR_15, "welcome.msg", VAR_12, VAR_10, 0);
        VAR_19 = FUNC_10();
        FUNC_14 ( VAR_18 == VAR_8 || FUNC_13(VAR_18 == VAR_14), "Expected FtpOpenFileA to fail\n");
        FUNC_14 ( VAR_19 == VAR_2 || FUNC_13(VAR_19 == VAR_7),
            "Expected ERROR_FTP_TRANSFER_IN_PROGRESS, got %d\n", VAR_19);
        FUNC_11(VAR_20);


        FUNC_12(0xdeadbeef);
        VAR_21 = FUNC_1("now_existing_local", VAR_13, 0, ((void*)0), VAR_0, 0, ((void*)0));
        FUNC_14 ( VAR_21 != ((void*)0), "Error creating a local file : %d\n", FUNC_10());
        FUNC_0(VAR_21);
        FUNC_12(0xdeadbeef);
        VAR_18 = FUNC_7(VAR_15, "now_existing_local", "non_existing_remote", VAR_11, 0);
        VAR_19 = FUNC_10();
        FUNC_14 ( VAR_18 == VAR_8, "Expected FtpPutFileA to fail\n");
        FUNC_14 ( VAR_19 == VAR_2 || FUNC_13(VAR_19 == VAR_3),
            "Expected ERROR_FTP_TRANSFER_IN_PROGRESS, got %d\n", VAR_19);
        FUNC_2("now_existing_local");

        FUNC_12(0xdeadbeef);
        VAR_18 = FUNC_8(VAR_15, "should_be_non_existing_deadbeef_dir");
        VAR_19 = FUNC_10();
        FUNC_14 ( VAR_18 == VAR_8, "Expected FtpRemoveDirectoryA to fail\n");
        FUNC_14 ( VAR_19 == VAR_2 || FUNC_13(VAR_19 == VAR_3),
            "Expected ERROR_FTP_TRANSFER_IN_PROGRESS, got %d\n", VAR_19);

        FUNC_12(0xdeadbeef);
        VAR_18 = FUNC_9(VAR_15 , "should_be_non_existing_deadbeef", "new");
        VAR_19 = FUNC_10();
        FUNC_14 ( VAR_18 == VAR_8, "Expected FtpRenameFileA to fail\n");
        FUNC_14 ( VAR_19 == VAR_2 || FUNC_13(VAR_19 == VAR_3),
            "Expected ERROR_FTP_TRANSFER_IN_PROGRESS, got %d\n", VAR_19);
    }

    FUNC_11(VAR_17);


    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(VAR_16, "welcome.msg", VAR_12, 5, 0);
    FUNC_14 ( !VAR_17, "Expected FtpOpenFileA to fail\n");
    FUNC_14 ( FUNC_10() == VAR_4,
        "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE, got %d\n", FUNC_10());
    FUNC_11(VAR_17);

    FUNC_12(0xdeadbeef);
    VAR_17 = FUNC_6(VAR_16, "welcome.msg", VAR_12, VAR_10, 0);
    FUNC_14 ( VAR_17 == ((void*)0), "Expected FtpOpenFileA to fail\n");
    FUNC_14 ( FUNC_10() == VAR_4,
        "Expected ERROR_INTERNET_INCORRECT_HANDLE_TYPE, got %d\n", FUNC_10());

    FUNC_11(VAR_17);
}
