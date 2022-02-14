
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t USHORT ;
typedef int ULONG_PTR ;
struct TYPE_3__ {int * UserData; scalar_t__ FullUnique; int * KernelData; } ;
typedef int * PVOID ;
typedef TYPE_1__* PGDI_TABLE_ENTRY ;
typedef scalar_t__ HGDIOBJ ;


 TYPE_1__* VAR_0 ;

PVOID
FUNC_0(HGDIOBJ VAR_1)
{
    USHORT VAR_2 = (ULONG_PTR)VAR_1;
    PGDI_TABLE_ENTRY VAR_3 = &VAR_0[VAR_2];

    if (VAR_3->KernelData == ((void*)0) ||
        VAR_3->KernelData < (PVOID)0x80000000 ||
        (USHORT)VAR_3->FullUnique != (USHORT)((ULONG_PTR)VAR_1 >> 16))
    {
        return ((void*)0);
    }

    return VAR_3->UserData;
}
