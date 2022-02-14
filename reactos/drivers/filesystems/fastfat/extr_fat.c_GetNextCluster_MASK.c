
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {int Flags; } ;
struct TYPE_6__ {int FatResource; int (* GetNextCluster ) (TYPE_1__*,scalar_t__,int ) ;} ;
typedef int PULONG ;
typedef TYPE_1__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ) ;

NTSTATUS
FUNC_6(
    PDEVICE_EXTENSION VAR_4,
    ULONG VAR_5,
    PULONG VAR_6)
{
    NTSTATUS VAR_7;

    FUNC_1("GetNextCluster(DeviceExt %p, CurrentCluster %x)\n",
           VAR_4, VAR_5);

    if (VAR_5 == 0)
    {
        FUNC_2("WARNING: File system corruption detected. You may need to run a disk repair utility.\n");
        if (VAR_3->Flags & VAR_2)
            FUNC_0(VAR_5 != 0);
        return VAR_0;
    }

    FUNC_3(&VAR_4->FatResource, VAR_1);
    VAR_7 = VAR_4->GetNextCluster(VAR_4, VAR_5, VAR_6);
    FUNC_4(&VAR_4->FatResource);

    return VAR_7;
}
