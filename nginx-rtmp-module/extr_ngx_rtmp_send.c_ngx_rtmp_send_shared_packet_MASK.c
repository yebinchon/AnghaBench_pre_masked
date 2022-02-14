
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_rtmp_core_srv_conf_t *VAR_4;
    ngx_int_t VAR_5;

    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4 = FUNC_1(VAR_2, VAR_1);

    VAR_5 = FUNC_2(VAR_2, VAR_3, 0);

    FUNC_0(VAR_4, VAR_3);

    return VAR_5;
}
