
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t cElement; struct TYPE_5__* rgpElement; } ;
typedef TYPE_1__* PCERT_SIMPLE_CHAIN ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(PCERT_SIMPLE_CHAIN VAR_0)
{
    DWORD VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->cElement; VAR_1++)
        FUNC_0(VAR_0->rgpElement[VAR_1]);
    FUNC_1(VAR_0->rgpElement);
    FUNC_1(VAR_0);
}
