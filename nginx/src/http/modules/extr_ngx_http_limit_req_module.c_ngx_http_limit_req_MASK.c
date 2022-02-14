
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef size_t ngx_uint_t ;
struct TYPE_18__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_shm_zone_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {int burst; int delay; int * shm_zone; } ;
typedef TYPE_3__ ngx_http_limit_req_limit_t ;
struct TYPE_16__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_20__ {TYPE_14__ limits; } ;
typedef TYPE_4__ ngx_http_limit_req_conf_t ;
struct TYPE_21__ {int pool; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_22__ {TYPE_2__ name; } ;
typedef TYPE_6__ ngx_command_t ;
struct TYPE_17__ {size_t nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_14__*,int ,int,int) ;
 TYPE_3__* FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,TYPE_5__*,int ,char*,TYPE_2__*) ;
 int VAR_5 ;
 int * FUNC_4 (TYPE_5__*,TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 scalar_t__ FUNC_6 (scalar_t__,char*,int) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_limit_req_conf_t *VAR_9 = VAR_8;

    ngx_int_t VAR_10, VAR_11;
    ngx_str_t *VAR_12, VAR_13;
    ngx_uint_t VAR_14;
    ngx_shm_zone_t *VAR_15;
    ngx_http_limit_req_limit_t *VAR_16, *VAR_17;

    VAR_12 = VAR_6->args->elts;

    VAR_15 = ((void*)0);
    VAR_10 = 0;
    VAR_11 = 0;

    for (VAR_14 = 1; VAR_14 < VAR_6->args->nelts; VAR_14++) {

        if (FUNC_6(VAR_12[VAR_14].data, "zone=", 5) == 0) {

            VAR_13.len = VAR_12[VAR_14].len - 5;
            VAR_13.data = VAR_12[VAR_14].data + 5;

            VAR_15 = FUNC_4(VAR_6, &VAR_13, 0,
                                             &VAR_5);
            if (VAR_15 == ((void*)0)) {
                return VAR_0;
            }

            continue;
        }

        if (FUNC_6(VAR_12[VAR_14].data, "burst=", 6) == 0) {

            VAR_10 = FUNC_2(VAR_12[VAR_14].data + 6, VAR_12[VAR_14].len - 6);
            if (VAR_10 <= 0) {
                FUNC_3(VAR_2, VAR_6, 0,
                                   "invalid burst value \"%V\"", &VAR_12[VAR_14]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_6(VAR_12[VAR_14].data, "delay=", 6) == 0) {

            VAR_11 = FUNC_2(VAR_12[VAR_14].data + 6, VAR_12[VAR_14].len - 6);
            if (VAR_11 <= 0) {
                FUNC_3(VAR_2, VAR_6, 0,
                                   "invalid delay value \"%V\"", &VAR_12[VAR_14]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_5(VAR_12[VAR_14].data, "nodelay") == 0) {
            VAR_11 = VAR_3 / 1000;
            continue;
        }

        FUNC_3(VAR_2, VAR_6, 0,
                           "invalid parameter \"%V\"", &VAR_12[VAR_14]);
        return VAR_0;
    }

    if (VAR_15 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_6, 0,
                           "\"%V\" must have \"zone\" parameter",
                           &VAR_7->name);
        return VAR_0;
    }

    VAR_17 = VAR_9->limits.elts;

    if (VAR_17 == ((void*)0)) {
        if (FUNC_0(&VAR_9->limits, VAR_6->pool, 1,
                           sizeof(ngx_http_limit_req_limit_t))
            != VAR_4)
        {
            return VAR_0;
        }
    }

    for (VAR_14 = 0; VAR_14 < VAR_9->limits.nelts; VAR_14++) {
        if (VAR_15 == VAR_17[VAR_14].shm_zone) {
            return "is duplicate";
        }
    }

    VAR_16 = FUNC_1(&VAR_9->limits);
    if (VAR_16 == ((void*)0)) {
        return VAR_0;
    }

    VAR_16->shm_zone = VAR_15;
    VAR_16->burst = VAR_10 * 1000;
    VAR_16->delay = VAR_11 * 1000;

    return VAR_1;
}
