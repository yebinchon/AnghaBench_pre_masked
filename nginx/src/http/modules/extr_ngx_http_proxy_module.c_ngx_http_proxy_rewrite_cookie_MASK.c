
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int * data; } ;
struct TYPE_8__ {TYPE_1__ value; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_9__ {scalar_t__ cookie_paths; scalar_t__ cookie_domains; } ;
typedef TYPE_3__ ngx_http_proxy_loc_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int *,scalar_t__) ;
 int * FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,char) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_table_elt_t *VAR_4)
{
    size_t VAR_5;
    u_char *VAR_6;
    ngx_int_t VAR_7, VAR_8;
    ngx_http_proxy_loc_conf_t *VAR_9;

    VAR_6 = (u_char *) FUNC_3(VAR_4->value.data, ';');
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = VAR_6 + 1 - VAR_4->value.data;

    VAR_8 = VAR_0;

    VAR_9 = FUNC_0(VAR_3, VAR_2);

    if (VAR_9->cookie_domains) {
        VAR_6 = FUNC_2(VAR_4->value.data + VAR_5, "domain=", 7 - 1);

        if (VAR_6) {
            VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6 + 7,
                                                     VAR_9->cookie_domains);
            if (VAR_7 == VAR_1) {
                return VAR_1;
            }

            if (VAR_7 != VAR_0) {
                VAR_8 = VAR_7;
            }
        }
    }

    if (VAR_9->cookie_paths) {
        VAR_6 = FUNC_2(VAR_4->value.data + VAR_5, "path=", 5 - 1);

        if (VAR_6) {
            VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6 + 5,
                                                     VAR_9->cookie_paths);
            if (VAR_7 == VAR_1) {
                return VAR_1;
            }

            if (VAR_7 != VAR_0) {
                VAR_8 = VAR_7;
            }
        }
    }

    return VAR_8;
}
