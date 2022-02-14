
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {TYPE_2__ socket_dir; int push_reconnect; int auto_push; } ;
typedef TYPE_1__ ngx_rtmp_auto_push_conf_t ;
typedef int ngx_cycle_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static char *
FUNC_3(ngx_cycle_t *VAR_1, void *VAR_2)
{
    ngx_rtmp_auto_push_conf_t *VAR_3 = VAR_2;

    FUNC_1(VAR_3->auto_push, 0);
    FUNC_0(VAR_3->push_reconnect, 100);

    if (VAR_3->socket_dir.len == 0) {
        FUNC_2(&VAR_3->socket_dir, "/tmp");
    }

    return VAR_0;
}
