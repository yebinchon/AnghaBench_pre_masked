
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_13__ {int args; int name; } ;
typedef TYPE_3__ ngx_rtmp_log_ctx_t ;
struct TYPE_11__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int ) ;

__attribute__((used)) static ngx_rtmp_log_ctx_t *
FUNC_4(ngx_rtmp_session_t *VAR_3, u_char *VAR_4, u_char *VAR_5)
{
    ngx_rtmp_log_ctx_t *VAR_6;

    VAR_6 = FUNC_2(VAR_3, VAR_2);
    if (VAR_6 == ((void*)0)) {
        VAR_6 = FUNC_1(VAR_3->connection->pool, sizeof(ngx_rtmp_log_ctx_t));
        if (VAR_6 == ((void*)0)) {
            return ((void*)0);
        }

        FUNC_3(VAR_3, VAR_6, VAR_2);
    }

    FUNC_0(VAR_6->name, VAR_4, VAR_1);
    FUNC_0(VAR_6->args, VAR_5, VAR_0);

    return VAR_6;
}
