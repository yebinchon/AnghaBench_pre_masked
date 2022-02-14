
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ MajorFunction; int FileObject; int MinorFunction; } ;
struct TYPE_9__ {int IrpContextLookasideList; } ;
struct TYPE_7__ {int Size; int Type; } ;
struct TYPE_8__ {scalar_t__ MajorFunction; int IsTopLevel; int Flags; int PriorityBoost; TYPE_6__* Stack; int FileObject; int MinorFunction; int DeviceObject; scalar_t__ Irp; TYPE_1__ Identifier; } ;
typedef TYPE_2__* PNTFS_IRP_CONTEXT ;
typedef scalar_t__ PIRP ;
typedef int PDEVICE_OBJECT ;
typedef int NTFS_IRP_CONTEXT ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_6__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,char*) ;

PNTFS_IRP_CONTEXT
FUNC_6(PDEVICE_OBJECT VAR_11,
                       PIRP VAR_12)
{
    PNTFS_IRP_CONTEXT VAR_13;

    FUNC_5(VAR_8, "NtfsAllocateIrpContext()\n");

    VAR_13 = (PNTFS_IRP_CONTEXT)FUNC_0(&VAR_10->IrpContextLookasideList);
    if (VAR_13 == ((void*)0))
        return ((void*)0);

    FUNC_4(VAR_13, sizeof(NTFS_IRP_CONTEXT));

    VAR_13->Identifier.Type = VAR_9;
    VAR_13->Identifier.Size = sizeof(NTFS_IRP_CONTEXT);
    VAR_13->Irp = VAR_12;
    VAR_13->DeviceObject = VAR_11;
    VAR_13->Stack = FUNC_1(VAR_12);
    VAR_13->MajorFunction = VAR_13->Stack->MajorFunction;
    VAR_13->MinorFunction = VAR_13->Stack->MinorFunction;
    VAR_13->FileObject = VAR_13->Stack->FileObject;
    VAR_13->IsTopLevel = (FUNC_2() == VAR_12);
    VAR_13->PriorityBoost = VAR_0;
    VAR_13->Flags = VAR_2;

    if (VAR_13->MajorFunction == VAR_6 ||
        VAR_13->MajorFunction == VAR_5 ||
        VAR_13->MajorFunction == VAR_7 ||
        (VAR_13->MajorFunction != VAR_3 &&
         VAR_13->MajorFunction != VAR_4 &&
         FUNC_3(VAR_12)))
    {
        VAR_13->Flags |= VAR_1;
    }

    return VAR_13;
}
