
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ volume_fcb; } ;
typedef TYPE_6__ device_extension ;
typedef scalar_t__ ULONG ;
struct TYPE_13__ {int OutputBufferLength; } ;
struct TYPE_14__ {TYPE_1__ FileSystemControl; } ;
struct TYPE_20__ {TYPE_3__* FileObject; TYPE_2__ Parameters; } ;
struct TYPE_16__ {int Information; } ;
struct TYPE_17__ {scalar_t__* SystemBuffer; } ;
struct TYPE_19__ {TYPE_4__ IoStatus; int * MdlAddress; TYPE_5__ AssociatedIrp; } ;
struct TYPE_15__ {scalar_t__ FsContext; } ;
typedef TYPE_7__* PIRP ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;


 TYPE_8__* FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 scalar_t__* FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static NTSTATUS FUNC_2(device_extension* VAR_5, PIRP VAR_6) {
    PIO_STACK_LOCATION VAR_7 = FUNC_0(VAR_6);
    ULONG* VAR_8;

    if (VAR_6->AssociatedIrp.SystemBuffer) {
        VAR_8 = VAR_6->AssociatedIrp.SystemBuffer;
    } else if (VAR_6->MdlAddress != ((void*)0)) {
        VAR_8 = FUNC_1(VAR_6->MdlAddress, VAR_0);

        if (!VAR_8)
            return VAR_1;
    } else
        return VAR_3;

    if (VAR_7->Parameters.FileSystemControl.OutputBufferLength < sizeof(ULONG))
        return VAR_2;

    *VAR_8 = 0;

    if (VAR_7->FileObject->FsContext != VAR_5->volume_fcb)
        return VAR_2;

    VAR_6->IoStatus.Information = sizeof(ULONG);

    return VAR_4;
}
