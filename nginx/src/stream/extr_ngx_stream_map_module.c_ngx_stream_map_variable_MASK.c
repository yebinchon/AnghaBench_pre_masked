
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int valid; char* data; int len; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_17__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
struct TYPE_18__ {TYPE_2__* default_value; int map; scalar_t__ hostnames; int value; } ;
typedef TYPE_4__ ngx_stream_map_ctx_t ;
typedef int ngx_stream_complex_value_t ;
struct TYPE_19__ {int len; char* data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_5__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,TYPE_5__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int *,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_stream_session_t *VAR_3, ngx_stream_variable_value_t *VAR_4,
    uintptr_t VAR_5)
{
    ngx_stream_map_ctx_t *VAR_6 = (ngx_stream_map_ctx_t *) VAR_5;

    ngx_str_t VAR_7, VAR_8;
    ngx_stream_complex_value_t *VAR_9;
    ngx_stream_variable_value_t *VAR_10;

    FUNC_0(VAR_1, VAR_3->connection->log, 0,
                   "stream map started");

    if (FUNC_2(VAR_3, &VAR_6->value, &VAR_7) != VAR_2) {
        return VAR_0;
    }

    if (VAR_6->hostnames && VAR_7.len > 0 && VAR_7.data[VAR_7.len - 1] == '.') {
        VAR_7.len--;
    }

    VAR_10 = FUNC_3(VAR_3, &VAR_6->map, &VAR_7);

    if (VAR_10 == ((void*)0)) {
        VAR_10 = VAR_6->default_value;
    }

    if (!VAR_10->valid) {
        VAR_9 = (ngx_stream_complex_value_t *) VAR_10->data;

        if (FUNC_2(VAR_3, VAR_9, &VAR_8) != VAR_2) {
            return VAR_0;
        }

        VAR_4->valid = 1;
        VAR_4->no_cacheable = 0;
        VAR_4->not_found = 0;
        VAR_4->len = VAR_8.len;
        VAR_4->data = VAR_8.data;

    } else {
        *VAR_4 = *VAR_10;
    }

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "stream map: \"%V\" \"%v\"", &VAR_7, VAR_4);

    return VAR_2;
}
