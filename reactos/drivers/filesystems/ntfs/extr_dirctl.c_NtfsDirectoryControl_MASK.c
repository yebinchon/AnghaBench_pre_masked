
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int MinorFunction; int Flags; TYPE_2__* Irp; } ;
struct TYPE_7__ {scalar_t__ Information; } ;
struct TYPE_8__ {TYPE_1__ IoStatus; } ;
typedef TYPE_3__* PNTFS_IRP_CONTEXT ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;


 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

NTSTATUS
FUNC_4(PNTFS_IRP_CONTEXT VAR_5)
{
    NTSTATUS VAR_6 = VAR_4;

    FUNC_0("NtfsDirectoryControl() called\n");

    switch (VAR_5->MinorFunction)
    {
        case 128:
            VAR_6 = FUNC_3(VAR_5);
            break;

        case 129:
            FUNC_1("IRP_MN_NOTIFY_CHANGE_DIRECTORY\n");
            VAR_6 = VAR_2;
            break;

        default:
            VAR_6 = VAR_1;
            break;
    }

    if (VAR_6 == VAR_3 && VAR_5->Flags & VAR_0)
    {
        return FUNC_2(VAR_5);
    }

    VAR_5->Irp->IoStatus.Information = 0;

    return VAR_6;
}
