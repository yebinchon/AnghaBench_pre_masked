
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* store; int ref; } ;
typedef TYPE_2__ context_t ;
struct TYPE_8__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {int (* addref ) (TYPE_3__*) ;} ;
typedef int LONG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(context_t *VAR_0)
{
    LONG VAR_1 = FUNC_0(&VAR_0->ref);

    FUNC_1("(%p) ref=%d\n", VAR_0, VAR_0->ref);

    if(VAR_1 == 1) {

        VAR_0->store->vtbl->addref(VAR_0->store);
    }
}
