
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pool; } ;
struct TYPE_6__ {int * kid; int * next; int op; } ;
typedef int REOp ;
typedef TYPE_1__ RENode ;
typedef TYPE_2__ CompilerState ;


 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static RENode *
FUNC_1(CompilerState *VAR_0, REOp VAR_1)
{
    RENode *VAR_2;

    VAR_2 = FUNC_0(VAR_0->pool, sizeof(*VAR_2));
    if (!VAR_2) {

        return ((void*)0);
    }
    VAR_2->op = VAR_1;
    VAR_2->next = ((void*)0);
    VAR_2->kid = ((void*)0);
    return VAR_2;
}
