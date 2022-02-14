
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_6__ {int Information; int Status; } ;
struct TYPE_7__ {TYPE_1__ IoStatus; } ;
typedef TYPE_2__* PVOID ;
typedef TYPE_2__* PIRP ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

VOID FUNC_2(
    PVOID VAR_2,
    NTSTATUS VAR_3,
    ULONG VAR_4)







{
    PIRP VAR_5 = VAR_2;

    FUNC_1(VAR_0, ("Called for irp %x (%x, %d).\n",
       VAR_5, VAR_3, VAR_4));

    VAR_5->IoStatus.Status = VAR_3;
    VAR_5->IoStatus.Information = VAR_4;

    FUNC_1(VAR_1, ("Irp->IoStatus.Status = %x\n",
       VAR_5->IoStatus.Status));
    FUNC_1(VAR_1, ("Irp->IoStatus.Information = %d\n",
       VAR_5->IoStatus.Information));
    FUNC_1(VAR_0, ("Completing IRP at (0x%X).\n", VAR_5));

    FUNC_0(VAR_5, VAR_3);

    FUNC_1(VAR_0, ("Done Completing IRP\n"));
}
