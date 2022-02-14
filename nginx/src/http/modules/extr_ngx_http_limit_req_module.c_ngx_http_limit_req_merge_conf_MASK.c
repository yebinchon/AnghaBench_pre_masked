
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * elts; } ;
struct TYPE_4__ {scalar_t__ limit_log_level; scalar_t__ status_code; int dry_run; scalar_t__ delay_log_level; TYPE_1__ limits; } ;
typedef TYPE_2__ ngx_http_limit_req_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_limit_req_conf_t *VAR_7 = VAR_5;
    ngx_http_limit_req_conf_t *VAR_8 = VAR_6;

    if (VAR_8->limits.elts == ((void*)0)) {
        VAR_8->limits = VAR_7->limits;
    }

    FUNC_0(VAR_8->limit_log_level, VAR_7->limit_log_level,
                              VAR_2);

    VAR_8->delay_log_level = (VAR_8->limit_log_level == VAR_3) ?
                                VAR_3 : VAR_8->limit_log_level + 1;

    FUNC_0(VAR_8->status_code, VAR_7->status_code,
                              VAR_1);

    FUNC_1(VAR_8->dry_run, VAR_7->dry_run, 0);

    return VAR_0;
}
