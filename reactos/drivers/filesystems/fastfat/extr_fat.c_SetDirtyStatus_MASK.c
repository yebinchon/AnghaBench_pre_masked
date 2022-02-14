
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ FatType; } ;
struct TYPE_7__ {int FatResource; int (* SetDirtyStatus ) (TYPE_2__*,int ) ;TYPE_1__ FatInfo; } ;
typedef TYPE_2__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ) ;

NTSTATUS
FUNC_4(
    PDEVICE_EXTENSION VAR_3,
    BOOLEAN VAR_4)
{
    NTSTATUS VAR_5;

    FUNC_0("SetDirtyStatus(DeviceExt %p, DirtyStatus %d)\n", VAR_3, VAR_4);


    if (VAR_3->FatInfo.FatType == VAR_0)
    {
        return VAR_1;
    }






    FUNC_1(&VAR_3->FatResource, VAR_2);
    VAR_5 = VAR_3->SetDirtyStatus(VAR_3, VAR_4);
    FUNC_2(&VAR_3->FatResource);

    return VAR_5;
}
