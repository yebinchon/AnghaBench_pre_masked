
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * perl; } ;
typedef TYPE_1__ ngx_http_perl_main_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_2, void *VAR_3)
{
    ngx_http_perl_main_conf_t *VAR_4 = VAR_3;

    if (VAR_4->perl == ((void*)0)) {
        if (FUNC_0(VAR_2, VAR_4) != VAR_1) {
            return VAR_0;
        }
    }

    return VAR_1;
}
