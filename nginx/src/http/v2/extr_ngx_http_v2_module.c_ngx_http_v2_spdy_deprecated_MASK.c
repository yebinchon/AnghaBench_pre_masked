
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_conf_t ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ ngx_command_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*,int *) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    FUNC_0(VAR_1, VAR_2, 0,
                       "invalid directive \"%V\": ngx_http_spdy_module "
                       "was superseded by ngx_http_v2_module", &VAR_3->name);

    return VAR_0;
}
