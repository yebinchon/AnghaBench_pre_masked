
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_conf_t ;
struct TYPE_2__ {int high; int low; } ;
typedef TYPE_1__ ngx_conf_num_bounds_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,char*,int,...) ;

char *
FUNC_1(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_conf_num_bounds_t *VAR_6 = VAR_4;
    ngx_int_t *VAR_7 = VAR_5;

    if (VAR_6->high == -1) {
        if (*VAR_7 >= VAR_6->low) {
            return VAR_1;
        }

        FUNC_0(VAR_2, VAR_3, 0,
                           "value must be equal to or greater than %i",
                           VAR_6->low);

        return VAR_0;
    }

    if (*VAR_7 >= VAR_6->low && *VAR_7 <= VAR_6->high) {
        return VAR_1;
    }

    FUNC_0(VAR_2, VAR_3, 0,
                       "value must be between %i and %i",
                       VAR_6->low, VAR_6->high);

    return VAR_0;
}
