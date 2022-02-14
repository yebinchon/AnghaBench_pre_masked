
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {struct TYPE_5__* Type; struct TYPE_5__* Name; } ;
struct TYPE_4__ {int NumElements; TYPE_2__* Elements; } ;
typedef TYPE_1__* PROSSYM_AGGREGATE ;


 int FUNC_0 (TYPE_2__*) ;

VOID
FUNC_1(PROSSYM_AGGREGATE VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->NumElements; VAR_1++) {
        FUNC_0(VAR_0->Elements[VAR_1].Name);
        FUNC_0(VAR_0->Elements[VAR_1].Type);
    }
    FUNC_0(VAR_0->Elements);
}
