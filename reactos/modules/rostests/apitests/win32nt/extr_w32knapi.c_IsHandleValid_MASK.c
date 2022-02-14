
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t USHORT ;
typedef int ULONG_PTR ;
struct TYPE_3__ {scalar_t__ FullUnique; int * KernelData; } ;
typedef int * PVOID ;
typedef TYPE_1__* PGDI_TABLE_ENTRY ;
typedef scalar_t__ HGDIOBJ ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

BOOL
FUNC_0(HGDIOBJ VAR_3)
{
    USHORT VAR_4 = (ULONG_PTR)VAR_3;
    PGDI_TABLE_ENTRY VAR_5 = &VAR_1[VAR_4];

    if (VAR_5->KernelData == ((void*)0) ||
        VAR_5->KernelData < (PVOID)0x80000000 ||
        (USHORT)VAR_5->FullUnique != (USHORT)((ULONG_PTR)VAR_3 >> 16))
    {
        return VAR_0;
    }

    return VAR_2;
}
