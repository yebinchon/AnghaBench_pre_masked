
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_19__ {int NumberProcessors; } ;
struct TYPE_18__ {int Statistics; } ;
struct TYPE_17__ {TYPE_5__* Irp; TYPE_2__* Stack; TYPE_8__* DeviceExt; } ;
struct TYPE_16__ {int OutputBufferLength; } ;
struct TYPE_14__ {int Information; } ;
struct TYPE_13__ {int * SystemBuffer; } ;
struct TYPE_15__ {TYPE_4__ IoStatus; TYPE_3__ AssociatedIrp; } ;
struct TYPE_11__ {TYPE_6__ FileSystemControl; } ;
struct TYPE_12__ {TYPE_1__ Parameters; } ;
typedef int STATISTICS ;
typedef int * PVOID ;
typedef TYPE_7__* PVFAT_IRP_CONTEXT ;
typedef TYPE_8__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILESYSTEM_STATISTICS ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__* VAR_4 ;

__attribute__((used)) static
NTSTATUS
FUNC_1(
    PVFAT_IRP_CONTEXT VAR_5)
{
    PVOID VAR_6;
    ULONG VAR_7;
    NTSTATUS VAR_8;
    PDEVICE_EXTENSION VAR_9;

    VAR_9 = VAR_5->DeviceExt;
    VAR_7 = VAR_5->Stack->Parameters.FileSystemControl.OutputBufferLength;
    VAR_6 = VAR_5->Irp->AssociatedIrp.SystemBuffer;

    if (VAR_7 < sizeof(FILESYSTEM_STATISTICS))
    {
        return VAR_1;
    }

    if (VAR_6 == ((void*)0))
    {
        return VAR_2;
    }

    if (VAR_7 >= sizeof(STATISTICS) * VAR_4->NumberProcessors)
    {
        VAR_7 = sizeof(STATISTICS) * VAR_4->NumberProcessors;
        VAR_8 = VAR_3;
    }
    else
    {
        VAR_8 = VAR_0;
    }

    FUNC_0(VAR_6, VAR_9->Statistics, VAR_7);
    VAR_5->Irp->IoStatus.Information = VAR_7;

    return VAR_8;
}
