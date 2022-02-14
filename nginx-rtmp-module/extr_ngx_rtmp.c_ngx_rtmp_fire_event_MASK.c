
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_header_t ;
typedef scalar_t__ (* ngx_rtmp_handler_pt ) (int *,int *,int *) ;
struct TYPE_4__ {TYPE_2__* events; } ;
typedef TYPE_1__ ngx_rtmp_core_main_conf_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_5__ {scalar_t__ (* elts ) (int *,int *,int *) ;size_t nelts; } ;
typedef TYPE_2__ ngx_array_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;

ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3, ngx_uint_t VAR_4,
        ngx_rtmp_header_t *VAR_5, ngx_chain_t *VAR_6)
{
    ngx_rtmp_core_main_conf_t *VAR_7;
    ngx_array_t *VAR_8;
    ngx_rtmp_handler_pt *VAR_9;
    size_t VAR_10;

    VAR_7 = FUNC_0(VAR_3, VAR_2);

    VAR_8 = &VAR_7->events[VAR_4];
    VAR_9 = &VAR_8->elts;
    for(VAR_10 = 0; VAR_10 < VAR_8->nelts; ++VAR_10, ++VAR_9) {
        if (*VAR_9 && (*VAR_9)(VAR_3, VAR_5, VAR_6) != VAR_1) {
            return VAR_0;
        }
    }
    return VAR_1;
}
