
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_15__ {int Ext2CcbLookasideList; } ;
struct TYPE_12__ {scalar_t__ Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
struct TYPE_11__ {int Size; int Type; } ;
struct TYPE_14__ {TYPE_2__ DirectorySearchPattern; TYPE_3__* SymLink; int Flags; TYPE_1__ Identifier; } ;
struct TYPE_13__ {scalar_t__ Refercount; int FullName; } ;
typedef TYPE_3__* PEXT2_MCB ;
typedef TYPE_4__* PEXT2_CCB ;
typedef int EXT2_CCB ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_8__* VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_4__*,int) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_4__*,int) ;

PEXT2_CCB
FUNC_6 (ULONG VAR_5, PEXT2_MCB VAR_6)
{
    PEXT2_CCB VAR_7;

    VAR_7 = (PEXT2_CCB) (FUNC_2(
                           &(VAR_3->Ext2CcbLookasideList)));
    if (!VAR_7) {
        return ((void*)0);
    }

    FUNC_1(VAR_1, ( "ExtAllocateCcb: Ccb created: %ph.\n", VAR_7));

    FUNC_5(VAR_7, sizeof(EXT2_CCB));

    VAR_7->Identifier.Type = VAR_2;
    VAR_7->Identifier.Size = sizeof(EXT2_CCB);
    VAR_7->Flags = VAR_5;

    VAR_7->SymLink = VAR_6;
    if (VAR_6) {
        FUNC_0(VAR_6->Refercount > 0);
        FUNC_3(VAR_6);
        FUNC_1(VAR_0, ( "ExtAllocateCcb: Ccb SymLink: %wZ.\n",
                        &VAR_7->SymLink->FullName));
    }

    VAR_7->DirectorySearchPattern.Length = 0;
    VAR_7->DirectorySearchPattern.MaximumLength = 0;
    VAR_7->DirectorySearchPattern.Buffer = 0;

    FUNC_4(VAR_4, VAR_7, sizeof(EXT2_CCB));

    return VAR_7;
}
