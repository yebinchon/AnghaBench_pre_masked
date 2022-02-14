
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ conf_prefix; } ;
typedef TYPE_3__ ngx_stream_script_full_name_code_t ;
struct TYPE_16__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_15__ {scalar_t__ ip; TYPE_2__* session; TYPE_5__ buf; scalar_t__ pos; } ;
typedef TYPE_4__ ngx_stream_script_engine_t ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_13__ {TYPE_1__* connection; } ;
struct TYPE_12__ {int log; int pool; } ;
struct TYPE_11__ {int prefix; int conf_prefix; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_10__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_5__*,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_5__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(ngx_stream_script_engine_t *VAR_4)
{
    ngx_stream_script_full_name_code_t *VAR_5;

    ngx_str_t VAR_6, *VAR_7;

    VAR_5 = (ngx_stream_script_full_name_code_t *) VAR_4->ip;

    VAR_6.data = VAR_4->buf.data;
    VAR_6.len = VAR_4->pos - VAR_4->buf.data;

    VAR_7 = VAR_5->conf_prefix ? (ngx_str_t *) &VAR_2->conf_prefix:
                                 (ngx_str_t *) &VAR_2->prefix;

    if (FUNC_0(VAR_4->session->connection->pool, VAR_7, &VAR_6)
        != VAR_1)
    {
        VAR_4->ip = VAR_3;
        return;
    }

    VAR_4->buf = VAR_6;

    FUNC_1(VAR_0, VAR_4->session->connection->log, 0,
                   "stream script fullname: \"%V\"", &VAR_6);

    VAR_4->ip += sizeof(ngx_stream_script_full_name_code_t);
}
