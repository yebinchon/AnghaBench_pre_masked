
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int ,char*) ;
 int VAR_4 ;

ngx_int_t
FUNC_2(ngx_log_t *VAR_5)
{




    if (FUNC_0(VAR_4) == 0) {
        FUNC_1(VAR_1, VAR_5, VAR_3,
                      "StartServiceCtrlDispatcher() failed");
        return VAR_0;
    }

    return VAR_2;
}
