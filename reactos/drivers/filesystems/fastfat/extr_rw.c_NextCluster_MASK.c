
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {scalar_t__ SectorsPerCluster; } ;
struct TYPE_7__ {TYPE_1__ FatInfo; } ;
typedef scalar_t__* PULONG ;
typedef TYPE_2__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__*) ;
 int VAR_0 ;

NTSTATUS
FUNC_2(
    PDEVICE_EXTENSION VAR_1,
    ULONG VAR_2,
    PULONG VAR_3,
    BOOLEAN VAR_4)
{
    if (VAR_2 == 1)
    {
        (*VAR_3) += VAR_1->FatInfo.SectorsPerCluster;
        return VAR_0;
    }
    else
    {
        if (VAR_4)
            return FUNC_1(VAR_1, (*VAR_3), VAR_3);
        else
            return FUNC_0(VAR_1, (*VAR_3), VAR_3);
    }
}
