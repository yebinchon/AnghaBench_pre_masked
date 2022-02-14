
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;
typedef struct TYPE_20__ TYPE_12__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_26__ {TYPE_3__* connection; } ;
typedef TYPE_5__ ngx_rtmp_session_t ;
struct TYPE_25__ {int url; } ;
struct TYPE_23__ {scalar_t__ len; int data; } ;
struct TYPE_27__ {TYPE_4__ url; int play_path; int app; TYPE_2__ name; } ;
typedef TYPE_6__ ngx_rtmp_relay_target_t ;
struct TYPE_21__ {int timer_set; } ;
struct TYPE_20__ {scalar_t__ len; int data; } ;
struct TYPE_28__ {TYPE_19__ push_evt; TYPE_12__ name; TYPE_6__* data; int * tag; struct TYPE_28__* next; struct TYPE_28__* play; } ;
typedef TYPE_7__ ngx_rtmp_relay_ctx_t ;
struct TYPE_22__ {scalar_t__ nelts; TYPE_6__** elts; } ;
struct TYPE_29__ {int push_reconnect; TYPE_1__ pushes; } ;
typedef TYPE_8__ ngx_rtmp_relay_app_conf_t ;
struct TYPE_30__ {TYPE_5__* data; } ;
typedef TYPE_9__ ngx_event_t ;
struct TYPE_24__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_19__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_12__*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 TYPE_8__* FUNC_4 (TYPE_5__*,int ) ;
 TYPE_7__* FUNC_5 (TYPE_5__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_12__*,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_7(ngx_event_t *VAR_4)
{
    ngx_rtmp_session_t *VAR_5 = VAR_4->data;

    ngx_rtmp_relay_app_conf_t *VAR_6;
    ngx_rtmp_relay_ctx_t *VAR_7, *VAR_8;
    ngx_uint_t VAR_9;
    ngx_rtmp_relay_target_t *VAR_10, **VAR_11;

    FUNC_1(VAR_0, VAR_5->connection->log, 0,
            "relay: push reconnect");

    VAR_6 = FUNC_4(VAR_5, VAR_3);

    VAR_7 = FUNC_5(VAR_5, VAR_3);
    if (VAR_7 == ((void*)0)) {
        return;
    }

    VAR_11 = VAR_6->pushes.elts;
    for (VAR_9 = 0; VAR_9 < VAR_6->pushes.nelts; ++VAR_9, ++VAR_11) {
        VAR_10 = *VAR_11;

        if (VAR_10->name.len && (VAR_7->name.len != VAR_10->name.len ||
            FUNC_3(VAR_7->name.data, VAR_10->name.data, VAR_7->name.len)))
        {
            continue;
        }

        for (VAR_8 = VAR_7->play; VAR_8; VAR_8 = VAR_8->next) {
            if (VAR_8->tag == &VAR_3 &&
                VAR_8->data == VAR_10)
            {
                break;
            }
        }

        if (VAR_8) {
            continue;
        }

        if (FUNC_6(VAR_5, &VAR_7->name, VAR_10) == VAR_2) {
            continue;
        }

        FUNC_2(VAR_1, VAR_5->connection->log, 0,
                "relay: push reconnect failed name='%V' app='%V' "
                "playpath='%V' url='%V'",
                &VAR_7->name, &VAR_10->app, &VAR_10->play_path,
                &VAR_10->url.url);

        if (!VAR_7->push_evt.timer_set) {
            FUNC_0(&VAR_7->push_evt, VAR_6->push_reconnect);
        }
    }
}
