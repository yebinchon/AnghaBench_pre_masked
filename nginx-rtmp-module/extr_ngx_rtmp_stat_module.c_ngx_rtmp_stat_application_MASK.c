
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int stat; } ;
typedef TYPE_1__ ngx_rtmp_stat_loc_conf_t ;
struct TYPE_8__ {int * app_conf; int name; } ;
typedef TYPE_2__ ngx_rtmp_core_app_conf_t ;
typedef int ngx_http_request_t ;
typedef int ngx_chain_t ;
struct TYPE_10__ {size_t ctx_index; } ;
struct TYPE_9__ {size_t ctx_index; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (int *,int ***,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ***,int ) ;

__attribute__((used)) static void
FUNC_5(ngx_http_request_t *VAR_5, ngx_chain_t ***VAR_6,
        ngx_rtmp_core_app_conf_t *VAR_7)
{
    ngx_rtmp_stat_loc_conf_t *VAR_8;

    FUNC_1("<application>\r\n");
    FUNC_1("<name>");
    FUNC_0(&VAR_7->name);
    FUNC_1("</name>\r\n");

    VAR_8 = FUNC_2(VAR_5, VAR_4);

    if (VAR_8->stat & VAR_0) {
        FUNC_3(VAR_5, VAR_6,
                VAR_7->app_conf[VAR_2.ctx_index]);
    }

    if (VAR_8->stat & VAR_1) {
        FUNC_4(VAR_5, VAR_6,
                VAR_7->app_conf[VAR_3.ctx_index]);
    }

    FUNC_1("</application>\r\n");
}
