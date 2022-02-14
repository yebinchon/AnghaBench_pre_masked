
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ FatType; } ;
struct TYPE_7__ {int FatResource; int (* GetDirtyStatus ) (TYPE_2__*,int *) ;TYPE_1__ FatInfo; } ;
typedef TYPE_2__* PDEVICE_EXTENSION ;
typedef int * PBOOLEAN ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int *) ;

NTSTATUS
FUNC_4(
    PDEVICE_EXTENSION VAR_4,
    PBOOLEAN VAR_5)
{
    NTSTATUS VAR_6;

    FUNC_0("GetDirtyStatus(DeviceExt %p)\n", VAR_4);


    if (VAR_4->FatInfo.FatType == VAR_1)
    {
        *VAR_5 = VAR_0;
        return VAR_2;
    }





    FUNC_1(&VAR_4->FatResource, VAR_3);
    VAR_6 = VAR_4->GetDirtyStatus(VAR_4, VAR_5);
    FUNC_2(&VAR_4->FatResource);

    return VAR_6;
}
