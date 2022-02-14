
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_ssl_conn_t ;
typedef int RSA ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int *,int *) ;

RSA *
FUNC_1(ngx_ssl_conn_t *VAR_1, int VAR_2,
    int VAR_3)
{
    static RSA *VAR_4;

    if (VAR_3 != 512) {
        return ((void*)0);
    }



    if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_0(512, VAR_0, ((void*)0), ((void*)0));
    }



    return VAR_4;
}
