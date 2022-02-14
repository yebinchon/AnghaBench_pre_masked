
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_8__ {int FatResource; int (* FindAndMarkAvailableCluster ) (TYPE_1__*,scalar_t__*) ;int (* GetNextCluster ) (TYPE_1__*,scalar_t__,int*) ;} ;
typedef int* PULONG ;
typedef TYPE_1__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__*) ;

NTSTATUS
FUNC_8(
    PDEVICE_EXTENSION VAR_2,
    ULONG VAR_3,
    PULONG VAR_4)
{
    ULONG VAR_5;
    NTSTATUS VAR_6;

    FUNC_0("GetNextClusterExtend(DeviceExt %p, CurrentCluster %x)\n",
           VAR_2, VAR_3);

    FUNC_1(&VAR_2->FatResource, VAR_1);




    if (VAR_3 == 0)
    {
        VAR_6 = VAR_2->FindAndMarkAvailableCluster(VAR_2, &VAR_5);
        if (!FUNC_3(VAR_6))
        {
            FUNC_2(&VAR_2->FatResource);
            return VAR_6;
        }

        *VAR_4 = VAR_5;
        FUNC_2(&VAR_2->FatResource);
        return VAR_0;
    }

    VAR_6 = VAR_2->GetNextCluster(VAR_2, VAR_3, VAR_4);

    if ((*VAR_4) == 0xFFFFFFFF)
    {



        VAR_6 = VAR_2->FindAndMarkAvailableCluster(VAR_2, &VAR_5);
        if (!FUNC_3(VAR_6))
        {
            FUNC_2(&VAR_2->FatResource);
            return VAR_6;
        }



        FUNC_4(VAR_2, VAR_3, VAR_5);
        *VAR_4 = VAR_5;
    }

    FUNC_2(&VAR_2->FatResource);
    return VAR_6;
}
