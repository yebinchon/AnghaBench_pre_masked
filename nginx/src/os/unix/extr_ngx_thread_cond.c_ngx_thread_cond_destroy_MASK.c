
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_thread_cond_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef scalar_t__ ngx_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (int *) ;

ngx_int_t
FUNC_2(ngx_thread_cond_t *VAR_3, ngx_log_t *VAR_4)
{
    ngx_err_t VAR_5;

    VAR_5 = FUNC_1(VAR_3);
    if (VAR_5 == 0) {
        return VAR_2;
    }

    FUNC_0(VAR_1, VAR_4, VAR_5, "pthread_cond_destroy() failed");
    return VAR_0;
}
