
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_9__ {size_t len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_10__ {int name; struct TYPE_10__* next; } ;
typedef TYPE_2__ ngx_rtmp_live_stream_t ;
struct TYPE_11__ {size_t nbuckets; TYPE_2__** streams; } ;
typedef TYPE_3__ ngx_rtmp_live_app_conf_t ;
struct TYPE_12__ {TYPE_3__** app_conf; } ;
typedef TYPE_4__ ngx_rtmp_core_app_conf_t ;
typedef int ngx_http_request_t ;
struct TYPE_13__ {size_t ctx_index; } ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (int *,int *,int,TYPE_1__*) ;
 char* FUNC_2 (int *,TYPE_2__*) ;
 TYPE_5__ VAR_2 ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,size_t) ;

__attribute__((used)) static const char *
FUNC_5(ngx_http_request_t *VAR_3,
    ngx_rtmp_core_app_conf_t *VAR_4)
{
    size_t VAR_5;
    ngx_str_t VAR_6;
    const char *VAR_7;
    ngx_uint_t VAR_8;
    ngx_rtmp_live_stream_t *VAR_9;
    ngx_rtmp_live_app_conf_t *VAR_10;

    VAR_10 = VAR_4->app_conf[VAR_2.ctx_index];

    if (FUNC_1(VAR_3, (u_char *) "name", sizeof("name") - 1, &VAR_6) != VAR_1)
    {
        for (VAR_8 = 0; VAR_8 < (ngx_uint_t) VAR_10->nbuckets; ++VAR_8) {
            for (VAR_9 = VAR_10->streams[VAR_8]; VAR_9; VAR_9 = VAR_9->next) {
                VAR_7 = FUNC_2(VAR_3, VAR_9);
                if (VAR_7 != VAR_0) {
                    return VAR_7;
                }
            }
        }

        return VAR_0;
    }

    for (VAR_9 = VAR_10->streams[FUNC_0(VAR_6.data, VAR_6.len) % VAR_10->nbuckets];
         VAR_9; VAR_9 = VAR_9->next)
    {
        VAR_5 = FUNC_3(VAR_9->name);
        if (VAR_6.len != VAR_5 || FUNC_4(VAR_6.data, VAR_9->name, VAR_6.len)) {
            continue;
        }

        VAR_7 = FUNC_2(VAR_3, VAR_9);
        if (VAR_7 != VAR_0) {
            return VAR_7;
        }
    }

    return VAR_0;
}
