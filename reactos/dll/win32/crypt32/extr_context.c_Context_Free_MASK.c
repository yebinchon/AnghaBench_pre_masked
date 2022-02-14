
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int linked; TYPE_1__* vtbl; int properties; int ref; } ;
typedef TYPE_2__ context_t ;
struct TYPE_7__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(context_t *VAR_0)
{
    FUNC_3("(%p)\n", VAR_0);

    FUNC_4(!VAR_0->ref);

    if (!VAR_0->linked) {
        FUNC_0(VAR_0->properties);
        VAR_0->vtbl->free(VAR_0);
    }else {
        FUNC_1(VAR_0->linked);
    }

    FUNC_2(VAR_0);
}
