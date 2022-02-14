
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_12__ {int offset; } ;
typedef TYPE_4__ ngx_command_t ;
struct TYPE_9__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* FUNC_0 (TYPE_3__*,TYPE_4__*,void*) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, ngx_command_t *VAR_2, void *VAR_3)
{
    char *VAR_4 = VAR_3;
    ngx_str_t *VAR_5;
    ngx_msec_t *VAR_6;

    VAR_6 = (ngx_msec_t *) (VAR_4 + VAR_2->offset);

    VAR_5 = VAR_1->args->elts;

    if (VAR_5[1].len == sizeof("off") - 1 &&
        FUNC_1(VAR_5[1].data, (u_char *) "off", VAR_5[1].len) == 0)
    {
        *VAR_6 = 0;
        return VAR_0;
    }

    return FUNC_0(VAR_1, VAR_2, VAR_3);
}
