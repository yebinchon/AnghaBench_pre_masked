
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Flags; int WorkQueueItem; int Irp; } ;
typedef TYPE_1__* PNTFS_IRP_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static
NTSTATUS
FUNC_6(PNTFS_IRP_CONTEXT VAR_7)
{
    FUNC_4(&VAR_5);
    FUNC_1("NtfsQueueRequest(IrpContext %p), %d\n", VAR_7, VAR_5);

    FUNC_0(!(VAR_7->Flags & VAR_3) &&
           (VAR_7->Flags & VAR_2));
    VAR_7->Flags |= VAR_1;
    FUNC_5(VAR_7->Irp);
    FUNC_2(&VAR_7->WorkQueueItem, VAR_4, VAR_7);
    FUNC_3(&VAR_7->WorkQueueItem, VAR_0);

    return VAR_6;
}
