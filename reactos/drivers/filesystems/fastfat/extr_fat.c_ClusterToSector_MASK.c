
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_4__ {int dataStart; int SectorsPerCluster; } ;
struct TYPE_5__ {TYPE_1__ FatInfo; } ;
typedef TYPE_2__* PDEVICE_EXTENSION ;



ULONGLONG
FUNC_0(
    PDEVICE_EXTENSION VAR_0,
    ULONG VAR_1)
{
    return VAR_0->FatInfo.dataStart +
           ((ULONGLONG)(VAR_1 - 2) * VAR_0->FatInfo.SectorsPerCluster);

}
