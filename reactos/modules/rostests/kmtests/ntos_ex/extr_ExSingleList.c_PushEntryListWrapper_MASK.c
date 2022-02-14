
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* Next; } ;
typedef TYPE_1__* PSINGLE_LIST_ENTRY ;
typedef int PKSPIN_LOCK ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ) ;

PSINGLE_LIST_ENTRY FUNC_2(PSINGLE_LIST_ENTRY VAR_0, PSINGLE_LIST_ENTRY VAR_1, PKSPIN_LOCK VAR_2)
{
    PSINGLE_LIST_ENTRY VAR_3;
    FUNC_1(VAR_2);
    VAR_3 = VAR_0->Next;
    FUNC_0(VAR_0, VAR_1);
    return VAR_3;
}
