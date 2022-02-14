
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ (* ngx_http_script_len_code_pt ) (TYPE_6__*) ;
struct TYPE_14__ {size_t len; int * data; } ;
struct TYPE_16__ {TYPE_5__* sp; TYPE_4__ buf; int * pos; int status; scalar_t__ ip; TYPE_3__* request; int quote; int line; } ;
typedef TYPE_6__ ngx_http_script_engine_t ;
struct TYPE_17__ {TYPE_2__* lengths; } ;
typedef TYPE_8__ ngx_http_script_complex_value_code_t ;
struct TYPE_15__ {size_t len; int * data; } ;
struct TYPE_13__ {int pool; TYPE_1__* connection; } ;
struct TYPE_12__ {scalar_t__ elts; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int * FUNC_2 (int ,size_t) ;

void
FUNC_3(ngx_http_script_engine_t *VAR_3)
{
    size_t VAR_4;
    ngx_http_script_engine_t VAR_5;
    ngx_http_script_len_code_pt VAR_6;
    ngx_http_script_complex_value_code_t *VAR_7;

    VAR_7 = (ngx_http_script_complex_value_code_t *) VAR_3->ip;

    VAR_3->ip += sizeof(ngx_http_script_complex_value_code_t);

    FUNC_0(VAR_1, VAR_3->request->connection->log, 0,
                   "http script complex value");

    FUNC_1(&VAR_5, sizeof(ngx_http_script_engine_t));

    VAR_5.ip = VAR_7->lengths->elts;
    VAR_5.line = VAR_3->line;
    VAR_5.request = VAR_3->request;
    VAR_5.quote = VAR_3->quote;

    for (VAR_4 = 0; *(uintptr_t *) VAR_5.ip; VAR_4 += VAR_6(&VAR_5)) {
        VAR_6 = *(ngx_http_script_len_code_pt *) VAR_5.ip;
    }

    VAR_3->buf.len = VAR_4;
    VAR_3->buf.data = FUNC_2(VAR_3->request->pool, VAR_4);
    if (VAR_3->buf.data == ((void*)0)) {
        VAR_3->ip = VAR_2;
        VAR_3->status = VAR_0;
        return;
    }

    VAR_3->pos = VAR_3->buf.data;

    VAR_3->sp->len = VAR_3->buf.len;
    VAR_3->sp->data = VAR_3->buf.data;
    VAR_3->sp++;
}
