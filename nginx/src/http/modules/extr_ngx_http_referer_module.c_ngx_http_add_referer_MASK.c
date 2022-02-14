
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_hash_keys_arrays_t ;
struct TYPE_13__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,TYPE_2__*,int ,char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_7, ngx_hash_keys_arrays_t *VAR_8,
    ngx_str_t *VAR_9, ngx_str_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_str_t *VAR_12;

    if (VAR_10 == ((void*)0) || VAR_10->len == 0) {
        VAR_12 = VAR_4;

    } else {
        VAR_12 = FUNC_2(VAR_7->pool, sizeof(ngx_str_t));
        if (VAR_12 == ((void*)0)) {
            return VAR_2;
        }

        *VAR_12 = *VAR_10;
    }

    VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_12, VAR_3);

    if (VAR_11 == VAR_6) {
        return VAR_6;
    }

    if (VAR_11 == VAR_1) {
        FUNC_0(VAR_5, VAR_7, 0,
                           "invalid hostname or wildcard \"%V\"", VAR_9);
    }

    if (VAR_11 == VAR_0) {
        FUNC_0(VAR_5, VAR_7, 0,
                           "conflicting parameter \"%V\"", VAR_9);
    }

    return VAR_2;
}
