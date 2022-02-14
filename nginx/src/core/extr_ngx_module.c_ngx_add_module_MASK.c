
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_11__ {scalar_t__ version; char* signature; char* name; size_t index; scalar_t__ type; TYPE_2__* ctx; } ;
typedef TYPE_1__ ngx_module_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {void* (* create_conf ) (TYPE_4__*) ;} ;
typedef TYPE_2__ ngx_core_module_t ;
struct TYPE_13__ {TYPE_4__* cycle; int log; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_14__ {size_t modules_n; void** conf_ctx; TYPE_1__** modules; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,TYPE_3__*,int ,char*,...) ;
 int FUNC_1 (int ,int ,int ,char*,char*,char*) ;
 int FUNC_2 (int ,int ,int ,char*,char*,char*,size_t) ;
 size_t VAR_8 ;
 int FUNC_3 (TYPE_1__**,TYPE_1__**,size_t) ;
 size_t FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 void* FUNC_6 (TYPE_4__*) ;

ngx_int_t
FUNC_7(ngx_conf_t *VAR_9, ngx_str_t *VAR_10, ngx_module_t *VAR_11,
    char **VAR_12)
{
    void *VAR_13;
    ngx_uint_t VAR_14, VAR_15, VAR_16;
    ngx_core_module_t *VAR_17;

    if (VAR_9->cycle->modules_n >= VAR_8) {
        FUNC_0(VAR_3, VAR_9, 0,
                           "too many modules loaded");
        return VAR_1;
    }

    if (VAR_11->version != VAR_7) {
        FUNC_0(VAR_3, VAR_9, 0,
                           "module \"%V\" version %ui instead of %ui",
                           VAR_10, VAR_11->version, (ngx_uint_t) VAR_7);
        return VAR_1;
    }

    if (FUNC_5(VAR_11->signature, VAR_4) != 0) {
        FUNC_0(VAR_3, VAR_9, 0,
                           "module \"%V\" is not binary compatible",
                           VAR_10);
        return VAR_1;
    }

    for (VAR_15 = 0; VAR_9->cycle->modules[VAR_15]; VAR_15++) {
        if (FUNC_5(VAR_9->cycle->modules[VAR_15]->name, VAR_11->name) == 0) {
            FUNC_0(VAR_3, VAR_9, 0,
                               "module \"%s\" is already loaded",
                               VAR_11->name);
            return VAR_1;
        }
    }





    if (VAR_11->index == VAR_5) {
        VAR_11->index = FUNC_4(VAR_9->cycle);

        if (VAR_11->index >= VAR_8) {
            FUNC_0(VAR_3, VAR_9, 0,
                               "too many modules loaded");
            return VAR_1;
        }
    }





    VAR_16 = VAR_9->cycle->modules_n;

    if (VAR_12) {
        for (VAR_14 = 0; VAR_12[VAR_14]; VAR_14++) {
            if (FUNC_5(VAR_12[VAR_14], VAR_11->name) == 0) {
                VAR_14++;
                break;
            }
        }

        for ( ; VAR_12[VAR_14]; VAR_14++) {







            for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
                if (FUNC_5(VAR_9->cycle->modules[VAR_15]->name, VAR_12[VAR_14]) == 0) {

                    FUNC_2(VAR_2, VAR_9->log, 0,
                                   "module: %s before %s:%i",
                                   VAR_11->name, VAR_12[VAR_14], VAR_15);

                    VAR_16 = VAR_15;
                    break;
                }
            }
        }
    }



    if (VAR_16 != VAR_9->cycle->modules_n) {
        FUNC_3(&VAR_9->cycle->modules[VAR_16 + 1],
                    &VAR_9->cycle->modules[VAR_16],
                    (VAR_9->cycle->modules_n - VAR_16) * sizeof(ngx_module_t *));
    }

    VAR_9->cycle->modules[VAR_16] = VAR_11;
    VAR_9->cycle->modules_n++;

    if (VAR_11->type == VAR_0) {
        VAR_17 = VAR_11->ctx;

        if (VAR_17->create_conf) {
            VAR_13 = VAR_17->create_conf(VAR_9->cycle);
            if (VAR_13 == ((void*)0)) {
                return VAR_1;
            }

            VAR_9->cycle->conf_ctx[VAR_11->index] = VAR_13;
        }
    }

    return VAR_6;
}
