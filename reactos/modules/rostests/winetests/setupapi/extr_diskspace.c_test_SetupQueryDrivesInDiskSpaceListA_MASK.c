
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int * HDSKSPC ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int,int*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_4[VAR_2];
    HDSKSPC VAR_5;
    DWORD VAR_6;
    BOOL VAR_7;

    VAR_5 = FUNC_2(((void*)0), 0, VAR_3);
    FUNC_7(VAR_5 != ((void*)0),"Expected SetupCreateDiskSpaceListA to return a valid handle\n");

    VAR_7 = FUNC_4(VAR_5, ((void*)0), 0, ((void*)0));
    FUNC_7(VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to succeed\n");

    VAR_6 = 0;
    VAR_7 = FUNC_4(VAR_5, ((void*)0), 0, &VAR_6);
    FUNC_7(VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to succeed\n");
    FUNC_7(VAR_6 == 1, "Expected size 1, got %u\n", VAR_6);

    VAR_7 = FUNC_1(VAR_5, "F:\\random-file.dat", 0, VAR_1, 0, 0);
    FUNC_7(VAR_7, "Expected SetupAddToDiskSpaceListA to succeed\n");

    VAR_7 = FUNC_1(VAR_5, "G:\\random-file.dat", 0, VAR_1, 0, 0);
    FUNC_7(VAR_7, "Expected SetupAddToDiskSpaceListA to succeed\n");

    VAR_7 = FUNC_1(VAR_5, "G:\\random-file2.dat", 0, VAR_1, 0, 0);
    FUNC_7(VAR_7, "Expected SetupAddToDiskSpaceListA to succeed\n");

    VAR_7 = FUNC_1(VAR_5, "X:\\random-file.dat", 0, VAR_1, 0, 0);
    FUNC_7(VAR_7, "Expected SetupAddToDiskSpaceListA to succeed\n");

    VAR_6 = 0;
    VAR_7 = FUNC_4(VAR_5, ((void*)0), 0, &VAR_6);
    FUNC_7(VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to succeed\n");
    FUNC_7(VAR_6 == 10, "Expected size 10, got %u\n", VAR_6);

    VAR_6 = 0;
    VAR_7 = FUNC_4(VAR_5, VAR_4, 0, &VAR_6);
    FUNC_7(!VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to fail\n");
    FUNC_7(VAR_6 == 4, "Expected size 4, got %u\n", VAR_6);
    FUNC_7(FUNC_0() == VAR_0,
       "Expected GetLastError() to return ERROR_INSUFFICIENT_BUFFER, got %u\n", FUNC_0());

    VAR_6 = 0;
    VAR_7 = FUNC_4(VAR_5, VAR_4, 4, &VAR_6);
    FUNC_7(!VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to fail\n");
    FUNC_7(VAR_6 == 7, "Expected size 7, got %u\n", VAR_6);
    FUNC_7(FUNC_0() == VAR_0,
       "Expected GetLastError() to return ERROR_INSUFFICIENT_BUFFER, got %u\n", FUNC_0());

    VAR_6 = 0;
    VAR_7 = FUNC_4(VAR_5, VAR_4, 7, &VAR_6);
    FUNC_7(!VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to fail\n");
    FUNC_7(VAR_6 == 10, "Expected size 10, got %u\n", VAR_6);
    FUNC_7(FUNC_0() == VAR_0,
       "Expected GetLastError() to return ERROR_INSUFFICIENT_BUFFER, got %u\n", FUNC_0());

    VAR_6 = 0;
    FUNC_6(VAR_4, 0xff, sizeof(VAR_4));
    VAR_7 = FUNC_4(VAR_5, VAR_4, sizeof(VAR_4), &VAR_6);
    FUNC_7(VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to succeed\n");
    FUNC_7(VAR_6 == 10, "Expected size 10, got %u\n", VAR_6);
    FUNC_7(!FUNC_5("f:\0g:\0x:\0\0", VAR_4, 10), "Device list does not match\n");

    FUNC_6(VAR_4, 0xff, sizeof(VAR_4));
    VAR_7 = FUNC_4(VAR_5, VAR_4, sizeof(VAR_4), ((void*)0));
    FUNC_7(VAR_7, "Expected SetupQueryDrivesInDiskSpaceListA to succeed\n");
    FUNC_7(!FUNC_5("f:\0g:\0x:\0\0", VAR_4, 10), "Device list does not match\n");

    FUNC_7(FUNC_3(VAR_5),
       "Expected SetupDestroyDiskSpaceList to succeed\n");
}
