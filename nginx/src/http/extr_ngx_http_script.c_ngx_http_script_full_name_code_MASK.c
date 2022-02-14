
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


struct TYPE_14__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_15__ {scalar_t__ conf_prefix; } ;
typedef TYPE_4__ ngx_http_script_full_name_code_t ;
struct TYPE_16__ {scalar_t__ ip; TYPE_2__* request; TYPE_3__ buf; int status; scalar_t__ pos; } ;
typedef TYPE_5__ ngx_http_script_engine_t ;
struct TYPE_13__ {TYPE_1__* connection; int pool; } ;
struct TYPE_12__ {int log; } ;
struct TYPE_11__ {int prefix; int conf_prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_10__* VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ngx_http_script_engine_t *VAR_5)
{
    ngx_http_script_full_name_code_t *VAR_6;

    ngx_str_t VAR_7, *VAR_8;

    VAR_6 = (ngx_http_script_full_name_code_t *) VAR_5->ip;

    VAR_7.data = VAR_5->buf.data;
    VAR_7.len = VAR_5->pos - VAR_5->buf.data;

    VAR_8 = VAR_6->conf_prefix ? (ngx_str_t *) &VAR_3->conf_prefix:
                                 (ngx_str_t *) &VAR_3->prefix;

    if (FUNC_0(VAR_5->request->pool, VAR_8, &VAR_7) != VAR_2) {
        VAR_5->ip = VAR_4;
        VAR_5->status = VAR_0;
        return;
    }

    VAR_5->buf = VAR_7;

    FUNC_1(VAR_1, VAR_5->request->connection->log, 0,
                   "http script fullname: \"%V\"", &VAR_7);

    VAR_5->ip += sizeof(ngx_http_script_full_name_code_t);
}
