
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_3__ {scalar_t__ degrade; } ;
typedef TYPE_1__ ngx_http_degradation_loc_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2)
{
    ngx_http_degradation_loc_conf_t *VAR_3;

    VAR_3 = FUNC_1(VAR_2, VAR_1);

    if (VAR_3->degrade && FUNC_0(VAR_2)) {
        return VAR_3->degrade;
    }

    return VAR_0;
}
