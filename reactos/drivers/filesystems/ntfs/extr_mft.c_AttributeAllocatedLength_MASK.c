
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_6__ {int ValueLength; } ;
struct TYPE_5__ {int AllocatedSize; } ;
struct TYPE_7__ {TYPE_2__ Resident; TYPE_1__ NonResident; scalar_t__ IsNonResident; } ;
typedef TYPE_3__* PNTFS_ATTR_RECORD ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

ULONGLONG
FUNC_1(PNTFS_ATTR_RECORD VAR_1)
{
    if (VAR_1->IsNonResident)
        return VAR_1->NonResident.AllocatedSize;
    else
        return FUNC_0(VAR_1->Resident.ValueLength, VAR_0);
}
