
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {TYPE_2__ user_file; int * realm; } ;
typedef TYPE_3__ ngx_http_auth_basic_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_http_auth_basic_loc_conf_t *VAR_4 = VAR_2;
    ngx_http_auth_basic_loc_conf_t *VAR_5 = VAR_3;

    if (VAR_5->realm == ((void*)0)) {
        VAR_5->realm = VAR_4->realm;
    }

    if (VAR_5->user_file.value.data == ((void*)0)) {
        VAR_5->user_file = VAR_4->user_file;
    }

    return VAR_0;
}
