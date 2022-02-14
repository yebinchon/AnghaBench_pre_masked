
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_14__ {int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_flag_t ;
struct TYPE_15__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_16__ {char* (* post_handler ) (TYPE_4__*,TYPE_5__*,int*) ;} ;
typedef TYPE_5__ ngx_conf_post_t ;
struct TYPE_13__ {int data; } ;
struct TYPE_17__ {int offset; TYPE_5__* post; TYPE_2__ name; } ;
typedef TYPE_6__ ngx_command_t ;
struct TYPE_12__ {TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 char* FUNC_2 (TYPE_4__*,TYPE_5__*,int*) ;

char *
FUNC_3(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    char *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;
    ngx_flag_t *VAR_9;
    ngx_conf_post_t *VAR_10;

    VAR_9 = (ngx_flag_t *) (VAR_7 + VAR_5->offset);

    if (*VAR_9 != VAR_2) {
        return "is duplicate";
    }

    VAR_8 = VAR_4->args->elts;

    if (FUNC_1(VAR_8[1].data, (u_char *) "on") == 0) {
        *VAR_9 = 1;

    } else if (FUNC_1(VAR_8[1].data, (u_char *) "off") == 0) {
        *VAR_9 = 0;

    } else {
        FUNC_0(VAR_3, VAR_4, 0,
                     "invalid value \"%s\" in \"%s\" directive, "
                     "it must be \"on\" or \"off\"",
                     VAR_8[1].data, VAR_5->name.data);
        return VAR_0;
    }

    if (VAR_5->post) {
        VAR_10 = VAR_5->post;
        return VAR_10->post_handler(VAR_4, VAR_10, VAR_9);
    }

    return VAR_1;
}
