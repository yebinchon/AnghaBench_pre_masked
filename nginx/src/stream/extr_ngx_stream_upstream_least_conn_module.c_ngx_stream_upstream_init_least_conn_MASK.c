
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int init; } ;
struct TYPE_9__ {TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_stream_upstream_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int log; } ;
typedef TYPE_3__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_conf_t *VAR_4,
    ngx_stream_upstream_srv_conf_t *VAR_5)
{
    FUNC_0(VAR_1, VAR_4->log, 0,
                   "init least conn");

    if (FUNC_1(VAR_4, VAR_5) != VAR_2) {
        return VAR_0;
    }

    VAR_5->peer.init = VAR_3;

    return VAR_2;
}
