
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_queue_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_4__ {TYPE_2__* inclusive; TYPE_2__* exact; } ;
typedef TYPE_1__ ngx_http_location_queue_t ;
struct TYPE_5__ {int * static_locations; int * locations; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_conf_t *VAR_2,
    ngx_http_core_loc_conf_t *VAR_3)
{
    ngx_queue_t *VAR_4, *VAR_5;
    ngx_http_core_loc_conf_t *VAR_6;
    ngx_http_location_queue_t *VAR_7;

    VAR_5 = VAR_3->locations;

    if (VAR_5 == ((void*)0)) {
        return VAR_1;
    }

    if (FUNC_3(VAR_5)) {
        return VAR_1;
    }

    for (VAR_4 = FUNC_4(VAR_5);
         VAR_4 != FUNC_6(VAR_5);
         VAR_4 = FUNC_5(VAR_4))
    {
        VAR_7 = (ngx_http_location_queue_t *) VAR_4;

        VAR_6 = VAR_7->exact ? VAR_7->exact : VAR_7->inclusive;

        if (FUNC_7(VAR_2, VAR_6) != VAR_1) {
            return VAR_0;
        }
    }

    if (FUNC_2(VAR_2, VAR_5) != VAR_1) {
        return VAR_0;
    }

    FUNC_0(VAR_5, FUNC_4(VAR_5));

    VAR_3->static_locations = FUNC_1(VAR_2, VAR_5, 0);
    if (VAR_3->static_locations == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
