
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {scalar_t__ type; TYPE_3__* ctx; int ctx_index; } ;
typedef TYPE_2__ ngx_module_t ;
typedef size_t ngx_int_t ;
struct TYPE_15__ {TYPE_1__* name; } ;
typedef TYPE_3__ ngx_event_module_t ;
struct TYPE_16__ {int accept_mutex_delay; int accept_mutex; int multi_accept; int name; int use; int connections; } ;
typedef TYPE_4__ ngx_event_conf_t ;
struct TYPE_17__ {int connection_n; int log; TYPE_2__** modules; } ;
typedef TYPE_5__ ngx_cycle_t ;
struct TYPE_13__ {int data; } ;
struct TYPE_12__ {int data; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_11__ VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_2__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 TYPE_2__ VAR_11 ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static char *
FUNC_8(ngx_cycle_t *VAR_12, void *VAR_13)
{
    ngx_event_conf_t *VAR_14 = VAR_13;




    ngx_int_t VAR_15;
    ngx_module_t *VAR_16;
    ngx_event_module_t *VAR_17;

    VAR_16 = ((void*)0);
    if (VAR_16 == ((void*)0)) {
        for (VAR_15 = 0; VAR_12->modules[VAR_15]; VAR_15++) {

            if (VAR_12->modules[VAR_15]->type != VAR_4) {
                continue;
            }

            VAR_17 = VAR_12->modules[VAR_15]->ctx;

            if (FUNC_7(VAR_17->name->data, VAR_6.data) == 0)
            {
                continue;
            }

            VAR_16 = VAR_12->modules[VAR_15];
            break;
        }
    }

    if (VAR_16 == ((void*)0)) {
        FUNC_6(VAR_5, VAR_12->log, 0, "no events module found");
        return VAR_1;
    }

    FUNC_4(VAR_14->connections, VAR_0);
    VAR_12->connection_n = VAR_14->connections;

    FUNC_4(VAR_14->use, VAR_16->ctx_index);

    VAR_17 = VAR_16->ctx;
    FUNC_3(VAR_14->name, VAR_17->name->data);

    FUNC_5(VAR_14->multi_accept, 0);
    FUNC_5(VAR_14->accept_mutex, 0);
    FUNC_2(VAR_14->accept_mutex_delay, 500);

    return VAR_2;
}
