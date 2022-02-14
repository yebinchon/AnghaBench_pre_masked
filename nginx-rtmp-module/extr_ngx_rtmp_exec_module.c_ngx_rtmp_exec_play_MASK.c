
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_9__ {int name; int args; } ;
typedef TYPE_1__ ngx_rtmp_play_t ;
struct TYPE_10__ {int counter; int pull_exec; } ;
typedef TYPE_2__ ngx_rtmp_exec_pull_ctx_t ;
struct TYPE_11__ {TYPE_2__* pull; } ;
typedef TYPE_3__ ngx_rtmp_exec_ctx_t ;
struct TYPE_12__ {int * conf; int active; } ;
typedef TYPE_4__ ngx_rtmp_exec_app_conf_t ;
typedef int ngx_int_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,char*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,char*) ;
 TYPE_4__* FUNC_5 (int *,int ) ;
 TYPE_3__* FUNC_6 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_4, ngx_rtmp_play_t *VAR_5)
{
    ngx_rtmp_exec_ctx_t *VAR_6;
    ngx_rtmp_exec_pull_ctx_t *VAR_7;
    ngx_rtmp_exec_app_conf_t *VAR_8;

    VAR_8 = FUNC_5(VAR_4, VAR_3);

    if (VAR_8 == ((void*)0) || !VAR_8->active) {
        goto next;
    }

    if (FUNC_1(VAR_4, VAR_5->name, VAR_5->args, VAR_2)
        != VAR_0)
    {
        goto next;
    }

    FUNC_4(VAR_4, &VAR_8->conf[VAR_1], "play");

    if (FUNC_2(VAR_4, VAR_5->name) != VAR_0) {
        goto next;
    }

    VAR_6 = FUNC_6(VAR_4, VAR_3);
    VAR_7 = VAR_6->pull;

    if (VAR_7 && VAR_7->counter == 1) {
        FUNC_3(VAR_4, &VAR_7->pull_exec, "pull");
    }

next:
    return FUNC_0(VAR_4, VAR_5);
}
