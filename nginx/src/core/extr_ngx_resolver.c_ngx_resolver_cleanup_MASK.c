
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_9__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_10__ {TYPE_1__ connections; TYPE_7__* event; int addr6_rbtree; int addr_rbtree; int srv_rbtree; int name_rbtree; } ;
typedef TYPE_2__ ngx_resolver_t ;
struct TYPE_11__ {TYPE_5__* write_buf; TYPE_5__* read_buf; scalar_t__ tcp; scalar_t__ udp; } ;
typedef TYPE_3__ ngx_resolver_connection_t ;
struct TYPE_14__ {int log; } ;
struct TYPE_13__ {scalar_t__ timer_set; } ;
struct TYPE_12__ {struct TYPE_12__* start; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_8__* VAR_1 ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
    ngx_resolver_t *VAR_3 = VAR_2;

    ngx_uint_t VAR_4;
    ngx_resolver_connection_t *VAR_5;

    FUNC_2(VAR_0, VAR_1->log, 0, "cleanup resolver");

    FUNC_3(VAR_3, &VAR_3->name_rbtree);

    FUNC_3(VAR_3, &VAR_3->srv_rbtree);

    FUNC_3(VAR_3, &VAR_3->addr_rbtree);





    if (VAR_3->event->timer_set) {
        FUNC_1(VAR_3->event);
    }

    VAR_5 = VAR_3->connections.elts;

    for (VAR_4 = 0; VAR_4 < VAR_3->connections.nelts; VAR_4++) {
        if (VAR_5[VAR_4].udp) {
            FUNC_0(VAR_5[VAR_4].udp);
        }

        if (VAR_5[VAR_4].tcp) {
            FUNC_0(VAR_5[VAR_4].tcp);
        }

        if (VAR_5[VAR_4].read_buf) {
            FUNC_4(VAR_3, VAR_5[VAR_4].read_buf->start);
            FUNC_4(VAR_3, VAR_5[VAR_4].read_buf);
        }

        if (VAR_5[VAR_4].write_buf) {
            FUNC_4(VAR_3, VAR_5[VAR_4].write_buf->start);
            FUNC_4(VAR_3, VAR_5[VAR_4].write_buf);
        }
    }
}
