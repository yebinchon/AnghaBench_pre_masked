
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Information; int Status; } ;
struct TYPE_8__ {TYPE_1__ IoStatus; } ;
struct TYPE_7__ {TYPE_3__* Irp; } ;
typedef TYPE_2__* PNTFS_IRP_CONTEXT ;
typedef TYPE_3__* PIRP ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

NTSTATUS
FUNC_2(PNTFS_IRP_CONTEXT VAR_1)
{
    PIRP VAR_2;

    FUNC_1("NtfsSetVolumeInformation() called\n");

    FUNC_0(VAR_1);

    VAR_2 = VAR_1->Irp;
    VAR_2->IoStatus.Status = VAR_0;
    VAR_2->IoStatus.Information = 0;

    return VAR_0;
}
