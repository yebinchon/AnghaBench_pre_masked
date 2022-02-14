
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ bytecode_t ;
struct TYPE_8__ {TYPE_1__* queue_head; } ;
typedef TYPE_2__ JScript ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(JScript *VAR_0)
{
    bytecode_t *VAR_1;

    for(VAR_1 = VAR_0->queue_head; VAR_1; VAR_1 = VAR_1->next)
        FUNC_1(VAR_0, VAR_1);

    FUNC_0(VAR_0);
}
