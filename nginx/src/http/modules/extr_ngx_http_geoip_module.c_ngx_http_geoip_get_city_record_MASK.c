
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_5__ {scalar_t__ city; scalar_t__ city_v6; } ;
typedef TYPE_1__ ngx_http_geoip_conf_t ;
typedef int GeoIPRecord ;


 int * FUNC_0 (scalar_t__,int ) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (int *,int ) ;

__attribute__((used)) static GeoIPRecord *
FUNC_5(ngx_http_request_t *VAR_1)
{
    ngx_http_geoip_conf_t *VAR_2;

    VAR_2 = FUNC_4(VAR_1, VAR_0);

    if (VAR_2->city) {







        return FUNC_0(VAR_2->city, FUNC_2(VAR_1, VAR_2));

    }

    return ((void*)0);
}
