
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int log; TYPE_2__* cleanup; } ;
typedef TYPE_1__ ngx_pool_t ;
struct TYPE_8__ {struct TYPE_8__* next; int * handler; int * data; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_2__*) ;
 void* FUNC_1 (TYPE_1__*,size_t) ;

ngx_pool_cleanup_t *
FUNC_2(ngx_pool_t *VAR_1, size_t VAR_2)
{
    ngx_pool_cleanup_t *VAR_3;

    VAR_3 = FUNC_1(VAR_1, sizeof(ngx_pool_cleanup_t));
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_2) {
        VAR_3->data = FUNC_1(VAR_1, VAR_2);
        if (VAR_3->data == ((void*)0)) {
            return ((void*)0);
        }

    } else {
        VAR_3->data = ((void*)0);
    }

    VAR_3->handler = ((void*)0);
    VAR_3->next = VAR_1->cleanup;

    VAR_1->cleanup = VAR_3;

    FUNC_0(VAR_0, VAR_1->log, 0, "add cleanup: %p", VAR_3);

    return VAR_3;
}
