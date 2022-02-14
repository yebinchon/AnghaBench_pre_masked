
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_10__ {TYPE_1__* args; int pool; } ;
typedef TYPE_2__ ngx_conf_t ;
struct TYPE_11__ {char* (* post_handler ) (TYPE_2__*,TYPE_3__*,int *) ;} ;
typedef TYPE_3__ ngx_conf_post_t ;
struct TYPE_12__ {int offset; TYPE_3__* post; } ;
typedef TYPE_4__ ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_9__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (TYPE_2__*,TYPE_3__*,int *) ;

char *
FUNC_3(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    char *VAR_6 = VAR_5;

    ngx_str_t *VAR_7, *VAR_8;
    ngx_array_t **VAR_9;
    ngx_conf_post_t *VAR_10;

    VAR_9 = (ngx_array_t **) (VAR_6 + VAR_4->offset);

    if (*VAR_9 == VAR_2) {
        *VAR_9 = FUNC_0(VAR_3->pool, 4, sizeof(ngx_str_t));
        if (*VAR_9 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_8 = FUNC_1(*VAR_9);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = VAR_3->args->elts;

    *VAR_8 = VAR_7[1];

    if (VAR_4->post) {
        VAR_10 = VAR_4->post;
        return VAR_10->post_handler(VAR_3, VAR_10, VAR_8);
    }

    return VAR_1;
}
