
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ FatType; } ;
struct TYPE_8__ {TYPE_1__ FatInfo; } ;
struct TYPE_7__ {scalar_t__ EaSize; } ;
typedef int PVFATFCB ;
typedef int* PULONG ;
typedef int PFILE_OBJECT ;
typedef TYPE_2__* PFILE_EA_INFORMATION ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_2(
    PFILE_OBJECT VAR_3,
    PVFATFCB VAR_4,
    PDEVICE_EXTENSION VAR_5,
    PFILE_EA_INFORMATION VAR_6,
    PULONG VAR_7)
{
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);


    VAR_6->EaSize = 0;
    *VAR_7 -= sizeof(*VAR_6);
    if (VAR_5->FatInfo.FatType == VAR_0 ||
        VAR_5->FatInfo.FatType == VAR_1)
    {

        FUNC_0("VFAT: FileEaInformation not implemented!\n");
    }
    return VAR_2;
}
