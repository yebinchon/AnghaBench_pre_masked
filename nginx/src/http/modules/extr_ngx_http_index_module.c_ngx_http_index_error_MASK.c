
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {scalar_t__ log_not_found; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_6__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_4, ngx_http_core_loc_conf_t *VAR_5,
    u_char *VAR_6, ngx_err_t VAR_7)
{
    if (VAR_7 == VAR_0) {
        FUNC_0(VAR_3, VAR_4->connection->log, VAR_7,
                      "\"%s\" is forbidden", VAR_6);

        return VAR_1;
    }

    if (VAR_5->log_not_found) {
        FUNC_0(VAR_3, VAR_4->connection->log, VAR_7,
                      "\"%s\" is not found", VAR_6);
    }

    return VAR_2;
}
