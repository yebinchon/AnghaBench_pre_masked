
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ len; int data; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_26__ {TYPE_3__* connection; scalar_t__ relay; } ;
typedef TYPE_6__ ngx_rtmp_session_t ;
struct TYPE_24__ {int url; } ;
struct TYPE_22__ {scalar_t__ len; int data; } ;
struct TYPE_27__ {TYPE_4__ url; int play_path; int app; TYPE_2__ name; } ;
typedef TYPE_7__ ngx_rtmp_relay_target_t ;
typedef int ngx_rtmp_relay_ctx_t ;
struct TYPE_21__ {size_t nelts; TYPE_7__** elts; } ;
struct TYPE_28__ {TYPE_1__ pulls; } ;
typedef TYPE_8__ ngx_rtmp_relay_app_conf_t ;
struct TYPE_29__ {int name; } ;
typedef TYPE_9__ ngx_rtmp_play_t ;
typedef int ngx_int_t ;
struct TYPE_23__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*,TYPE_9__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_5__*,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 TYPE_8__* FUNC_3 (TYPE_6__*,int ) ;
 int * FUNC_4 (TYPE_6__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_5__*,TYPE_7__*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_3, ngx_rtmp_play_t *VAR_4)
{
    ngx_rtmp_relay_app_conf_t *VAR_5;
    ngx_rtmp_relay_target_t *VAR_6, **VAR_7;
    ngx_str_t VAR_8;
    size_t VAR_9;
    ngx_rtmp_relay_ctx_t *VAR_10;

    VAR_10 = FUNC_4(VAR_3, VAR_2);
    if (VAR_10 && VAR_3->relay) {
        goto next;
    }

    VAR_5 = FUNC_3(VAR_3, VAR_2);
    if (VAR_5 == ((void*)0) || VAR_5->pulls.nelts == 0) {
        goto next;
    }

    VAR_8.len = FUNC_6(VAR_4->name);
    VAR_8.data = VAR_4->name;

    VAR_7 = VAR_5->pulls.elts;
    for (VAR_9 = 0; VAR_9 < VAR_5->pulls.nelts; ++VAR_9, ++VAR_7) {
        VAR_6 = *VAR_7;

        if (VAR_6->name.len && (VAR_8.len != VAR_6->name.len ||
            FUNC_2(VAR_8.data, VAR_6->name.data, VAR_8.len)))
        {
            continue;
        }

        if (FUNC_5(VAR_3, &VAR_8, VAR_6) == VAR_1) {
            continue;
        }

        FUNC_1(VAR_0, VAR_3->connection->log, 0,
                "relay: pull failed name='%V' app='%V' "
                "playpath='%V' url='%V'",
                &VAR_8, &VAR_6->app, &VAR_6->play_path,
                &VAR_6->url.url);
    }

next:
    return FUNC_0(VAR_3, VAR_4);
}
