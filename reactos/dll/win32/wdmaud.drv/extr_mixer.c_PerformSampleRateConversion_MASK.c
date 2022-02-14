
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
typedef int FLOAT ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 double* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,double*) ;
 int VAR_3 ;
 int FUNC_5 (double) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (double*,int*,int) ;
 int FUNC_8 (double*,short*,int) ;
 int FUNC_9 (int*,double*,int) ;
 int * FUNC_10 (int ,int,int*) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (short*,double*,int) ;

DWORD
FUNC_13(
    PUCHAR VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    ULONG VAR_7,
    ULONG VAR_8,
    ULONG VAR_9,
    PVOID * VAR_10,
    PULONG VAR_11)
{
    ULONG VAR_12;
    SRC_STATE * VAR_13;
    SRC_DATA VAR_14;
    PUCHAR VAR_15;
    int VAR_16;
    PFLOAT VAR_17, VAR_18;
    ULONG VAR_19;
    ULONG VAR_20;



    FUNC_0(VAR_8 == 1 || VAR_8 == 2 || VAR_8 == 4);

    VAR_19 = VAR_5 / (VAR_8 * VAR_9);

    VAR_17 = FUNC_3(FUNC_2(), 0, VAR_19 * VAR_9 * sizeof(FLOAT));
    if (!VAR_17)
    {
        return VAR_1;
    }

    VAR_20 = ((((ULONG64)VAR_19 * VAR_7) + (VAR_6 / 2)) / VAR_6) + 2;

    VAR_18 = FUNC_3(FUNC_2(), 0, VAR_20 * VAR_9 * sizeof(FLOAT));
    if (!VAR_18)
    {
        FUNC_4(FUNC_2(), 0,VAR_17);
        return VAR_1;
    }

    VAR_15 = FUNC_3(FUNC_2(), 0, VAR_20 * VAR_9 * VAR_8);
    if (!VAR_15)
    {
        FUNC_4(FUNC_2(), 0,VAR_17);
        FUNC_4(FUNC_2(), 0,VAR_18);
        return VAR_1;
    }

    VAR_13 = FUNC_10(VAR_3, VAR_9, &VAR_16);
    if (!VAR_13)
    {
        FUNC_4(FUNC_2(), 0,VAR_17);
        FUNC_4(FUNC_2(), 0,VAR_18);
        FUNC_4(FUNC_2(), 0,VAR_15);
        return VAR_1;
    }


    if (VAR_8 == 1)
    {
        for(VAR_12 = 0; VAR_12 < VAR_19 * VAR_9; VAR_12++)
            VAR_17[VAR_12] = (float)(VAR_4[VAR_12] / (1.0 * 0x80));
    }
    else if (VAR_8 == 2)
    {
        FUNC_12((short*)VAR_4, VAR_17, VAR_19 * VAR_9);
    }
    else if (VAR_8 == 4)
    {
        FUNC_9((int*)VAR_4, VAR_17, VAR_19 * VAR_9);
    }

    VAR_14.data_in = VAR_17;
    VAR_14.data_out = VAR_18;
    VAR_14.input_frames = VAR_19;
    VAR_14.output_frames = VAR_20;
    VAR_14.src_ratio = (double)VAR_7 / (double)VAR_6;

    VAR_16 = FUNC_11(VAR_13, &VAR_14);
    if (VAR_16)
    {
        FUNC_1("src_process failed with %x\n", VAR_16);
        FUNC_4(FUNC_2(), 0,VAR_17);
        FUNC_4(FUNC_2(), 0,VAR_18);
        FUNC_4(FUNC_2(), 0,VAR_15);
        return VAR_0;
    }

    if (VAR_8 == 1)
    {


        for(VAR_12 = 0; VAR_12 < VAR_14.output_frames_gen * VAR_9; VAR_12++)
            VAR_15[VAR_12] = (FUNC_5(VAR_18[VAR_12]) >> 24);
    }
    else if (VAR_8 == 2)
    {
        PUSHORT VAR_21 = (PUSHORT)VAR_15;

        FUNC_8(VAR_18, (short*)VAR_21, VAR_14.output_frames_gen * VAR_9);
    }
    else if (VAR_8 == 4)
    {
        PULONG VAR_22 = (PULONG)VAR_15;

        FUNC_7(VAR_18, (int*)VAR_22, VAR_14.output_frames_gen * VAR_9);
    }


    *VAR_10 = VAR_15;
    *VAR_11 = VAR_14.output_frames_gen * VAR_8 * VAR_9;
    FUNC_4(FUNC_2(), 0,VAR_17);
    FUNC_4(FUNC_2(), 0,VAR_18);
    FUNC_6(VAR_13);
    return VAR_2;
}
