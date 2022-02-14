
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* UINT ;
typedef int MSIHANDLE ;
typedef char* LPCSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef char* HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_1 (int *,int *,int *,int,int *,int ,int **) ;
 char* FUNC_2 (int *,int *,int *,int,int ,int **) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,char*,int,int*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (int ,char*,int *) ;
 char* FUNC_10 (int ,int ,int *) ;
 char* FUNC_11 (int ,int,char*,int*) ;
 char* FUNC_12 (int ,int,char*,int*) ;
 char* FUNC_13 (int ,int,char*) ;
 int FUNC_14 (int ,int,char*) ;
 int FUNC_15 (int ) ;
 char* FUNC_16 (int ,int ) ;
 char* FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int ,char*,int,int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 char* FUNC_19 (int *,int *,int,int *,int ,int **) ;
 int FUNC_20 (int ,int,char*) ;
 int FUNC_21 () ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int ,char*,int ) ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char*,char*) ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_26 (int,char*,...) ;

__attribute__((used)) static void FUNC_27(void)
{
    MSIHANDLE VAR_15, VAR_16, VAR_17;
    IStorage *VAR_18, *VAR_19;
    IStream *VAR_20;
    char VAR_21[VAR_4];
    char VAR_22[VAR_4];
    WCHAR VAR_23[VAR_4];
    LPCSTR VAR_24;
    HRESULT VAR_25;
    DWORD VAR_26;
    UINT VAR_27;

    VAR_15 = FUNC_21();
    FUNC_26(VAR_15, "failed to create db\n");

    VAR_27 = FUNC_8(VAR_15);
    FUNC_26(VAR_27 == VAR_3 , "Failed to commit database\n");

    FUNC_6(VAR_15);

    VAR_27 = FUNC_10(VAR_14, VAR_7, &VAR_15);
    FUNC_26(VAR_27 == VAR_3 , "Failed to open database\n");


    VAR_17 = FUNC_23(VAR_15, "SELECT * FROM `_Storages`", VAR_6);
    FUNC_26(VAR_17, "failed to get column info hrecord\n");
    FUNC_26(FUNC_20(VAR_17, 1, "s62"), "wrong hrecord type\n");
    FUNC_26(FUNC_20(VAR_17, 2, "V0"), "wrong hrecord type\n");

    FUNC_6(VAR_17);


    VAR_17 = FUNC_23(VAR_15, "SELECT * FROM `_Storages`", VAR_5);
    FUNC_26(VAR_17, "failed to get column info hrecord\n");
    FUNC_26(FUNC_20(VAR_17, 1, "Name"), "wrong hrecord type\n");
    FUNC_26(FUNC_20(VAR_17, 2, "Data"), "wrong hrecord type\n");

    FUNC_6(VAR_17);

    FUNC_22("storage.bin");

    VAR_17 = FUNC_7(2);
    FUNC_14(VAR_17, 1, "stgname");

    VAR_27 = FUNC_13(VAR_17, 2, "storage.bin");
    FUNC_26(VAR_27 == VAR_3, "Failed to add stream data to the hrecord: %d\n", VAR_27);

    FUNC_0("storage.bin");

    VAR_24 = "INSERT INTO `_Storages` (`Name`, `Data`) VALUES (?, ?)";
    VAR_27 = FUNC_9(VAR_15, VAR_24, &VAR_16);
    FUNC_26(VAR_27 == VAR_3, "Failed to open database hview: %d\n", VAR_27);

    VAR_27 = FUNC_16(VAR_16, VAR_17);
    FUNC_26(VAR_27 == VAR_3, "Failed to execute hview: %d\n", VAR_27);

    FUNC_6(VAR_17);
    FUNC_15(VAR_16);
    FUNC_6(VAR_16);

    VAR_24 = "SELECT `Name`, `Data` FROM `_Storages`";
    VAR_27 = FUNC_9(VAR_15, VAR_24, &VAR_16);
    FUNC_26(VAR_27 == VAR_3, "Failed to open database hview: %d\n", VAR_27);

    VAR_27 = FUNC_16(VAR_16, 0);
    FUNC_26(VAR_27 == VAR_3, "Failed to execute hview: %d\n", VAR_27);

    VAR_27 = FUNC_17(VAR_16, &VAR_17);
    FUNC_26(VAR_27 == VAR_3, "Failed to fetch hrecord: %d\n", VAR_27);

    VAR_26 = VAR_4;
    VAR_27 = FUNC_11(VAR_17, 1, VAR_21, &VAR_26);
    FUNC_26(VAR_27 == VAR_3, "Failed to get string: %d\n", VAR_27);
    FUNC_26(!FUNC_24(VAR_21, "stgname"), "Expected \"stgname\", got \"%s\"\n", VAR_21);

    VAR_26 = VAR_4;
    FUNC_25(VAR_22, "apple");
    VAR_27 = FUNC_12(VAR_17, 2, VAR_22, &VAR_26);
    FUNC_26(VAR_27 == VAR_1, "Expected ERROR_INVALID_DATA, got %d\n", VAR_27);
    FUNC_26(!FUNC_24(VAR_22, "apple"), "Expected buf to be unchanged, got %s\n", VAR_22);
    FUNC_26(VAR_26 == 0, "Expected 0, got %d\n", VAR_26);

    FUNC_6(VAR_17);

    VAR_27 = FUNC_17(VAR_16, &VAR_17);
    FUNC_26(VAR_27 == VAR_2, "Expected ERROR_NO_MORE_ITEMS, got %d\n", VAR_27);

    FUNC_15(VAR_16);
    FUNC_6(VAR_16);

    FUNC_8(VAR_15);
    FUNC_6(VAR_15);

    FUNC_18(VAR_0, 0, VAR_13, -1, VAR_23, VAR_4);
    VAR_25 = FUNC_19(VAR_23, ((void*)0), VAR_8 | VAR_9 |
                        VAR_10, ((void*)0), 0, &VAR_18);
    FUNC_26(VAR_25 == VAR_12, "Expected S_OK, got %08x\n", VAR_25);
    FUNC_26(VAR_18 != ((void*)0), "Expected non-NULL storage\n");

    FUNC_18(VAR_0, 0, "stgname", -1, VAR_23, VAR_4);
    VAR_25 = FUNC_1(VAR_18, VAR_23, ((void*)0), VAR_9 | VAR_11,
                              ((void*)0), 0, &VAR_19);
    FUNC_26(VAR_25 == VAR_12, "Expected S_OK, got %08x\n", VAR_25);
    FUNC_26(VAR_19 != ((void*)0), "Expected non-NULL storage\n");

    FUNC_18(VAR_0, 0, "storage.bin", -1, VAR_23, VAR_4);
    VAR_25 = FUNC_2(VAR_19, VAR_23, ((void*)0), VAR_9 | VAR_11, 0, &VAR_20);
    FUNC_26(VAR_25 == VAR_12, "Expected S_OK, got %08x\n", VAR_25);
    FUNC_26(VAR_20 != ((void*)0), "Expected non-NULL stream\n");

    VAR_25 = FUNC_4(VAR_20, VAR_22, VAR_4, &VAR_26);
    FUNC_26(VAR_25 == VAR_12, "Expected S_OK, got %d\n", VAR_25);
    FUNC_26(VAR_26 == 8, "Expected 8, got %d\n", VAR_26);
    FUNC_26(!FUNC_24(VAR_22, "stgdata"), "Expected \"stgdata\", got \"%s\"\n", VAR_22);

    FUNC_5(VAR_20);
    FUNC_3(VAR_19);

    FUNC_3(VAR_18);
    FUNC_0(VAR_13);
}
