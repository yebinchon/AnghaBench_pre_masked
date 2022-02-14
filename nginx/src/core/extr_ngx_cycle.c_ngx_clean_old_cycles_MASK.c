
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_socket_t ;
typedef int ngx_log_t ;
typedef int ngx_event_t ;
struct TYPE_8__ {size_t connection_n; TYPE_3__* pool; TYPE_1__* connections; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_11__ {int * log; } ;
struct TYPE_10__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_9__ {int * log; } ;
struct TYPE_7__ {scalar_t__ fd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int *,int ,char*) ;
 int FUNC_3 (int ,int *,int ,char*,size_t) ;
 TYPE_4__ VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_4)
{
    ngx_uint_t VAR_5, VAR_6, VAR_7, VAR_8;
    ngx_log_t *VAR_9;
    ngx_cycle_t **VAR_10;

    VAR_9 = VAR_1->log;
    VAR_3->log = VAR_9;

    FUNC_2(VAR_0, VAR_9, 0, "clean old cycles");

    VAR_8 = 0;

    VAR_10 = VAR_2.elts;
    for (VAR_5 = 0; VAR_5 < VAR_2.nelts; VAR_5++) {

        if (VAR_10[VAR_5] == ((void*)0)) {
            continue;
        }

        VAR_7 = 0;

        for (VAR_6 = 0; VAR_6 < VAR_10[VAR_5]->connection_n; VAR_6++) {
            if (VAR_10[VAR_5]->connections[VAR_6].fd != (ngx_socket_t) -1) {
                VAR_7 = 1;

                FUNC_3(VAR_0, VAR_9, 0, "live fd:%ui", VAR_6);

                break;
            }
        }

        if (VAR_7) {
            VAR_8 = 1;
            continue;
        }

        FUNC_3(VAR_0, VAR_9, 0, "clean old cycle: %ui", VAR_5);

        FUNC_1(VAR_10[VAR_5]->pool);
        VAR_10[VAR_5] = ((void*)0);
    }

    FUNC_3(VAR_0, VAR_9, 0, "old cycles status: %ui", VAR_8);

    if (VAR_8) {
        FUNC_0(VAR_4, 30000);

    } else {
        FUNC_1(VAR_3);
        VAR_3 = ((void*)0);
        VAR_2.nelts = 0;
    }
}
