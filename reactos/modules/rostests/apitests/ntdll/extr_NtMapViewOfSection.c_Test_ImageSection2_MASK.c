
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_4__ {int QuadPart; } ;
typedef int SIZE_T ;
typedef int * PVOID ;
typedef int * PUCHAR ;
typedef scalar_t__ PCHAR ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int **,int ,int*,int,int ) ;
 int FUNC_2 (int *,int ,int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int **,int ,int ,TYPE_1__*,int*,int ,int ,int ) ;
 int FUNC_5 (int *,int,int *,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (char*,int *,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (char*) ;

void
FUNC_11(void)
{
    UNICODE_STRING VAR_12;
    NTSTATUS VAR_13;
    OBJECT_ATTRIBUTES VAR_14;
    IO_STATUS_BLOCK VAR_15;
    HANDLE VAR_16, VAR_17;
    PVOID VAR_18, VAR_19;
    SIZE_T VAR_20;
    LARGE_INTEGER VAR_21, VAR_22;

    if (!FUNC_6(L"testdata\\nvoglv32.dll",
                                      &VAR_12,
                                      ((void*)0),
                                      ((void*)0)))
    {
        FUNC_7(0, "RtlDosPathNameToNtPathName_U failed\n");
        return;
    }

    FUNC_0(&VAR_14,
                               &VAR_12,
                               0,
                               ((void*)0),
                               ((void*)0));

    VAR_13 = FUNC_5(&VAR_16,
                        VAR_2|VAR_3|VAR_10,
                        &VAR_14,
                        &VAR_15,
                        VAR_0,
                        VAR_1);
    FUNC_8(VAR_13, VAR_9);
    FUNC_9("Opened file with handle %p\n", VAR_16);


    VAR_21.QuadPart = 0x20000;
    VAR_13 = FUNC_2(&VAR_17,
                             VAR_7,
                             ((void*)0),
                             &VAR_21,
                             VAR_6,
                             VAR_8,
                             VAR_16);
    FUNC_8(VAR_13, VAR_9);

    FUNC_9("Created image section with handle %p\n", VAR_17);



    VAR_18 = ((void*)0);
    VAR_20 = 0x0000;
    VAR_22.QuadPart = 0x00000;
    VAR_13 = FUNC_4(VAR_17,
                                FUNC_3(),
                                &VAR_18,
                                0,
                                0,
                                &VAR_22,
                                &VAR_20,
                                VAR_11,
                                0,
                                VAR_6);
    FUNC_8(VAR_13, VAR_9);

    FUNC_9("Mapped image section at %p, value in text section: %lx\n",
           *VAR_18, *((ULONG*)((PCHAR)VAR_18 + 0x1196)));
    FUNC_10("PAUSE");


    VAR_19 = (PUCHAR)VAR_18 + 0x10000;
    VAR_20 = 0x1000;
    VAR_13 = FUNC_1(FUNC_3(),
                                     &VAR_19,
                                     0,
                                     &VAR_20,
                                     VAR_5 | VAR_4,
                                     VAR_6);
    FUNC_9("allocation status: %lx\n", VAR_13);
    FUNC_10("PAUSE");

}
