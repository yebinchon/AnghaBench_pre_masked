
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int context_vtbl_t ;
struct TYPE_11__ {int ref; TYPE_3__* store; int * linked; int const* vtbl; int properties; } ;
typedef TYPE_2__ context_t ;
struct TYPE_12__ {TYPE_1__* vtbl; } ;
typedef TYPE_3__ WINECRYPT_CERTSTORE ;
struct TYPE_10__ {int (* addref ) (TYPE_3__*) ;} ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;

context_t *FUNC_5(size_t VAR_0, const context_vtbl_t *VAR_1, WINECRYPT_CERTSTORE *VAR_2)
{
    context_t *VAR_3;

    VAR_3 = FUNC_1(sizeof(context_t) + VAR_0);
    if (!VAR_3)
        return ((void*)0);

    VAR_3->properties = FUNC_0();
    if (!VAR_3->properties)
    {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    VAR_3->vtbl = VAR_1;
    VAR_3->ref = 1;
    VAR_3->linked = ((void*)0);

    VAR_2->vtbl->addref(VAR_2);
    VAR_3->store = VAR_2;

    FUNC_3("returning %p\n", VAR_3);
    return VAR_3;
}
