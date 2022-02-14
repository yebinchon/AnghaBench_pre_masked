
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__* PSINGLE_LIST_ENTRY ;



PSINGLE_LIST_ENTRY FUNC_0(PSINGLE_LIST_ENTRY VAR_0)
{
    PSINGLE_LIST_ENTRY VAR_1 = VAR_0->Next;
    VAR_0->Next = ((void*)0);
    return VAR_1;
}
