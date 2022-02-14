
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* FileObject; } ;
struct TYPE_11__ {int Status; scalar_t__ Information; } ;
struct TYPE_14__ {TYPE_1__ IoStatus; int Cancel; } ;
struct TYPE_13__ {int CancelIrps; } ;
struct TYPE_12__ {scalar_t__ FsContext; } ;
typedef TYPE_3__* PTRANSPORT_CONTEXT ;
typedef TYPE_4__* PIRP ;
typedef TYPE_5__* PIO_STACK_LOCATION ;
typedef int PDRIVER_CANCEL ;
typedef int NTSTATUS ;
typedef int KIRQL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;

NTSTATUS FUNC_5(
    PTRANSPORT_CONTEXT VAR_3,
    PIRP VAR_4,
    PDRIVER_CANCEL VAR_5)
{
    KIRQL VAR_6;
    PIO_STACK_LOCATION VAR_7;
    PTRANSPORT_CONTEXT VAR_8;

    FUNC_4(VAR_0, ("Called.\n"));

    VAR_7 = FUNC_1(VAR_4);
    VAR_8 = (PTRANSPORT_CONTEXT)VAR_7->FileObject->FsContext;

    FUNC_0(&VAR_6);

    if (!VAR_4->Cancel && !VAR_8->CancelIrps) {
        (void)FUNC_3(VAR_4, VAR_5);
        FUNC_2(VAR_6);

        FUNC_4(VAR_0, ("Leaving (IRP at 0x%X can now be cancelled).\n", VAR_4));

        return VAR_2;
    }



    FUNC_2(VAR_6);

    VAR_4->IoStatus.Status = VAR_1;
    VAR_4->IoStatus.Information = 0;

    FUNC_4(VAR_0, ("Leaving (IRP was already cancelled).\n"));

    return VAR_4->IoStatus.Status;
}
