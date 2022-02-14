
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ ssize_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,char*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    ssize_t *VAR_8 = VAR_7;

    FUNC_0(VAR_3, VAR_5, 0,
                       "\"proxy_send_lowat\" is not supported, ignored");

    *VAR_8 = 0;



    return VAR_1;
}
