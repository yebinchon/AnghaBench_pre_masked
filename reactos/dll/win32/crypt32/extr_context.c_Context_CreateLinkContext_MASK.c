
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int ref; TYPE_3__* store; int properties; struct TYPE_12__* linked; int vtbl; } ;
typedef TYPE_2__ context_t ;
struct TYPE_13__ {TYPE_1__* vtbl; } ;
typedef TYPE_3__ WINECRYPT_CERTSTORE ;
struct TYPE_11__ {int (* addref ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (TYPE_3__*) ;

context_t *FUNC_6(unsigned int VAR_0, context_t *VAR_1, WINECRYPT_CERTSTORE *VAR_2)
{
    context_t *VAR_3;

    FUNC_2("(%d, %p)\n", VAR_0, VAR_1);

    VAR_3 = FUNC_1(sizeof(context_t) + VAR_0);
    if (!VAR_3)
        return ((void*)0);

    FUNC_4(FUNC_3(VAR_3), FUNC_3(VAR_1), VAR_0);
    VAR_3->vtbl = VAR_1->vtbl;
    VAR_3->ref = 1;
    VAR_3->linked = VAR_1;
    VAR_3->properties = VAR_1->properties;
    FUNC_0(VAR_1);

    VAR_2->vtbl->addref(VAR_2);
    VAR_3->store = VAR_2;

    FUNC_2("returning %p\n", VAR_3);
    return VAR_3;
}
