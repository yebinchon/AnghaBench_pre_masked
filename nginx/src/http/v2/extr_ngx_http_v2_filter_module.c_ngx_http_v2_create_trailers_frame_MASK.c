
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_13__ {size_t len; int data; } ;
struct TYPE_21__ {size_t len; int data; } ;
struct TYPE_16__ {scalar_t__ hash; TYPE_10__ value; TYPE_8__ key; } ;
typedef TYPE_3__ ngx_table_elt_t ;
struct TYPE_17__ {size_t nelts; TYPE_3__* elts; struct TYPE_17__* next; } ;
typedef TYPE_4__ ngx_list_part_t ;
typedef int ngx_http_v2_out_frame_t ;
struct TYPE_14__ {TYPE_4__ part; } ;
struct TYPE_15__ {TYPE_1__ trailers; } ;
struct TYPE_18__ {TYPE_2__ headers_out; int pool; TYPE_6__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_19__ {TYPE_7__* log; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_20__ {int log_level; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_5__*,int *,int *,int) ;
 int * FUNC_1 (int *,int ,size_t,int *) ;
 int * FUNC_2 (int *,int ,size_t,int *) ;
 int FUNC_3 (int,TYPE_7__*,int ,char*,size_t,int *,TYPE_10__*) ;
 int FUNC_4 (int ,TYPE_7__*,int ,char*,TYPE_8__*,...) ;
 int * FUNC_5 (int ,size_t) ;
 int * FUNC_6 (int ,size_t) ;
 int FUNC_7 (int *,int ,size_t) ;

__attribute__((used)) static ngx_http_v2_out_frame_t *
FUNC_8(ngx_http_request_t *VAR_5)
{
    u_char *VAR_6, *VAR_7, *VAR_8;
    size_t VAR_9, VAR_10;
    ngx_uint_t VAR_11;
    ngx_list_part_t *VAR_12;
    ngx_table_elt_t *VAR_13;
    ngx_connection_t *VAR_14;

    VAR_14 = VAR_5->connection;
    VAR_9 = 0;
    VAR_10 = 0;

    VAR_12 = &VAR_5->headers_out.trailers.part;
    VAR_13 = VAR_12->elts;

    for (VAR_11 = 0; ; VAR_11++) {

        if (VAR_11 >= VAR_12->nelts) {
            if (VAR_12->next == ((void*)0)) {
                break;
            }

            VAR_12 = VAR_12->next;
            VAR_13 = VAR_12->elts;
            VAR_11 = 0;
        }

        if (VAR_13[VAR_11].hash == 0) {
            continue;
        }

        if (VAR_13[VAR_11].key.len > VAR_1) {
            FUNC_4(VAR_3, VAR_14->log, 0,
                          "too long response trailer name: \"%V\"",
                          &VAR_13[VAR_11].key);
            return ((void*)0);
        }

        if (VAR_13[VAR_11].value.len > VAR_1) {
            FUNC_4(VAR_3, VAR_14->log, 0,
                          "too long response trailer value: \"%V: %V\"",
                          &VAR_13[VAR_11].key, &VAR_13[VAR_11].value);
            return ((void*)0);
        }

        VAR_9 += 1 + VAR_0 + VAR_13[VAR_11].key.len
                 + VAR_0 + VAR_13[VAR_11].value.len;

        if (VAR_13[VAR_11].key.len > VAR_10) {
            VAR_10 = VAR_13[VAR_11].key.len;
        }

        if (VAR_13[VAR_11].value.len > VAR_10) {
            VAR_10 = VAR_13[VAR_11].value.len;
        }
    }

    if (VAR_9 == 0) {
        return VAR_2;
    }

    VAR_8 = FUNC_5(VAR_5->pool, VAR_10);
    VAR_6 = FUNC_6(VAR_5->pool, VAR_9);

    if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7 = VAR_6;

    VAR_12 = &VAR_5->headers_out.trailers.part;
    VAR_13 = VAR_12->elts;

    for (VAR_11 = 0; ; VAR_11++) {

        if (VAR_11 >= VAR_12->nelts) {
            if (VAR_12->next == ((void*)0)) {
                break;
            }

            VAR_12 = VAR_12->next;
            VAR_13 = VAR_12->elts;
            VAR_11 = 0;
        }

        if (VAR_13[VAR_11].hash == 0) {
            continue;
        }
        *VAR_6++ = 0;

        VAR_6 = FUNC_1(VAR_6, VAR_13[VAR_11].key.data,
                                     VAR_13[VAR_11].key.len, VAR_8);

        VAR_6 = FUNC_2(VAR_6, VAR_13[VAR_11].value.data,
                                      VAR_13[VAR_11].value.len, VAR_8);
    }

    return FUNC_0(VAR_5, VAR_7, VAR_6, 1);
}
