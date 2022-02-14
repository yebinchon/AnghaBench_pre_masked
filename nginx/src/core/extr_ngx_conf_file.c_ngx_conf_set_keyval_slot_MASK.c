
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* ngx_str_t ;
struct TYPE_13__ {void* value; void* key; } ;
typedef TYPE_2__ ngx_keyval_t ;
struct TYPE_14__ {TYPE_1__* args; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_15__ {char* (* post_handler ) (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;} ;
typedef TYPE_4__ ngx_conf_post_t ;
struct TYPE_16__ {int offset; TYPE_4__* post; } ;
typedef TYPE_5__ ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_12__ {void** elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 char* FUNC_2 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;

char *
FUNC_3(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    char *VAR_5 = VAR_4;

    ngx_str_t *VAR_6;
    ngx_array_t **VAR_7;
    ngx_keyval_t *VAR_8;
    ngx_conf_post_t *VAR_9;

    VAR_7 = (ngx_array_t **) (VAR_5 + VAR_3->offset);

    if (*VAR_7 == ((void*)0)) {
        *VAR_7 = FUNC_0(VAR_2->pool, 4, sizeof(ngx_keyval_t));
        if (*VAR_7 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_8 = FUNC_1(*VAR_7);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = VAR_2->args->elts;

    VAR_8->key = VAR_6[1];
    VAR_8->value = VAR_6[2];

    if (VAR_3->post) {
        VAR_9 = VAR_3->post;
        return VAR_9->post_handler(VAR_2, VAR_9, VAR_8);
    }

    return VAR_1;
}
