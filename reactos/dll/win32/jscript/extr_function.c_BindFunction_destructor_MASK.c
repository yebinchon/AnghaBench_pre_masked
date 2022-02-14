
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int argc; int this; TYPE_1__* target; int * args; } ;
struct TYPE_4__ {int dispex; } ;
typedef int FunctionInstance ;
typedef TYPE_2__ BindFunction ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(FunctionInstance *VAR_0)
{
    BindFunction *VAR_1 = (BindFunction*)VAR_0;
    unsigned VAR_2;

    FUNC_1("%p\n", VAR_1);

    for(VAR_2 = 0; VAR_2 < VAR_1->argc; VAR_2++)
        FUNC_3(VAR_1->args[VAR_2]);
    FUNC_2(&VAR_1->target->dispex);
    FUNC_0(VAR_1->this);
}
