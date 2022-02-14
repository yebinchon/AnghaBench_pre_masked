
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_10__ {TYPE_1__* args; } ;
typedef TYPE_2__ ngx_conf_t ;
struct TYPE_11__ {char* (* post_handler ) (TYPE_2__*,TYPE_3__*,size_t*) ;} ;
typedef TYPE_3__ ngx_conf_post_t ;
struct TYPE_12__ {int offset; TYPE_3__* post; } ;
typedef TYPE_4__ ngx_command_t ;
struct TYPE_9__ {int * elts; } ;


 char* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_2__*,TYPE_3__*,size_t*) ;

char *
FUNC_2(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    char *VAR_6 = VAR_5;

    size_t *VAR_7;
    ngx_str_t *VAR_8;
    ngx_conf_post_t *VAR_9;


    VAR_7 = (size_t *) (VAR_6 + VAR_4->offset);
    if (*VAR_7 != VAR_1) {
        return "is duplicate";
    }

    VAR_8 = VAR_3->args->elts;

    *VAR_7 = FUNC_0(&VAR_8[1]);
    if (*VAR_7 == (size_t) VAR_2) {
        return "invalid value";
    }

    if (VAR_4->post) {
        VAR_9 = VAR_4->post;
        return VAR_9->post_handler(VAR_3, VAR_9, VAR_7);
    }

    return VAR_0;
}
