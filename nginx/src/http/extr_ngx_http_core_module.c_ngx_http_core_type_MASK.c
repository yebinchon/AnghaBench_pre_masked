
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
struct TYPE_14__ {char* data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_15__ {TYPE_11__* types; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_16__ {size_t key_hash; TYPE_2__* value; TYPE_2__ key; } ;
typedef TYPE_4__ ngx_hash_key_t ;
struct TYPE_17__ {TYPE_1__* args; int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {int nelts; TYPE_2__* elts; } ;
struct TYPE_12__ {size_t nelts; TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_11__*) ;
 char* FUNC_1 (TYPE_5__*,int *,void*) ;
 int FUNC_2 (int ,TYPE_5__*,int ,char*,...) ;
 size_t FUNC_3 (char*,char*,int ) ;
 TYPE_2__* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_core_loc_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8, *VAR_9, *VAR_10;
    ngx_uint_t VAR_11, VAR_12, VAR_13;
    ngx_hash_key_t *VAR_14;

    VAR_8 = VAR_4->args->elts;

    if (FUNC_5(VAR_8[0].data, "include") == 0) {
        if (VAR_4->args->nelts != 2) {
            FUNC_2(VAR_2, VAR_4, 0,
                               "invalid number of arguments"
                               " in \"include\" directive");
            return VAR_0;
        }

        return FUNC_1(VAR_4, VAR_5, VAR_6);
    }

    VAR_9 = FUNC_4(VAR_4->pool, sizeof(ngx_str_t));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_9 = VAR_8[0];

    for (VAR_11 = 1; VAR_11 < VAR_4->args->nelts; VAR_11++) {

        VAR_13 = FUNC_3(VAR_8[VAR_11].data, VAR_8[VAR_11].data, VAR_8[VAR_11].len);

        VAR_14 = VAR_7->types->elts;
        for (VAR_12 = 0; VAR_12 < VAR_7->types->nelts; VAR_12++) {
            if (FUNC_5(VAR_8[VAR_11].data, VAR_14[VAR_12].key.data) == 0) {
                VAR_10 = VAR_14[VAR_12].value;
                VAR_14[VAR_12].value = VAR_9;

                FUNC_2(VAR_3, VAR_4, 0,
                                   "duplicate extension \"%V\", "
                                   "content type: \"%V\", "
                                   "previous content type: \"%V\"",
                                   &VAR_8[VAR_11], VAR_9, VAR_10);
                goto next;
            }
        }


        VAR_14 = FUNC_0(VAR_7->types);
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->key = VAR_8[VAR_11];
        VAR_14->key_hash = VAR_13;
        VAR_14->value = VAR_9;

    next:
        continue;
    }

    return VAR_1;
}
