
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef size_t ngx_uint_t ;
struct TYPE_25__ {int valid; } ;
typedef TYPE_5__ ngx_resolver_t ;
struct TYPE_22__ {int len; int * data; } ;
struct TYPE_26__ {TYPE_8__* ctx; int port; int weight; int priority; TYPE_2__ name; } ;
typedef TYPE_6__ ngx_resolver_srv_name_t ;
struct TYPE_24__ {TYPE_3__* srvs; } ;
struct TYPE_27__ {int nsrvs; TYPE_4__ u; scalar_t__ valid; } ;
typedef TYPE_7__ ngx_resolver_node_t ;
struct TYPE_28__ {int count; int nsrvs; int (* handler ) (TYPE_8__*) ;scalar_t__ valid; scalar_t__ state; int timeout; TYPE_6__* srvs; struct TYPE_28__* data; TYPE_2__ name; TYPE_19__* event; int * node; TYPE_5__* resolver; } ;
typedef TYPE_8__ ngx_resolver_ctx_t ;
struct TYPE_21__ {int data; int len; } ;
struct TYPE_23__ {int port; int weight; int priority; TYPE_1__ name; } ;
struct TYPE_20__ {scalar_t__ timer_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_19__*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*) ;
 TYPE_8__* FUNC_3 (TYPE_5__*,int *) ;
 int * FUNC_4 (TYPE_5__*,int ) ;
 TYPE_6__* FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_8__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_8__*) ;

__attribute__((used)) static void
FUNC_9(ngx_resolver_ctx_t *VAR_2, ngx_resolver_node_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_resolver_t *VAR_5;
    ngx_resolver_ctx_t *VAR_6;
    ngx_resolver_srv_name_t *VAR_7;

    VAR_5 = VAR_2->resolver;

    VAR_2->node = ((void*)0);
    VAR_2->state = VAR_1;
    VAR_2->valid = VAR_3->valid;
    VAR_2->count = VAR_3->nsrvs;

    VAR_7 = FUNC_5(VAR_5, VAR_3->nsrvs * sizeof(ngx_resolver_srv_name_t));
    if (VAR_7 == ((void*)0)) {
        goto failed;
    }

    VAR_2->srvs = VAR_7;
    VAR_2->nsrvs = VAR_3->nsrvs;

    if (VAR_2->event && VAR_2->event->timer_set) {
        FUNC_0(VAR_2->event);
    }

    for (VAR_4 = 0; VAR_4 < (ngx_uint_t) VAR_3->nsrvs; VAR_4++) {
        VAR_7[VAR_4].name.data = FUNC_4(VAR_5, VAR_3->u.srvs[VAR_4].name.len);
        if (VAR_7[VAR_4].name.data == ((void*)0)) {
            goto failed;
        }

        VAR_7[VAR_4].name.len = VAR_3->u.srvs[VAR_4].name.len;
        FUNC_1(VAR_7[VAR_4].name.data, VAR_3->u.srvs[VAR_4].name.data,
                   VAR_7[VAR_4].name.len);

        VAR_6 = FUNC_3(VAR_5, ((void*)0));
        if (VAR_6 == ((void*)0)) {
            goto failed;
        }

        VAR_6->name = VAR_7[VAR_4].name;
        VAR_6->handler = FUNC_6;
        VAR_6->data = VAR_2;
        VAR_6->srvs = &VAR_7[VAR_4];
        VAR_6->timeout = VAR_2->timeout;

        VAR_7[VAR_4].priority = VAR_3->u.srvs[VAR_4].priority;
        VAR_7[VAR_4].weight = VAR_3->u.srvs[VAR_4].weight;
        VAR_7[VAR_4].port = VAR_3->u.srvs[VAR_4].port;
        VAR_7[VAR_4].ctx = VAR_6;

        if (FUNC_2(VAR_6) == VAR_0) {
            VAR_7[VAR_4].ctx = ((void*)0);
            goto failed;
        }
    }

    return;

failed:

    VAR_2->state = VAR_0;
    VAR_2->valid = FUNC_7() + (VAR_5->valid ? VAR_5->valid : 10);

    VAR_2->handler(VAR_2);
}
