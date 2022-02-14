
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Characteristics; int DeviceType; } ;
typedef scalar_t__ PVOID ;
typedef int* PSIZE_T ;
typedef TYPE_1__* PFILE_FS_DEVICE_INFORMATION ;
typedef int NTSTATUS ;
typedef scalar_t__ FS_INFORMATION_CLASS ;
typedef int FILE_FS_DEVICE_INFORMATION ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
NTSTATUS
FUNC_0(
    PVOID VAR_5,
    FS_INFORMATION_CLASS VAR_6,
    PSIZE_T VAR_7)
{
    PFILE_FS_DEVICE_INFORMATION VAR_8;


    if (VAR_6 != VAR_1)
    {
        return VAR_3;
    }


    if (*VAR_7 < sizeof(FILE_FS_DEVICE_INFORMATION))
    {
        *VAR_7 = sizeof(FILE_FS_DEVICE_INFORMATION);
        return VAR_2;
    }


    VAR_8 = (PFILE_FS_DEVICE_INFORMATION)VAR_5;
    VAR_8->DeviceType = VAR_0;
    VAR_8->Characteristics = 0;
    *VAR_7 = sizeof(FILE_FS_DEVICE_INFORMATION);

    return VAR_4;
}
