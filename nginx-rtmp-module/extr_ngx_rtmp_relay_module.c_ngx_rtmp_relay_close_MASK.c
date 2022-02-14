
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_19__ {scalar_t__ relay; scalar_t__ static_relay; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_16__ {int len; int data; } ;
struct TYPE_17__ {scalar_t__ timer_set; } ;
struct TYPE_20__ {struct TYPE_20__* next; TYPE_11__ name; struct TYPE_20__* publish; TYPE_10__* session; int app; struct TYPE_20__* play; TYPE_13__ push_evt; int * tag; TYPE_13__* static_evt; } ;
typedef TYPE_3__ ngx_rtmp_relay_ctx_t ;
struct TYPE_21__ {size_t nbuckets; TYPE_3__** ctx; int push_reconnect; int pull_reconnect; } ;
typedef TYPE_4__ ngx_rtmp_relay_app_conf_t ;
struct TYPE_18__ {int log; } ;
struct TYPE_15__ {TYPE_1__* connection; scalar_t__ relay; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_13__*,int ) ;
 int FUNC_1 (TYPE_13__*) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int *,TYPE_11__*) ;
 int FUNC_4 (int ,int ,int ,char*,int *,TYPE_11__*,size_t) ;
 int FUNC_5 (TYPE_10__*) ;
 TYPE_4__* FUNC_6 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(ngx_rtmp_session_t *VAR_2)
{
    ngx_rtmp_relay_app_conf_t *VAR_3;
    ngx_rtmp_relay_ctx_t *VAR_4, **VAR_5;
    ngx_uint_t VAR_6;

    VAR_3 = FUNC_6(VAR_2, VAR_1);

    VAR_4 = FUNC_7(VAR_2, VAR_1);
    if (VAR_4 == ((void*)0)) {
        return;
    }

    if (VAR_2->static_relay) {
        FUNC_0(VAR_4->static_evt, VAR_3->pull_reconnect);
    }

    if (VAR_4->publish == ((void*)0)) {
        return;
    }


    if (VAR_4->publish != VAR_4) {
        for (VAR_5 = &VAR_4->publish->play; *VAR_5; VAR_5 = &(*VAR_5)->next) {
            if (*VAR_5 == VAR_4) {
                *VAR_5 = VAR_4->next;
                break;
            }
        }

        FUNC_3(VAR_0, VAR_4->session->connection->log, 0,
                "relay: play disconnect app='%V' name='%V'",
                &VAR_4->app, &VAR_4->name);


        if (VAR_2->relay && VAR_4->tag == &VAR_1 &&
            !VAR_4->publish->push_evt.timer_set)
        {
            FUNC_0(&VAR_4->publish->push_evt, VAR_3->push_reconnect);
        }
        if (VAR_4->publish->play == ((void*)0) && VAR_4->publish->session->relay) {
            FUNC_3(VAR_0,
                 VAR_4->publish->session->connection->log, 0,
                "relay: publish disconnect empty app='%V' name='%V'",
                &VAR_4->app, &VAR_4->name);
            FUNC_5(VAR_4->publish->session);
        }

        VAR_4->publish = ((void*)0);

        return;
    }


    FUNC_3(VAR_0, VAR_4->session->connection->log, 0,
            "relay: publish disconnect app='%V' name='%V'",
            &VAR_4->app, &VAR_4->name);

    if (VAR_4->push_evt.timer_set) {
        FUNC_1(&VAR_4->push_evt);
    }

    for (VAR_5 = &VAR_4->play; *VAR_5; VAR_5 = &(*VAR_5)->next) {
        (*VAR_5)->publish = ((void*)0);
        FUNC_3(VAR_0, (*VAR_5)->session->connection->log,
            0, "relay: play disconnect orphan app='%V' name='%V'",
            &(*VAR_5)->app, &(*VAR_5)->name);
        FUNC_5((*VAR_5)->session);
    }
    VAR_4->publish = ((void*)0);

    VAR_6 = FUNC_2(VAR_4->name.data, VAR_4->name.len);
    VAR_5 = &VAR_3->ctx[VAR_6 % VAR_3->nbuckets];
    for (; *VAR_5 && *VAR_5 != VAR_4; VAR_5 = &(*VAR_5)->next);
    if (*VAR_5) {
        *VAR_5 = VAR_4->next;
    }
}
