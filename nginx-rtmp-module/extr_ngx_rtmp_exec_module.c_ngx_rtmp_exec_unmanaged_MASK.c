
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_12__ {int log; TYPE_2__* eval_ctx; int eval; int * conf; } ;
typedef TYPE_3__ ngx_rtmp_exec_t ;
typedef int ngx_rtmp_exec_conf_t ;
struct TYPE_13__ {scalar_t__ nelts; int * elts; } ;
typedef TYPE_4__ ngx_array_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,char const*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(ngx_rtmp_session_t *VAR_3, ngx_array_t *VAR_4, const char *VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_rtmp_exec_t VAR_7;
    ngx_rtmp_exec_conf_t *VAR_8;

    if (VAR_4->nelts == 0) {
        return;
    }

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
                   "exec: %s %uz unmanaged command(s)", VAR_5, VAR_4->nelts);

    VAR_8 = VAR_4->elts;
    for (VAR_6 = 0; VAR_6 < VAR_4->nelts; VAR_6++, VAR_8++) {
        if (FUNC_2(VAR_3, VAR_8) != VAR_1) {
            continue;
        }

        FUNC_1(&VAR_7, sizeof(ngx_rtmp_exec_t));

        VAR_7.conf = VAR_8;
        VAR_7.eval = VAR_2;
        VAR_7.eval_ctx = VAR_3;
        VAR_7.log = VAR_3->connection->log;

        FUNC_3(&VAR_7);
    }
}
