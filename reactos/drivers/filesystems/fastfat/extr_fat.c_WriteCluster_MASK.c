
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_4__ {int FatResource; int AvailableClusters; scalar_t__ AvailableClustersValid; int (* WriteCluster ) (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__*) ;} ;
typedef int PLONG ;
typedef TYPE_1__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__*) ;

NTSTATUS
FUNC_5(
    PDEVICE_EXTENSION VAR_1,
    ULONG VAR_2,
    ULONG VAR_3)
{
    NTSTATUS VAR_4;
    ULONG VAR_5;

    FUNC_0 (&VAR_1->FatResource, VAR_0);
    VAR_4 = VAR_1->WriteCluster(VAR_1, VAR_2, VAR_3, &VAR_5);
    if (VAR_1->AvailableClustersValid)
    {
        if (VAR_5 && VAR_3 == 0)
            FUNC_3((PLONG)&VAR_1->AvailableClusters);
        else if (VAR_5 == 0 && VAR_3)
            FUNC_2((PLONG)&VAR_1->AvailableClusters);
    }
    FUNC_1(&VAR_1->FatResource);
    return VAR_4;
}
