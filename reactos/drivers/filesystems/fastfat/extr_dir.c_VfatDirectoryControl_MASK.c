
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int MinorFunction; int Flags; TYPE_2__* Irp; } ;
struct TYPE_8__ {scalar_t__ Information; } ;
struct TYPE_9__ {TYPE_1__ IoStatus; } ;
typedef TYPE_3__* PVFAT_IRP_CONTEXT ;
typedef scalar_t__ NTSTATUS ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

NTSTATUS
FUNC_5(
    PVFAT_IRP_CONTEXT VAR_4)
{
    NTSTATUS VAR_5 = VAR_3;

    VAR_4->Irp->IoStatus.Information = 0;

    switch (VAR_4->MinorFunction)
    {
        case 128:
            VAR_5 = FUNC_2 (VAR_4);
            break;

        case 129:
            VAR_5 = FUNC_4(VAR_4);
            break;

        default:

            FUNC_1("Unexpected minor function %x in VFAT driver\n",
                   VAR_4->MinorFunction);
            VAR_5 = VAR_1;
            break;
    }

    if (VAR_5 == VAR_2 && FUNC_0(VAR_4->Flags, VAR_0))
    {
        return FUNC_3(VAR_4);
    }

    return VAR_5;
}
