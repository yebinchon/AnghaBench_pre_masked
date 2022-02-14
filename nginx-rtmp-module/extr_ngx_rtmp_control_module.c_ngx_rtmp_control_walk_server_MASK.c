
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_9__ {scalar_t__ nelts; TYPE_5__** elts; } ;
struct TYPE_12__ {TYPE_1__ applications; } ;
typedef TYPE_4__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
struct TYPE_13__ {TYPE_2__ name; } ;
typedef TYPE_5__ ngx_rtmp_core_app_conf_t ;
typedef int ngx_http_request_t ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int,TYPE_3__*) ;
 char* FUNC_1 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static const char *
FUNC_3(ngx_http_request_t *VAR_2,
    ngx_rtmp_core_srv_conf_t *VAR_3)
{
    ngx_str_t VAR_4;
    ngx_uint_t VAR_5;
    const char *VAR_6;
    ngx_rtmp_core_app_conf_t **VAR_7;

    if (FUNC_0(VAR_2, (u_char *) "app", sizeof("app") - 1, &VAR_4) != VAR_1) {
        VAR_4.len = 0;
    }

    VAR_7 = VAR_3->applications.elts;

    for (VAR_5 = 0; VAR_5 < VAR_3->applications.nelts; ++VAR_5, ++VAR_7) {
        if (VAR_4.len && ((*VAR_7)->name.len != VAR_4.len ||
                        FUNC_2((*VAR_7)->name.data, VAR_4.data, VAR_4.len)))
        {
            continue;
        }

        VAR_6 = FUNC_1(VAR_2, *VAR_7);
        if (VAR_6 != VAR_0) {
            return VAR_6;
        }
    }

    return VAR_0;
}
