
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
typedef scalar_t__ (* ngx_stream_script_len_code_pt ) (TYPE_3__*) ;
struct TYPE_18__ {size_t len; int * data; } ;
struct TYPE_16__ {int flushed; TYPE_7__ buf; int * ip; int * pos; TYPE_2__* session; } ;
typedef TYPE_3__ ngx_stream_script_engine_t ;
typedef int (* ngx_stream_script_code_pt ) (TYPE_3__*) ;
struct TYPE_17__ {int * values; int * lengths; TYPE_7__ value; } ;
typedef TYPE_6__ ngx_stream_complex_value_t ;
typedef TYPE_7__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int * FUNC_1 (int ,size_t) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*) ;

ngx_int_t
FUNC_3(ngx_stream_session_t *VAR_2,
    ngx_stream_complex_value_t *VAR_3, ngx_str_t *VAR_4)
{
    size_t VAR_5;
    ngx_stream_script_code_pt VAR_6;
    ngx_stream_script_engine_t VAR_7;
    ngx_stream_script_len_code_pt VAR_8;

    if (VAR_3->lengths == ((void*)0)) {
        *VAR_4 = VAR_3->value;
        return VAR_1;
    }

    FUNC_2(VAR_2, VAR_3);

    FUNC_0(&VAR_7, sizeof(ngx_stream_script_engine_t));

    VAR_7.ip = VAR_3->lengths;
    VAR_7.session = VAR_2;
    VAR_7.flushed = 1;

    VAR_5 = 0;

    while (*(uintptr_t *) VAR_7.ip) {
        VAR_8 = *(ngx_stream_script_len_code_pt *) VAR_7.ip;
        VAR_5 += VAR_8(&VAR_7);
    }

    VAR_4->len = VAR_5;
    VAR_4->data = FUNC_1(VAR_2->connection->pool, VAR_5);
    if (VAR_4->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_7.ip = VAR_3->values;
    VAR_7.pos = VAR_4->data;
    VAR_7.buf = *VAR_4;

    while (*(uintptr_t *) VAR_7.ip) {
        VAR_6 = *(ngx_stream_script_code_pt *) VAR_7.ip;
        VAR_6((ngx_stream_script_engine_t *) &VAR_7);
    }

    *VAR_4 = VAR_7.buf;

    return VAR_1;
}
