
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ auto_pushed; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_17__ {int args; int name; } ;
typedef TYPE_2__ ngx_rtmp_publish_t ;
struct TYPE_18__ {int push_exec; } ;
typedef TYPE_3__ ngx_rtmp_exec_ctx_t ;
struct TYPE_19__ {int * conf; int active; } ;
typedef TYPE_4__ ngx_rtmp_exec_app_conf_t ;
typedef int ngx_int_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int *,char*) ;
 TYPE_4__* FUNC_4 (TYPE_1__*,int ) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_4, ngx_rtmp_publish_t *VAR_5)
{
    ngx_rtmp_exec_ctx_t *VAR_6;
    ngx_rtmp_exec_app_conf_t *VAR_7;

    VAR_7 = FUNC_4(VAR_4, VAR_3);

    if (VAR_7 == ((void*)0) || !VAR_7->active) {
        goto next;
    }

    if (VAR_4->auto_pushed) {
        goto next;
    }

    if (FUNC_1(VAR_4, VAR_5->name, VAR_5->args, VAR_2)
        != VAR_0)
    {
        goto next;
    }

    FUNC_3(VAR_4, &VAR_7->conf[VAR_1], "publish");

    VAR_6 = FUNC_5(VAR_4, VAR_3);

    FUNC_2(VAR_4, &VAR_6->push_exec, "push");

next:
    return FUNC_0(VAR_4, VAR_5);
}
