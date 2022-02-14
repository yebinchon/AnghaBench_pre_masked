
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_11__ {scalar_t__ FreeHits; scalar_t__ TotalFrees; scalar_t__ AllocateHits; scalar_t__ TotalAllocates; scalar_t__ FreeMisses; scalar_t__ AllocateMisses; int Size; int Tag; int Type; int MaximumDepth; int Depth; } ;
struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_9__ {scalar_t__ FreeMisses; scalar_t__ AllocateMisses; int Size; int Tag; int Type; scalar_t__ TotalFrees; scalar_t__ TotalAllocates; int MaximumDepth; int CurrentDepth; } ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PSYSTEM_LOOKASIDE_INFORMATION ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef TYPE_3__* PGENERAL_LOOKASIDE ;
typedef scalar_t__ BOOLEAN ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static
VOID
FUNC_1(
    PSYSTEM_LOOKASIDE_INFORMATION *VAR_1,
    PULONG VAR_2,
    PLIST_ENTRY VAR_3,
    BOOLEAN VAR_4)

{
    PSYSTEM_LOOKASIDE_INFORMATION VAR_5;
    PGENERAL_LOOKASIDE VAR_6;
    PLIST_ENTRY VAR_7;
    ULONG VAR_8;


    VAR_5 = *VAR_1;
    VAR_8 = *VAR_2;


    for (VAR_7 = VAR_3->Flink;
         (VAR_7 != VAR_3) && (VAR_8 > 0);
         VAR_7 = VAR_7->Flink, VAR_8--)
    {
        VAR_6 = FUNC_0(VAR_7, VAR_0, VAR_7);


        VAR_5->CurrentDepth = VAR_6->Depth;
        VAR_5->MaximumDepth = VAR_6->MaximumDepth;
        VAR_5->TotalAllocates = VAR_6->TotalAllocates;
        VAR_5->TotalFrees = VAR_6->TotalFrees;
        VAR_5->Type = VAR_6->Type;
        VAR_5->Tag = VAR_6->Tag;
        VAR_5->Size = VAR_6->Size;


        if (VAR_4)
        {

            VAR_5->AllocateMisses = VAR_6->AllocateMisses;
            VAR_5->FreeMisses = VAR_6->FreeMisses;
        }
        else
        {

            VAR_5->AllocateMisses = VAR_6->TotalAllocates
                                   - VAR_6->AllocateHits;
            VAR_5->FreeMisses = VAR_6->TotalFrees
                               - VAR_6->FreeHits;
        }
    }


    *VAR_1 = VAR_5;
    *VAR_2 = VAR_8;
}
