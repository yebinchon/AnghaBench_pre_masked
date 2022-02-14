
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
struct TYPE_12__ {int joined; struct TYPE_12__* next; int name; } ;
typedef TYPE_3__ ngx_rtmp_play_ctx_t ;
struct TYPE_13__ {size_t nbuckets; TYPE_3__** ctx; } ;
typedef TYPE_4__ ngx_rtmp_play_app_conf_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_5)
{
    ngx_rtmp_play_ctx_t *VAR_6, **VAR_7;
    ngx_rtmp_play_app_conf_t *VAR_8;
    ngx_uint_t VAR_9;

    FUNC_1(VAR_1, VAR_5->connection->log, 0,
                   "play: join");

    VAR_8 = FUNC_2(VAR_5, VAR_4);

    VAR_6 = FUNC_3(VAR_5, VAR_4);
    if (VAR_6 == ((void*)0) || VAR_6->joined) {
        return VAR_0;
    }

    VAR_9 = FUNC_0(VAR_6->name, FUNC_4(VAR_6->name));
    VAR_7 = &VAR_8->ctx[VAR_9 % VAR_8->nbuckets];

    while (*VAR_7) {
        if (!FUNC_5((*VAR_7)->name, VAR_6->name, VAR_3)) {
            break;
        }
        VAR_7 = &(*VAR_7)->next;
    }

    VAR_6->next = *VAR_7;
    *VAR_7 = VAR_6;
    VAR_6->joined = 1;

    return VAR_2;
}
