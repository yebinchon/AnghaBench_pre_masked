
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_12__ {scalar_t__ joined; struct TYPE_12__* next; int name; } ;
typedef TYPE_3__ ngx_rtmp_play_ctx_t ;
struct TYPE_13__ {size_t nbuckets; TYPE_3__** ctx; } ;
typedef TYPE_4__ ngx_rtmp_play_app_conf_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_4)
{
    ngx_rtmp_play_ctx_t *VAR_5, **VAR_6;
    ngx_rtmp_play_app_conf_t *VAR_7;
    ngx_uint_t VAR_8;

    FUNC_1(VAR_1, VAR_4->connection->log, 0,
                   "play: leave");

    VAR_7 = FUNC_2(VAR_4, VAR_3);

    VAR_5 = FUNC_3(VAR_4, VAR_3);
    if (VAR_5 == ((void*)0) || !VAR_5->joined) {
        return VAR_0;
    }

    VAR_8 = FUNC_0(VAR_5->name, FUNC_4(VAR_5->name));
    VAR_6 = &VAR_7->ctx[VAR_8 % VAR_7->nbuckets];

    while (*VAR_6 && *VAR_6 != VAR_5) {
        VAR_6 = &(*VAR_6)->next;
    }

    if (*VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_6 = (*VAR_6)->next;
    VAR_5->joined = 0;

    return VAR_2;
}
