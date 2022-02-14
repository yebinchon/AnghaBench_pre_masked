
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_10__ {char* (* init_conf ) (TYPE_4__*,void*) ;void* (* create_conf ) (TYPE_4__*) ;} ;
typedef TYPE_2__ ngx_event_module_t ;
struct TYPE_11__ {void*** ctx; TYPE_4__* cycle; int cmd_type; scalar_t__ module_type; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_12__ {TYPE_1__** modules; } ;
struct TYPE_9__ {scalar_t__ type; size_t ctx_index; TYPE_2__* ctx; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 int VAR_4 ;
 void* FUNC_2 (int ,int) ;
 void* FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (TYPE_4__*,void*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    char *VAR_8;
    void ***VAR_9;
    ngx_uint_t VAR_10;
    ngx_conf_t VAR_11;
    ngx_event_module_t *VAR_12;

    if (*(void **) VAR_7) {
        return "is duplicate";
    }



    VAR_4 = FUNC_1(VAR_5->cycle, VAR_3);

    VAR_9 = FUNC_2(VAR_5->pool, sizeof(void *));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_9 = FUNC_2(VAR_5->pool, VAR_4 * sizeof(void *));
    if (*VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    *(void **) VAR_7 = VAR_9;

    for (VAR_10 = 0; VAR_5->cycle->modules[VAR_10]; VAR_10++) {
        if (VAR_5->cycle->modules[VAR_10]->type != VAR_3) {
            continue;
        }

        VAR_12 = VAR_5->cycle->modules[VAR_10]->ctx;

        if (VAR_12->create_conf) {
            (*VAR_9)[VAR_5->cycle->modules[VAR_10]->ctx_index] =
                                                     VAR_12->create_conf(VAR_5->cycle);
            if ((*VAR_9)[VAR_5->cycle->modules[VAR_10]->ctx_index] == ((void*)0)) {
                return VAR_0;
            }
        }
    }

    VAR_11 = *VAR_5;
    VAR_5->ctx = VAR_9;
    VAR_5->module_type = VAR_3;
    VAR_5->cmd_type = VAR_2;

    VAR_8 = FUNC_0(VAR_5, ((void*)0));

    *VAR_5 = VAR_11;

    if (VAR_8 != VAR_1) {
        return VAR_8;
    }

    for (VAR_10 = 0; VAR_5->cycle->modules[VAR_10]; VAR_10++) {
        if (VAR_5->cycle->modules[VAR_10]->type != VAR_3) {
            continue;
        }

        VAR_12 = VAR_5->cycle->modules[VAR_10]->ctx;

        if (VAR_12->init_conf) {
            VAR_8 = VAR_12->init_conf(VAR_5->cycle,
                              (*VAR_9)[VAR_5->cycle->modules[VAR_10]->ctx_index]);
            if (VAR_8 != VAR_1) {
                return VAR_8;
            }
        }
    }

    return VAR_1;
}
