
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_3__ {int session_relay; } ;
typedef TYPE_1__ ngx_rtmp_relay_app_conf_t ;
typedef int ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_1, ngx_rtmp_close_stream_t *VAR_2)
{
    ngx_rtmp_relay_app_conf_t *VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_0);
    if (VAR_3 && !VAR_3->session_relay) {
        FUNC_2(VAR_1);
    }

    return FUNC_0(VAR_1, VAR_2);
}
