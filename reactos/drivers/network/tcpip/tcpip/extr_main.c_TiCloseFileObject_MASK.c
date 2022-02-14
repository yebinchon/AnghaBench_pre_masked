
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_23__ {TYPE_1__* FileObject; } ;
struct TYPE_19__ {int Status; } ;
struct TYPE_22__ {TYPE_4__ IoStatus; } ;
struct TYPE_18__ {int ControlChannel; int ConnectionContext; int AddressHandle; } ;
struct TYPE_21__ {TYPE_3__ Handle; } ;
struct TYPE_17__ {int ControlChannel; int ConnectionContext; int AddressHandle; } ;
struct TYPE_20__ {TYPE_2__ Handle; } ;
struct TYPE_16__ {int FsContext2; TYPE_6__* FsContext; } ;
typedef TYPE_5__ TDI_REQUEST ;
typedef TYPE_6__* PTRANSPORT_CONTEXT ;
typedef TYPE_7__* PIRP ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_8__* FUNC_4 (TYPE_7__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;



 int FUNC_6 (int ,char*) ;
 int VAR_2 ;

NTSTATUS FUNC_7(
    PDEVICE_OBJECT VAR_3,
    PIRP VAR_4)
{
    PIO_STACK_LOCATION VAR_5;
    PTRANSPORT_CONTEXT VAR_6;
    TDI_REQUEST VAR_7;
    NTSTATUS VAR_8;

    VAR_5 = FUNC_4(VAR_4);
    VAR_6 = VAR_5->FileObject->FsContext;
    if (!VAR_6)
    {
        FUNC_6(VAR_0, ("Parameters are invalid.\n"));
        return VAR_1;
    }

    switch ((ULONG_PTR)VAR_5->FileObject->FsContext2)
    {
        case 128:
            VAR_7.Handle.AddressHandle = VAR_6->Handle.AddressHandle;
            VAR_8 = FUNC_1(&VAR_7);
            break;

        case 130:
            VAR_7.Handle.ConnectionContext = VAR_6->Handle.ConnectionContext;
            VAR_8 = FUNC_2(&VAR_7);
            break;

        case 129:
            VAR_7.Handle.ControlChannel = VAR_6->Handle.ControlChannel;
            VAR_8 = FUNC_3(&VAR_7);
            break;

        default:
            VAR_8 = VAR_1;
            break;
    }

    if (FUNC_5(VAR_8))
        FUNC_0(VAR_6, VAR_2);

    VAR_4->IoStatus.Status = VAR_8;

    return VAR_4->IoStatus.Status;
}
