
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
struct TYPE_4__ {scalar_t__ LowestVCN; scalar_t__ HighestVCN; scalar_t__ MappingPairsOffset; } ;
struct TYPE_5__ {TYPE_1__ NonResident; } ;
typedef scalar_t__ PULONGLONG ;
typedef int PUCHAR ;
typedef TYPE_2__* PNTFS_ATTR_RECORD ;
typedef int PLONGLONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_1(PNTFS_ATTR_RECORD VAR_2,
        ULONGLONG VAR_3,
        PULONGLONG VAR_4,
        PULONGLONG VAR_5)
{
    if (VAR_3 < VAR_2->NonResident.LowestVCN || VAR_3 > VAR_2->NonResident.HighestVCN)
        return VAR_0;

    FUNC_0((PUCHAR)((ULONG_PTR)VAR_2 + VAR_2->NonResident.MappingPairsOffset), (PLONGLONG)VAR_4, VAR_5);

    return VAR_1;
}
