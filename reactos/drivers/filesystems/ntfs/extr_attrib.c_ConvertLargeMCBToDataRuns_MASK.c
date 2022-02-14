
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
typedef scalar_t__* PULONG ;
typedef scalar_t__* PUCHAR ;
typedef int PLARGE_MCB ;
typedef int NTSTATUS ;
typedef scalar_t__ LONGLONG ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_5(PLARGE_MCB VAR_3,
                          PUCHAR VAR_4,
                          ULONG VAR_5,
                          PULONG VAR_6)
{
    NTSTATUS VAR_7 = VAR_1;
    ULONG VAR_8 = 0;
    LONGLONG VAR_9;
    ULONGLONG VAR_10 = 0;
    LONGLONG VAR_11, VAR_12, VAR_13;
    ULONG VAR_14;


    FUNC_0("\t[Vbn, Lbn, Count]\n");


    for (VAR_14 = 0; FUNC_2(VAR_3, VAR_14, &VAR_11, &VAR_12, &VAR_13); VAR_14++)
    {
        UCHAR VAR_15 = 0;
        UCHAR VAR_16 = 0;
        UCHAR VAR_17 = 0;


        FUNC_0("\t[%I64d, %I64d,%I64d]\n", VAR_11, VAR_12, VAR_13);


        VAR_9 = VAR_12 - VAR_10;
        VAR_10 = VAR_12;


        FUNC_0("Determining how many bytes needed to represent %I64x\n", VAR_9);
        VAR_15 = FUNC_3(VAR_9, VAR_2);
        FUNC_0("%d bytes needed.\n", VAR_15);


        FUNC_0("Determining how many bytes needed to represent %I64x\n", VAR_13);
        VAR_16 = FUNC_3(VAR_13, VAR_2);
        FUNC_0("%d bytes needed.\n", VAR_16);


        if (VAR_8 + 2 + VAR_16 + VAR_15 > VAR_5)
        {
            VAR_7 = VAR_0;
            FUNC_1("FIXME: Ran out of room in buffer for data runs!\n");
            break;
        }


        VAR_17 = (VAR_15 << 4) + VAR_16;
        VAR_4[VAR_8++] = VAR_17;


        FUNC_4(VAR_4 + VAR_8, &VAR_13, VAR_16);
        VAR_8 += VAR_16;


        FUNC_4(VAR_4 + VAR_8, &VAR_9, VAR_15);
        VAR_8 += VAR_15;
    }


    VAR_4[VAR_8++] = 0;

    *VAR_6 = VAR_8;
    FUNC_0("New Size of DataRuns: %ld\n", *VAR_6);

    return VAR_7;
}
