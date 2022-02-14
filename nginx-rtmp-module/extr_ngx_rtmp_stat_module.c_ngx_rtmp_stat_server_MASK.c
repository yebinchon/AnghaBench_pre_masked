
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nelts; int ** elts; } ;
struct TYPE_5__ {TYPE_1__ applications; int pool; } ;
typedef TYPE_2__ ngx_rtmp_core_srv_conf_t ;
typedef int ngx_rtmp_core_app_conf_t ;
typedef int ngx_http_request_t ;
typedef int ngx_chain_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ***,int *) ;
 int FUNC_2 (int *,int ***,int ) ;

__attribute__((used)) static void
FUNC_3(ngx_http_request_t *VAR_0, ngx_chain_t ***VAR_1,
        ngx_rtmp_core_srv_conf_t *VAR_2)
{
    ngx_rtmp_core_app_conf_t **VAR_3;
    size_t VAR_4;

    FUNC_0("<server>\r\n");





    VAR_3 = VAR_2->applications.elts;
    for (VAR_4 = 0; VAR_4 < VAR_2->applications.nelts; ++VAR_4, ++VAR_3) {
        FUNC_1(VAR_0, VAR_1, *VAR_3);
    }

    FUNC_0("</server>\r\n");
}
