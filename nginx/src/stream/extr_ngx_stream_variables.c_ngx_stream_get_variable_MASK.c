
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_26__ {int not_found; } ;
typedef TYPE_4__ ngx_stream_variable_value_t ;
struct TYPE_24__ {size_t len; int data; } ;
struct TYPE_27__ {int flags; scalar_t__ (* get_handler ) (TYPE_6__*,TYPE_4__*,uintptr_t) ;uintptr_t data; TYPE_2__ name; int index; } ;
typedef TYPE_5__ ngx_stream_variable_t ;
struct TYPE_28__ {TYPE_1__* connection; } ;
typedef TYPE_6__ ngx_stream_session_t ;
struct TYPE_25__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_29__ {TYPE_3__ prefix_variables; int variables_hash; } ;
typedef TYPE_7__ ngx_stream_core_main_conf_t ;
struct TYPE_30__ {size_t len; int data; } ;
typedef TYPE_8__ ngx_str_t ;
struct TYPE_23__ {int pool; int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (int *,size_t,int ,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_8__*) ;
 TYPE_4__* FUNC_2 (int ,int) ;
 int VAR_3 ;
 TYPE_4__* FUNC_3 (TYPE_6__*,int ) ;
 TYPE_7__* FUNC_4 (TYPE_6__*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ,size_t) ;
 scalar_t__ FUNC_6 (TYPE_6__*,TYPE_4__*,uintptr_t) ;
 scalar_t__ FUNC_7 (TYPE_6__*,TYPE_4__*,uintptr_t) ;

ngx_stream_variable_value_t *
FUNC_8(ngx_stream_session_t *VAR_5, ngx_str_t *VAR_6,
    ngx_uint_t VAR_7)
{
    size_t VAR_8;
    ngx_uint_t VAR_9, VAR_10;
    ngx_stream_variable_t *VAR_11;
    ngx_stream_variable_value_t *VAR_12;
    ngx_stream_core_main_conf_t *VAR_13;

    VAR_13 = FUNC_4(VAR_5, VAR_3);

    VAR_11 = FUNC_0(&VAR_13->variables_hash, VAR_7, VAR_6->data, VAR_6->len);

    if (VAR_11) {
        if (VAR_11->flags & VAR_2) {
            return FUNC_3(VAR_5, VAR_11->index);
        }

        if (VAR_4 == 0) {
            FUNC_1(VAR_0, VAR_5->connection->log, 0,
                          "cycle while evaluating variable \"%V\"", VAR_6);
            return ((void*)0);
        }

        VAR_4--;

        VAR_12 = FUNC_2(VAR_5->connection->pool,
                        sizeof(ngx_stream_variable_value_t));

        if (VAR_12 && VAR_11->get_handler(VAR_5, VAR_12, VAR_11->data) == VAR_1) {
            VAR_4++;
            return VAR_12;
        }

        VAR_4++;
        return ((void*)0);
    }

    VAR_12 = FUNC_2(VAR_5->connection->pool, sizeof(ngx_stream_variable_value_t));
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = 0;

    VAR_11 = VAR_13->prefix_variables.elts;
    VAR_10 = VAR_13->prefix_variables.nelts;

    for (VAR_9 = 0; VAR_9 < VAR_13->prefix_variables.nelts; VAR_9++) {
        if (VAR_6->len >= VAR_11[VAR_9].name.len && VAR_6->len > VAR_8
            && FUNC_5(VAR_6->data, VAR_11[VAR_9].name.data, VAR_11[VAR_9].name.len) == 0)
        {
            VAR_8 = VAR_11[VAR_9].name.len;
            VAR_10 = VAR_9;
        }
    }

    if (VAR_10 != VAR_13->prefix_variables.nelts) {
        if (VAR_11[VAR_10].get_handler(VAR_5, VAR_12, (uintptr_t) VAR_6) == VAR_1) {
            return VAR_12;
        }

        return ((void*)0);
    }

    VAR_12->not_found = 1;

    return VAR_12;
}
