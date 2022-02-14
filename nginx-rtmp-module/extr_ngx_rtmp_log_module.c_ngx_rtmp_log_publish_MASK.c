
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ relay; scalar_t__ auto_pushed; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_11__ {int args; int name; } ;
typedef TYPE_2__ ngx_rtmp_publish_t ;
struct TYPE_12__ {int publish; } ;
typedef TYPE_3__ ngx_rtmp_log_ctx_t ;
typedef int ngx_int_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_0, ngx_rtmp_publish_t *VAR_1)
{
    ngx_rtmp_log_ctx_t *VAR_2;

    if (VAR_0->auto_pushed || VAR_0->relay) {
        goto next;
    }

    VAR_2 = FUNC_1(VAR_0, VAR_1->name, VAR_1->args);
    if (VAR_2 == ((void*)0)) {
        goto next;
    }

    VAR_2->publish = 1;

next:
    return FUNC_0(VAR_0, VAR_1);
}
