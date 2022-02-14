
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UNWIND_CODE ;
typedef int ULONG ;
struct TYPE_20__ {int Location; unsigned long cScopes; TYPE_2__* SehBlock; scalar_t__ IsUwop; scalar_t__ TryLevel; scalar_t__ FramePtr; } ;
struct TYPE_19__ {char* Instructions; char* Next; } ;
struct TYPE_18__ {unsigned long NumEntries; TYPE_1__* Entry; } ;
struct TYPE_17__ {char* Instructions; char* Next; int CiePointer; } ;
struct TYPE_16__ {int Version; int SizeOfProlog; int Flags; scalar_t__ FrameOffset; scalar_t__ FrameRegister; scalar_t__ CountOfCodes; } ;
struct TYPE_15__ {int Target; int EndTry; int BeginTry; } ;
struct TYPE_14__ {int Handler; int Target; int End; int Begin; } ;
typedef TYPE_3__* PUNWIND_INFO ;
typedef TYPE_4__* PDW2FDE ;
typedef TYPE_5__* PC_SCOPE_TABLE ;
typedef TYPE_6__ DW2CIE ;
typedef TYPE_7__ DW2CFSTATE ;
typedef int C_SCOPE_TABLE_ENTRY ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_7__*,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_7__*,int) ;
 int VAR_0 ;

ULONG
FUNC_4(PUNWIND_INFO VAR_1, PDW2FDE VAR_2, ULONG VAR_3)
{
    ULONG VAR_4;
    DW2CFSTATE VAR_5;
    char *VAR_6;
    ULONG VAR_7;
    DW2CIE VAR_8;

    VAR_4 = 4;
    VAR_1->Version = 1;
    VAR_1->Flags = 0;
    VAR_1->SizeOfProlog = 0;
    VAR_1->CountOfCodes = 0;
    VAR_1->FrameRegister = 0;
    VAR_1->FrameOffset = 0;


    FUNC_0(&VAR_8, VAR_2->CiePointer);


    VAR_5.Location = VAR_3;
    VAR_5.FramePtr = 0;
    VAR_5.TryLevel = 0;
    VAR_5.cScopes = 0;


    VAR_6 = VAR_8.Instructions;
    while (VAR_6 < VAR_8.Next)
    {
        VAR_6 += FUNC_1(&VAR_5, VAR_6);
    }


    VAR_6 = VAR_2->Instructions;
    while (VAR_6 < VAR_2->Next)
    {
        VAR_6 += FUNC_1(&VAR_5, VAR_6);

        if (VAR_5.IsUwop)
        {
            VAR_7 = FUNC_3(VAR_1, &VAR_5, VAR_3);
            VAR_4 += VAR_7 * sizeof(UNWIND_CODE);
            VAR_1->SizeOfProlog = VAR_5.Location - VAR_3;
        }
    }
    VAR_4 = FUNC_2(VAR_4, 4);


    if (VAR_5.cScopes > 0)
    {
        unsigned long VAR_9;
        ULONG *VAR_10;
        PC_SCOPE_TABLE VAR_11;


        VAR_1->Flags |= VAR_0;


        VAR_10 = (ULONG*)((char*)VAR_1 + VAR_4);

        *VAR_10 = VAR_3;

        VAR_11 = (PC_SCOPE_TABLE)(VAR_10 + 1);
        VAR_11->NumEntries = VAR_5.cScopes;


        for (VAR_9 = 0; VAR_9 < VAR_5.cScopes; VAR_9++)
        {
            VAR_11->Entry[VAR_9].Begin = VAR_5.SehBlock[VAR_9].BeginTry;
            VAR_11->Entry[VAR_9].End = VAR_5.SehBlock[VAR_9].EndTry;
            VAR_11->Entry[VAR_9].Handler = 1;
            VAR_11->Entry[VAR_9].Target = VAR_5.SehBlock[VAR_9].Target;
        }


        VAR_4 += 8 + VAR_5.cScopes * sizeof(C_SCOPE_TABLE_ENTRY);
    }

    return VAR_4;
}
