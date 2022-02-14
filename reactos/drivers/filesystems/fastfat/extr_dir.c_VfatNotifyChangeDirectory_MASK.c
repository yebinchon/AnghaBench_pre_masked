
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int CompletionFilter; } ;
struct TYPE_11__ {TYPE_2__ NotifyDirectory; } ;
struct TYPE_15__ {TYPE_3__ Parameters; int Flags; } ;
struct TYPE_14__ {int NotifyList; int NotifySync; } ;
struct TYPE_13__ {int PathNameU; } ;
struct TYPE_12__ {int Flags; int Irp; TYPE_1__* FileObject; TYPE_6__* DeviceExt; TYPE_7__* Stack; } ;
struct TYPE_9__ {int FsContext2; scalar_t__ FsContext; } ;
typedef TYPE_4__* PVFAT_IRP_CONTEXT ;
typedef TYPE_5__* PVFATFCB ;
typedef TYPE_6__* PVCB ;
typedef int PSTRING ;
typedef TYPE_7__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ,int ,int ,int ,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS FUNC_2(PVFAT_IRP_CONTEXT VAR_4)
{
    PVCB VAR_5;
    PVFATFCB VAR_6;
    PIO_STACK_LOCATION VAR_7;
    VAR_7 = VAR_4->Stack;
    VAR_5 = VAR_4->DeviceExt;
    VAR_6 = (PVFATFCB) VAR_4->FileObject->FsContext;

    FUNC_1(VAR_5->NotifySync,
                                   &(VAR_5->NotifyList),
                                   VAR_4->FileObject->FsContext2,
                                   (PSTRING)&(VAR_6->PathNameU),
                                   FUNC_0(VAR_7->Flags, VAR_2),
                                   VAR_0,
                                   VAR_7->Parameters.NotifyDirectory.CompletionFilter,
                                   VAR_4->Irp,
                                   ((void*)0),
                                   ((void*)0));


    VAR_4->Flags &= ~VAR_1;

    return VAR_3;
}
