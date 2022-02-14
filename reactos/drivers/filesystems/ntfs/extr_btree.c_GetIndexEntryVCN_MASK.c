
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONGLONG ;
struct TYPE_3__ {int Flags; scalar_t__ Length; } ;
typedef int * PULONGLONG ;
typedef TYPE_1__* PINDEX_ENTRY_ATTRIBUTE ;


 int FUNC_0 (int) ;
 int VAR_0 ;

ULONGLONG
FUNC_1(PINDEX_ENTRY_ATTRIBUTE VAR_1)
{
    PULONGLONG VAR_2 = (PULONGLONG)((ULONG_PTR)VAR_1 + VAR_1->Length - sizeof(ULONGLONG));

    FUNC_0(VAR_1->Flags & VAR_0);

    return *VAR_2;
}
