
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
typedef int TestDllPath ;
typedef int SIZE_T ;
typedef int * PVOID ;
typedef int * PUCHAR ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int **,int ,int*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *,int *,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int **,int*,int *) ;
 int FUNC_8 (int ,int ,int **,int ,int ,int *,int*,int ,int ,int ) ;
 int FUNC_9 (int *,int,int *,int *,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (int *,int,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*) ;
 int * FUNC_18 (int *,int) ;

void
FUNC_19(void)
{
    UNICODE_STRING VAR_19;
    NTSTATUS VAR_20;
    OBJECT_ATTRIBUTES VAR_21;
    IO_STATUS_BLOCK VAR_22;
    WCHAR VAR_23[VAR_4];
    HANDLE VAR_24, VAR_25, VAR_26;
    PVOID VAR_27, VAR_28;
    SIZE_T VAR_29;

    FUNC_0(((void*)0), VAR_23, FUNC_11(VAR_23));
    FUNC_18(VAR_23, L'\\')[1] = VAR_17;
    FUNC_13(VAR_23, sizeof(VAR_23), L"testdata\\test.dll");
    if (!FUNC_12(VAR_23,
                                      &VAR_19,
                                      ((void*)0),
                                      ((void*)0)))
    {
        FUNC_14(0, "RtlDosPathNameToNtPathName_U failed\n");
        return;
    }

    FUNC_1(&VAR_21,
                               &VAR_19,
                               0,
                               ((void*)0),
                               ((void*)0));

    VAR_20 = FUNC_9(&VAR_24,
                        VAR_2|VAR_3|VAR_16,
                        &VAR_21,
                        &VAR_22,
                        VAR_0,
                        VAR_1);
    FUNC_16(VAR_20, VAR_15);
    if (!FUNC_2(VAR_20))
    {
        FUNC_17("Failed to open file\n");
        return;
    }


    VAR_20 = FUNC_5(&VAR_25,
                             VAR_9,
                             ((void*)0),
                             ((void*)0),
                             VAR_8,
                             VAR_10,
                             VAR_24);
    FUNC_16(VAR_20, VAR_15);
    if (!FUNC_2(VAR_20))
    {
        FUNC_17("Failed to create data section\n");
        FUNC_4(VAR_24);
        return;
    }


    VAR_27 = ((void*)0);
    VAR_29 = 0;
    VAR_20 = FUNC_8(VAR_25,
                                FUNC_6(),
                                &VAR_27,
                                0,
                                0,
                                ((void*)0),
                                &VAR_29,
                                VAR_18,
                                0,
                                VAR_8);
    FUNC_16(VAR_20, VAR_15);

    if (!FUNC_2(VAR_20))
    {
        FUNC_17("Failed to map view of data section\n");
        FUNC_4(VAR_25);
        FUNC_4(VAR_24);
        return;
    }


    FUNC_14(*(ULONG*)VAR_27 == 0x00905a4d, "Header not ok\n");


    *(ULONG*)VAR_27 = 0xdeadbabe;
    FUNC_14(*(ULONG*)VAR_27 == 0xdeadbabe, "Header not ok\n");


    FUNC_14(*(ULONG*)((PUCHAR)VAR_27 + 0x800) == 0x12345678,
       "Data in .data section invalid: 0x%lx!\n", *(ULONG*)((PUCHAR)VAR_27 + 0x800));
    *(ULONG*)((PUCHAR)VAR_27 + 0x800) = 0x87654321;


    VAR_20 = FUNC_5(&VAR_26,
                             VAR_9,
                             ((void*)0),
                             ((void*)0),
                             VAR_8,
                             VAR_11,
                             VAR_24);
    FUNC_16(VAR_20, VAR_14);
    if (FUNC_2(VAR_20)) FUNC_4(VAR_26);


    *(ULONG*)VAR_27 = 0x00905a4d;


    FUNC_15(*(ULONG*)((PUCHAR)VAR_27 + 0x800), 0x87654321);
    *(ULONG*)((PUCHAR)VAR_27 + 0x800) = 0xdeadbabe;


    VAR_20 = FUNC_5(&VAR_26,
                             VAR_9,
                             ((void*)0),
                             ((void*)0),
                             VAR_8,
                             VAR_11,
                             VAR_24);
    FUNC_16(VAR_20, VAR_15);
    if (!FUNC_2(VAR_20))
    {
        FUNC_17("Failed to create image section\n");
        FUNC_4(VAR_25);
        FUNC_4(VAR_24);
        return;
    }


    VAR_28 = ((void*)0);
    VAR_29 = 0;
    VAR_20 = FUNC_8(VAR_26,
                                FUNC_6(),
                                &VAR_28,
                                0,
                                0,
                                ((void*)0),
                                &VAR_29,
                                VAR_18,
                                0,
                                VAR_7);



    FUNC_16(VAR_20, VAR_13);

    if (!FUNC_2(VAR_20))
    {
        FUNC_17("Failed to map view of image section\n");
        FUNC_4(VAR_26);
        FUNC_4(VAR_25);
        FUNC_4(VAR_24);
        return;
    }


    FUNC_14(*(ULONG*)VAR_27 == 0x00905a4d, "Header not ok\n");
    FUNC_14(*(ULONG*)VAR_28 == 0x00905a4d, "Header not ok\n");


    FUNC_14((*(ULONG*)((PUCHAR)VAR_28 + 0x80000) == 0x87654321) ||
       (*(ULONG*)((PUCHAR)VAR_28 + 0x80000) == 0x12345678),
       "Wrong value in data section: 0x%lx!\n", *(ULONG*)((PUCHAR)VAR_28 + 0x80000));


    *(ULONG*)VAR_27 = 0xdeadbabe;
    *(ULONG*)((PUCHAR)VAR_27 + 0x800) = 0xf00dada;


    FUNC_14(*(ULONG*)VAR_27 == 0xdeadbabe, "Header not ok\n");
    FUNC_14(*(ULONG*)VAR_28 == 0x00905a4d, "Data should not be synced!\n");
    FUNC_14((*(ULONG*)((PUCHAR)VAR_28 + 0x80000) == 0x87654321) ||
       (*(ULONG*)((PUCHAR)VAR_28 + 0x80000) == 0x12345678),
       "Wrong value in data section: 0x%lx!\n", *(ULONG*)((PUCHAR)VAR_28 + 0x80000));


    VAR_29 = 0x1000;
    VAR_20 = FUNC_7(FUNC_6(),
                                  &VAR_27,
                                  &VAR_29,
                                  &VAR_22);
    FUNC_16(VAR_20, VAR_15);


    FUNC_14(*(ULONG*)VAR_28 == 0x00905a4d, "Data should not be synced!\n");
    FUNC_14((*(ULONG*)((PUCHAR)VAR_28 + 0x80000) == 0x87654321) ||
       (*(ULONG*)((PUCHAR)VAR_28 + 0x80000) == 0x12345678),
       "Wrong value in data section: 0x%lx!\n", *(ULONG*)((PUCHAR)VAR_28 + 0x80000));


    *(ULONG*)VAR_27 = 0x00905a4d;
    FUNC_14(*(ULONG*)VAR_27 == 0x00905a4d, "Header not ok\n");


    FUNC_10(FUNC_6(), VAR_28);
    FUNC_4(VAR_26);


    VAR_20 = FUNC_5(&VAR_26,
                             VAR_9,
                             ((void*)0),
                             ((void*)0),
                             VAR_8,
                             VAR_11,
                             VAR_24);
    FUNC_16(VAR_20, VAR_15);
    if (!FUNC_2(VAR_20))
    {
        FUNC_17("Failed to create image section\n");
        FUNC_4(VAR_25);
        FUNC_4(VAR_24);
        return;
    }


    VAR_28 = ((void*)0);
    VAR_29 = 0;
    VAR_20 = FUNC_8(VAR_26,
                                FUNC_6(),
                                &VAR_28,
                                0,
                                0,
                                ((void*)0),
                                &VAR_29,
                                VAR_18,
                                0,
                                VAR_7);



    FUNC_16(VAR_20, VAR_13);

    if (!FUNC_2(VAR_20))
    {
        FUNC_17("Failed to map view of image section\n");
        FUNC_4(VAR_26);
        FUNC_4(VAR_25);
        FUNC_4(VAR_24);
        return;
    }







    *(ULONG*)((PUCHAR)VAR_27 + 0x800) = 0x12345678;


    FUNC_10(FUNC_6(), VAR_27);

    FUNC_4(VAR_25);


    VAR_27 = (PUCHAR)VAR_28 + 0x20000;
    VAR_29 = 0x1000;
    VAR_20 = FUNC_3(FUNC_6(), &VAR_27, 0, &VAR_29, VAR_5, VAR_6);
    FUNC_16(VAR_20, VAR_12);


    FUNC_4(VAR_24);
    FUNC_4(VAR_26);
    FUNC_10(FUNC_6(), VAR_28);
}
