
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ init_upstream; } ;
struct TYPE_13__ {int flags; TYPE_1__ peer; } ;
typedef TYPE_3__ ngx_stream_upstream_srv_conf_t ;
struct TYPE_14__ {int two; } ;
typedef TYPE_4__ ngx_stream_upstream_random_srv_conf_t ;
struct TYPE_15__ {int data; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_16__ {TYPE_2__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_12__ {int nelts; TYPE_5__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,TYPE_6__*,int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_6__*,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_12, ngx_command_t *VAR_13, void *VAR_14)
{
    ngx_stream_upstream_random_srv_conf_t *VAR_15 = VAR_14;

    ngx_str_t *VAR_16;
    ngx_stream_upstream_srv_conf_t *VAR_17;

    VAR_17 = FUNC_2(VAR_12, VAR_11);

    if (VAR_17->peer.init_upstream) {
        FUNC_0(VAR_3, VAR_12, 0,
                           "load balancing method redefined");
    }

    VAR_17->peer.init_upstream = VAR_10;

    VAR_17->flags = VAR_4
                  |VAR_9
                  |VAR_7
                  |VAR_8
                  |VAR_6
                  |VAR_5;

    if (VAR_12->args->nelts == 1) {
        return VAR_1;
    }

    VAR_16 = VAR_12->args->elts;

    if (FUNC_1(VAR_16[1].data, "two") == 0) {
        VAR_15->two = 1;

    } else {
        FUNC_0(VAR_2, VAR_12, 0,
                           "invalid parameter \"%V\"", &VAR_16[1]);
        return VAR_0;
    }

    if (VAR_12->args->nelts == 2) {
        return VAR_1;
    }

    if (FUNC_1(VAR_16[2].data, "least_conn") != 0) {
        FUNC_0(VAR_2, VAR_12, 0,
                           "invalid parameter \"%V\"", &VAR_16[2]);
        return VAR_0;
    }

    return VAR_1;
}
