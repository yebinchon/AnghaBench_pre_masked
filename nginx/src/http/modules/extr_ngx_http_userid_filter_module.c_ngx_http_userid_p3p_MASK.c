
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_str_t *VAR_4 = VAR_3;

    if (FUNC_1(VAR_4->data, "none") == 0) {
        FUNC_0(VAR_4, "");
    }

    return VAR_0;
}
