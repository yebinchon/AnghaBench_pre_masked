
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* USHORT ;
struct TYPE_7__ {int CodeOffset; int OpInfo; int FrameOffset; void* UnwindOp; } ;
typedef TYPE_1__ UNWIND_CODE ;
typedef int ULONG ;
struct TYPE_10__ {int regnt; } ;
struct TYPE_9__ {int Location; int Code; size_t Reg; int Offset; int FramePtrDiff; } ;
struct TYPE_8__ {int CountOfCodes; TYPE_1__* UnwindCode; } ;
typedef TYPE_2__* PUNWIND_INFO ;
typedef TYPE_3__* PDW2CFSTATE ;







 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_4__* VAR_4 ;

ULONG
FUNC_0(PUNWIND_INFO VAR_5, PDW2CFSTATE VAR_6, ULONG VAR_7)
{
    ULONG VAR_8 = 0;
    ULONG VAR_9;
    UNWIND_CODE VAR_10[3];
    int VAR_11;

    VAR_10[0].CodeOffset = VAR_6->Location - VAR_7;

    switch (VAR_6->Code)
    {
        case 129:
        case 128:

            VAR_10[0].OpInfo = VAR_4[VAR_6->Reg].regnt;
            if (VAR_6->Offset <= 0x7FFF8)
            {
                VAR_10[0].UnwindOp = VAR_2;
                VAR_10[1].FrameOffset = VAR_6->Offset / 8;
                VAR_8 = 2;
            }
            else
            {
                VAR_10[0].UnwindOp = VAR_3;
                VAR_10[1].FrameOffset = (VAR_6->Offset / 8);
                VAR_10[2].FrameOffset = (VAR_6->Offset / 8) >> 16;
                VAR_8 = 3;
            }
            break;

        case 132:

        case 131:
        case 130:
            VAR_9 = VAR_6->FramePtrDiff;
            if (VAR_9 <= 128)
            {
                VAR_10[0].UnwindOp = VAR_1;
                VAR_10[0].OpInfo = (VAR_9 / 8) - 1;
                VAR_8 = 1;
            }
            else if (VAR_9 <= 0x7FFF8)
            {
                VAR_10[0].UnwindOp = VAR_0;
                VAR_10[0].OpInfo = 0;
                VAR_10[1].FrameOffset = VAR_9 / 8;
                VAR_8 = 2;
            }
            else
            {
                VAR_10[0].UnwindOp = VAR_0;
                VAR_10[0].OpInfo = 1;
                VAR_10[1].FrameOffset = (USHORT)VAR_9;
                VAR_10[2].FrameOffset = (USHORT)(VAR_9 >> 16);
                VAR_8 = 3;
            }
            break;
    }

    if (VAR_5)
    {

        for (VAR_11 = VAR_5->CountOfCodes - 1; VAR_11 >= 0; VAR_11--)
        {
            VAR_5->UnwindCode[VAR_11 + VAR_8] = VAR_5->UnwindCode[VAR_11];
        }


        for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
        {
            VAR_5->UnwindCode[VAR_11] = VAR_10[VAR_11];
        }

        VAR_5->CountOfCodes += VAR_8;
    }

    return VAR_8;
}
