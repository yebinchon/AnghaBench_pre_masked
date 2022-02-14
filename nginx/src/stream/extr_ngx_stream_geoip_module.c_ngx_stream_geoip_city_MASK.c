
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int city_v6; TYPE_8__* city; } ;
typedef TYPE_2__ ngx_stream_geoip_conf_t ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_13__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {int databaseType; } ;
struct TYPE_10__ {int nelts; TYPE_3__* elts; } ;


 int VAR_0 ;




 int VAR_1 ;
 TYPE_8__* FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_4__*,int ,char*,TYPE_3__*,...) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_stream_geoip_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9;

    if (VAR_8->city) {
        return "is duplicate";
    }

    VAR_9 = VAR_5->args->elts;

    VAR_8->city = FUNC_0((char *) VAR_9[1].data, VAR_1);

    if (VAR_8->city == ((void*)0)) {
        FUNC_2(VAR_4, VAR_5, 0,
                           "GeoIP_open(\"%V\") failed", &VAR_9[1]);

        return VAR_2;
    }

    if (VAR_5->args->nelts == 3) {
        if (FUNC_3(VAR_9[2].data, "utf8") == 0) {
            FUNC_1(VAR_8->city, VAR_0);

        } else {
            FUNC_2(VAR_4, VAR_5, 0,
                               "invalid parameter \"%V\"", &VAR_9[2]);
            return VAR_2;
        }
    }

    switch (VAR_8->city->databaseType) {

    case 131:
    case 129:

        return VAR_3;
    default:
        FUNC_2(VAR_4, VAR_5, 0,
                           "invalid GeoIP City database \"%V\" type:%d",
                           &VAR_9[1], VAR_8->city->databaseType);
        return VAR_2;
    }
}
