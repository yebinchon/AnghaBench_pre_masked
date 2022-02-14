
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_11__ {int conf; } ;
typedef TYPE_3__ ngx_rtmp_exec_t ;
struct TYPE_12__ {scalar_t__ nelts; TYPE_3__* elts; } ;
typedef TYPE_4__ ngx_array_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(ngx_rtmp_session_t *VAR_2, ngx_array_t *VAR_3, const char *VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_rtmp_exec_t *VAR_6;

    if (VAR_3->nelts == 0) {
        return;
    }

    FUNC_0(VAR_0, VAR_2->connection->log, 0,
                   "exec: %s %uz managed command(s)", VAR_4, VAR_3->nelts);

    VAR_6 = VAR_3->elts;
    for (VAR_5 = 0; VAR_5 < VAR_3->nelts; VAR_5++, VAR_6++) {
        if (FUNC_1(VAR_2, VAR_6->conf) == VAR_1) {
            FUNC_2(VAR_6);
        }
    }
}
