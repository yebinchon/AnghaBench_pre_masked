
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_18__ {TYPE_3__* connection; TYPE_2__* variables; } ;
typedef TYPE_4__ ngx_stream_session_t ;
typedef scalar_t__ (* ngx_stream_script_len_code_pt ) (TYPE_5__*) ;
struct TYPE_19__ {int flushed; int * pos; void* ip; TYPE_4__* session; } ;
typedef TYPE_5__ ngx_stream_script_engine_t ;
typedef int (* ngx_stream_script_code_pt ) (TYPE_5__*) ;
struct TYPE_15__ {size_t nelts; } ;
struct TYPE_20__ {TYPE_1__ variables; } ;
typedef TYPE_8__ ngx_stream_core_main_conf_t ;
struct TYPE_21__ {size_t len; int * data; } ;
typedef TYPE_9__ ngx_str_t ;
struct TYPE_17__ {int pool; } ;
struct TYPE_16__ {scalar_t__ not_found; scalar_t__ valid; scalar_t__ no_cacheable; } ;


 int FUNC_0 (TYPE_5__*,int) ;
 int * FUNC_1 (int ,size_t) ;
 int VAR_0 ;
 TYPE_8__* FUNC_2 (TYPE_4__*,int ) ;

u_char *
FUNC_3(ngx_stream_session_t *VAR_1, ngx_str_t *VAR_2,
    void *VAR_3, size_t VAR_4, void *VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_stream_script_code_pt VAR_7;
    ngx_stream_script_engine_t VAR_8;
    ngx_stream_core_main_conf_t *VAR_9;
    ngx_stream_script_len_code_pt VAR_10;

    VAR_9 = FUNC_2(VAR_1, VAR_0);

    for (VAR_6 = 0; VAR_6 < VAR_9->variables.nelts; VAR_6++) {
        if (VAR_1->variables[VAR_6].no_cacheable) {
            VAR_1->variables[VAR_6].valid = 0;
            VAR_1->variables[VAR_6].not_found = 0;
        }
    }

    FUNC_0(&VAR_8, sizeof(ngx_stream_script_engine_t));

    VAR_8.ip = VAR_3;
    VAR_8.session = VAR_1;
    VAR_8.flushed = 1;

    while (*(uintptr_t *) VAR_8.ip) {
        VAR_10 = *(ngx_stream_script_len_code_pt *) VAR_8.ip;
        VAR_4 += VAR_10(&VAR_8);
    }


    VAR_2->len = VAR_4;
    VAR_2->data = FUNC_1(VAR_1->connection->pool, VAR_4);
    if (VAR_2->data == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8.ip = VAR_5;
    VAR_8.pos = VAR_2->data;

    while (*(uintptr_t *) VAR_8.ip) {
        VAR_7 = *(ngx_stream_script_code_pt *) VAR_8.ip;
        VAR_7((ngx_stream_script_engine_t *) &VAR_8);
    }

    return VAR_8.pos;
}
