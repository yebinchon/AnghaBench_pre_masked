
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;


struct TYPE_27__ {scalar_t__ len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_22__ {scalar_t__ len; } ;
struct TYPE_28__ {scalar_t__ uri_changes; int internal; TYPE_3__* connection; int (* write_event_handler ) (TYPE_5__*) ;int phase_handler; int ctx; int loc_conf; scalar_t__ uri_changed; int * content_handler; int args; TYPE_11__ uri; TYPE_1__* main; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_29__ {TYPE_8__** named_locations; } ;
typedef TYPE_6__ ngx_http_core_srv_conf_t ;
struct TYPE_25__ {int location_rewrite_index; } ;
struct TYPE_30__ {TYPE_2__ phase_engine; } ;
typedef TYPE_7__ ngx_http_core_main_conf_t ;
struct TYPE_23__ {scalar_t__ len; int data; } ;
struct TYPE_31__ {int loc_conf; TYPE_12__ name; } ;
typedef TYPE_8__ ngx_http_core_loc_conf_t ;
struct TYPE_26__ {int log; } ;
struct TYPE_24__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 TYPE_7__* FUNC_2 (TYPE_5__*,int ) ;
 TYPE_6__* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_12__*) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_4__*,TYPE_11__*,int *) ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;

ngx_int_t
FUNC_10(ngx_http_request_t *VAR_6, ngx_str_t *VAR_7)
{
    ngx_http_core_srv_conf_t *VAR_8;
    ngx_http_core_loc_conf_t **VAR_9;
    ngx_http_core_main_conf_t *VAR_10;

    VAR_6->main->count++;
    VAR_6->uri_changes--;

    if (VAR_6->uri_changes == 0) {
        FUNC_7(VAR_3, VAR_6->connection->log, 0,
                      "rewrite or internal redirection cycle "
                      "while redirect to named location \"%V\"", VAR_7);

        FUNC_1(VAR_6, VAR_1);
        return VAR_0;
    }

    if (VAR_6->uri.len == 0) {
        FUNC_7(VAR_3, VAR_6->connection->log, 0,
                      "empty URI in redirect to named location \"%V\"", VAR_7);

        FUNC_1(VAR_6, VAR_1);
        return VAR_0;
    }

    VAR_8 = FUNC_3(VAR_6, VAR_4);

    if (VAR_8->named_locations) {

        for (VAR_9 = VAR_8->named_locations; *VAR_9; VAR_9++) {

            FUNC_5(VAR_2, VAR_6->connection->log, 0,
                           "test location: \"%V\"", &(*VAR_9)->name);

            if (VAR_7->len != (*VAR_9)->name.len
                || FUNC_9(VAR_7->data, (*VAR_9)->name.data, VAR_7->len) != 0)
            {
                continue;
            }

            FUNC_6(VAR_2, VAR_6->connection->log, 0,
                           "using location: %V \"%V?%V\"",
                           VAR_7, &VAR_6->uri, &VAR_6->args);

            VAR_6->internal = 1;
            VAR_6->content_handler = ((void*)0);
            VAR_6->uri_changed = 0;
            VAR_6->loc_conf = (*VAR_9)->loc_conf;


            FUNC_8(VAR_6->ctx, sizeof(void *) * VAR_5);

            FUNC_4(VAR_6);

            VAR_10 = FUNC_2(VAR_6, VAR_4);

            VAR_6->phase_handler = VAR_10->phase_engine.location_rewrite_index;

            VAR_6->write_event_handler = FUNC_0;
            FUNC_0(VAR_6);

            return VAR_0;
        }
    }

    FUNC_7(VAR_3, VAR_6->connection->log, 0,
                  "could not find named location \"%V\"", VAR_7);

    FUNC_1(VAR_6, VAR_1);

    return VAR_0;
}
