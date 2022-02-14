
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {int log; int ctx; } ;
typedef TYPE_1__ ngx_ssl_t ;
typedef int ngx_int_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_3(ngx_conf_t *VAR_3, ngx_ssl_t *VAR_4, ngx_uint_t VAR_5)
{
    if (!VAR_5) {
        return VAR_1;
    }
    FUNC_2(VAR_0, VAR_4->log, 0,
                  "\"ssl_early_data\" is not supported on this platform, "
                  "ignored");


    return VAR_1;
}
