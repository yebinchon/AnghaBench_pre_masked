
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG64 ;
typedef int ULONG ;
struct TYPE_3__ {double* data_in; double* data_out; int input_frames; int output_frames; double src_ratio; int output_frames_gen; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_DATA ;
typedef double* PVOID ;
typedef scalar_t__ PUSHORT ;
typedef int* PULONG ;
typedef double* PUCHAR ;
typedef double* PFLOAT ;
typedef int NTSTATUS ;
typedef int KFLOATING_SAVE ;
typedef int FLOAT ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int,int,int ) ;
 int FUNC_2 (char*,int) ;
 double* FUNC_3 (int ,int) ;
 int FUNC_4 (double*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (double) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (double*,int*,int) ;
 int FUNC_12 (double*,short*,int) ;
 int FUNC_13 (int*,double*,int) ;
 int * FUNC_14 (int ,int,int*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (short*,double*,int) ;

NTSTATUS
FUNC_17(
    PUCHAR VAR_5,
    ULONG VAR_6,
    ULONG VAR_7,
    ULONG VAR_8,
    ULONG VAR_9,
    ULONG VAR_10,
    PVOID * VAR_11,
    PULONG VAR_12)
{
    KFLOATING_SAVE VAR_13;
    NTSTATUS VAR_14;
    ULONG VAR_15;
    SRC_STATE * VAR_16;
    SRC_DATA VAR_17;
    PUCHAR VAR_18;
    int VAR_19;
    PFLOAT VAR_20, VAR_21;
    ULONG VAR_22;
    ULONG VAR_23;

    FUNC_1("PerformSampleRateConversion OldRate %u NewRate %u BytesPerSample %u NumChannels %u Irql %u\n", VAR_7, VAR_8, VAR_9, VAR_10, FUNC_5());

    FUNC_0(VAR_9 == 1 || VAR_9 == 2 || VAR_9 == 4);


    VAR_14 = FUNC_7(&VAR_13);

    if (!FUNC_8(VAR_14))
    {
        FUNC_2("KeSaveFloatingPointState failed with %x\n", VAR_14);
        return VAR_14;
    }

    VAR_22 = VAR_6 / (VAR_9 * VAR_10);

    VAR_20 = FUNC_3(VAR_0, VAR_22 * VAR_10 * sizeof(FLOAT));
    if (!VAR_20)
    {
        FUNC_6(&VAR_13);
        return VAR_2;
    }

    VAR_23 = ((((ULONG64)VAR_22 * VAR_8) + (VAR_7 / 2)) / VAR_7) + 2;

    VAR_21 = FUNC_3(VAR_0, VAR_23 * VAR_10 * sizeof(FLOAT));
    if (!VAR_21)
    {
        FUNC_4(VAR_20);
        FUNC_6(&VAR_13);
        return VAR_2;
    }

    VAR_18 = FUNC_3(VAR_0, VAR_23 * VAR_10 * VAR_9);
    if (!VAR_18)
    {
        FUNC_4(VAR_20);
        FUNC_4(VAR_21);
        FUNC_6(&VAR_13);
        return VAR_2;
    }

    VAR_16 = FUNC_14(VAR_1, VAR_10, &VAR_19);
    if (!VAR_16)
    {
        FUNC_2("src_new failed with %x\n", VAR_19);
        FUNC_6(&VAR_13);
        FUNC_4(VAR_20);
        FUNC_4(VAR_21);
        FUNC_4(VAR_18);
        return VAR_4;
    }


    if (VAR_9 == 1)
    {
        for(VAR_15 = 0; VAR_15 < VAR_22 * VAR_10; VAR_15++)
            VAR_20[VAR_15] = (float)(VAR_5[VAR_15] / (1.0 * 0x80));
    }
    else if (VAR_9 == 2)
    {
        FUNC_16((short*)VAR_5, VAR_20, VAR_22 * VAR_10);
    }
    else if (VAR_9 == 4)
    {
        FUNC_13((int*)VAR_5, VAR_20, VAR_22 * VAR_10);
    }

    VAR_17.data_in = VAR_20;
    VAR_17.data_out = VAR_21;
    VAR_17.input_frames = VAR_22;
    VAR_17.output_frames = VAR_23;
    VAR_17.src_ratio = (double)VAR_8 / (double)VAR_7;

    VAR_19 = FUNC_15(VAR_16, &VAR_17);
    if (VAR_19)
    {
        FUNC_2("src_process failed with %x\n", VAR_19);
        FUNC_6(&VAR_13);
        FUNC_4(VAR_20);
        FUNC_4(VAR_21);
        FUNC_4(VAR_18);
        return VAR_4;
    }

    if (VAR_9 == 1)
    {


        for(VAR_15 = 0; VAR_15 < VAR_17.output_frames_gen * VAR_10; VAR_15++)
            VAR_18[VAR_15] = (FUNC_9(VAR_21[VAR_15]) >> 24);
    }
    else if (VAR_9 == 2)
    {
        PUSHORT VAR_24 = (PUSHORT)VAR_18;

        FUNC_12(VAR_21, (short*)VAR_24, VAR_17.output_frames_gen * VAR_10);
    }
    else if (VAR_9 == 4)
    {
        PULONG VAR_25 = (PULONG)VAR_18;

        FUNC_11(VAR_21, (int*)VAR_25, VAR_17.output_frames_gen * VAR_10);
    }


    *VAR_11 = VAR_18;
    *VAR_12 = VAR_17.output_frames_gen * VAR_9 * VAR_10;
    FUNC_4(VAR_20);
    FUNC_4(VAR_21);
    FUNC_10(VAR_16);
    FUNC_6(&VAR_13);
    return VAR_3;
}
