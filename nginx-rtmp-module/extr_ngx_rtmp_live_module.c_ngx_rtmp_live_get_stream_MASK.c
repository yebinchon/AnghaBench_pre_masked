
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_13__ {int epoch; int name; struct TYPE_13__* next; } ;
typedef TYPE_3__ ngx_rtmp_live_stream_t ;
struct TYPE_14__ {size_t nbuckets; int pool; TYPE_3__* free_streams; TYPE_3__** streams; } ;
typedef TYPE_4__ ngx_rtmp_live_app_conf_t ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int,size_t) ;
 TYPE_3__* FUNC_5 (int ,int) ;
 TYPE_4__* FUNC_6 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 size_t FUNC_8 (int *) ;

__attribute__((used)) static ngx_rtmp_live_stream_t **
FUNC_9(ngx_rtmp_session_t *VAR_3, u_char *VAR_4, int VAR_5)
{
    ngx_rtmp_live_app_conf_t *VAR_6;
    ngx_rtmp_live_stream_t **VAR_7;
    size_t VAR_8;

    VAR_6 = FUNC_6(VAR_3, VAR_2);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = FUNC_8(VAR_4);
    VAR_7 = &VAR_6->streams[FUNC_0(VAR_4, VAR_8) % VAR_6->nbuckets];

    for (; *VAR_7; VAR_7 = &(*VAR_7)->next) {
        if (FUNC_7(VAR_4, (*VAR_7)->name) == 0) {
            return VAR_7;
        }
    }

    if (!VAR_5) {
        return ((void*)0);
    }

    FUNC_1(VAR_0, VAR_3->connection->log, 0,
            "live: create stream '%s'", VAR_4);

    if (VAR_6->free_streams) {
        *VAR_7 = VAR_6->free_streams;
        VAR_6->free_streams = VAR_6->free_streams->next;
    } else {
        *VAR_7 = FUNC_5(VAR_6->pool, sizeof(ngx_rtmp_live_stream_t));
    }
    FUNC_3(*VAR_7, sizeof(ngx_rtmp_live_stream_t));
    FUNC_2((*VAR_7)->name, VAR_4,
            FUNC_4(sizeof((*VAR_7)->name) - 1, VAR_8));
    (*VAR_7)->epoch = VAR_1;

    return VAR_7;
}
