
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct update_accum {size_t cUpdates; TYPE_1__* updates; } ;
struct TYPE_2__ {struct TYPE_2__* pbData; } ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct update_accum *VAR_0)
{
    DWORD VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->cUpdates; VAR_1++)
        FUNC_0(VAR_0->updates[VAR_1].pbData);
    FUNC_0(VAR_0->updates);
    VAR_0->updates = ((void*)0);
    VAR_0->cUpdates = 0;
}
