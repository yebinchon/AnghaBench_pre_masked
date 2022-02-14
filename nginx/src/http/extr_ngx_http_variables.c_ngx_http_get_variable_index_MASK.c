
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_15__ {scalar_t__ len; int * data; } ;
struct TYPE_17__ {size_t index; scalar_t__ flags; scalar_t__ data; int * get_handler; int * set_handler; TYPE_1__ name; } ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_14__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_18__ {TYPE_12__ variables; } ;
typedef TYPE_4__ ngx_http_core_main_conf_t ;
struct TYPE_19__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_12__*,int ,int,int) ;
 TYPE_3__* FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (int ,TYPE_5__*,int ,char*) ;
 TYPE_4__* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_3 ;
 int * FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *,scalar_t__) ;

ngx_int_t
FUNC_7(ngx_conf_t *VAR_4, ngx_str_t *VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_http_variable_t *VAR_7;
    ngx_http_core_main_conf_t *VAR_8;

    if (VAR_5->len == 0) {
        FUNC_2(VAR_1, VAR_4, 0,
                           "invalid variable name \"$\"");
        return VAR_0;
    }

    VAR_8 = FUNC_3(VAR_4, VAR_3);

    VAR_7 = VAR_8->variables.elts;

    if (VAR_7 == ((void*)0)) {
        if (FUNC_0(&VAR_8->variables, VAR_4->pool, 4,
                           sizeof(ngx_http_variable_t))
            != VAR_2)
        {
            return VAR_0;
        }

    } else {
        for (VAR_6 = 0; VAR_6 < VAR_8->variables.nelts; VAR_6++) {
            if (VAR_5->len != VAR_7[VAR_6].name.len
                || FUNC_6(VAR_5->data, VAR_7[VAR_6].name.data, VAR_5->len) != 0)
            {
                continue;
            }

            return VAR_6;
        }
    }

    VAR_7 = FUNC_1(&VAR_8->variables);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->name.len = VAR_5->len;
    VAR_7->name.data = FUNC_4(VAR_4->pool, VAR_5->len);
    if (VAR_7->name.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_5(VAR_7->name.data, VAR_5->data, VAR_5->len);

    VAR_7->set_handler = ((void*)0);
    VAR_7->get_handler = ((void*)0);
    VAR_7->data = 0;
    VAR_7->flags = 0;
    VAR_7->index = VAR_8->variables.nelts - 1;

    return VAR_7->index;
}
