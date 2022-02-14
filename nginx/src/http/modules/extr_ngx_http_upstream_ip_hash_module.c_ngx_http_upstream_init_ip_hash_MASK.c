
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {int init; } ;
struct TYPE_6__ {TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_3, ngx_http_upstream_srv_conf_t *VAR_4)
{
    if (FUNC_0(VAR_3, VAR_4) != VAR_1) {
        return VAR_0;
    }

    VAR_4->peer.init = VAR_2;

    return VAR_1;
}
