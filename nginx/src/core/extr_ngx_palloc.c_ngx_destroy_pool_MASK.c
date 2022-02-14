
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* next; scalar_t__ last; scalar_t__ end; } ;
struct TYPE_10__ {TYPE_1__ d; TYPE_3__* large; int log; int data; int (* handler ) (int ) ;struct TYPE_10__* next; struct TYPE_10__* cleanup; } ;
typedef TYPE_2__ ngx_pool_t ;
struct TYPE_11__ {TYPE_2__* alloc; struct TYPE_11__* next; } ;
typedef TYPE_3__ ngx_pool_large_t ;
typedef TYPE_2__ ngx_pool_cleanup_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int ) ;

void
FUNC_4(ngx_pool_t *VAR_1)
{
    ngx_pool_t *VAR_2, *VAR_3;
    ngx_pool_large_t *VAR_4;
    ngx_pool_cleanup_t *VAR_5;

    for (VAR_5 = VAR_1->cleanup; VAR_5; VAR_5 = VAR_5->next) {
        if (VAR_5->handler) {
            FUNC_1(VAR_0, VAR_1->log, 0,
                           "run cleanup: %p", VAR_5);
            VAR_5->handler(VAR_5->data);
        }
    }
    for (VAR_4 = VAR_1->large; VAR_4; VAR_4 = VAR_4->next) {
        if (VAR_4->alloc) {
            FUNC_0(VAR_4->alloc);
        }
    }

    for (VAR_2 = VAR_1, VAR_3 = VAR_1->d.next; ; VAR_2 = VAR_3, VAR_3 = VAR_3->d.next) {
        FUNC_0(VAR_2);

        if (VAR_3 == ((void*)0)) {
            break;
        }
    }
}
