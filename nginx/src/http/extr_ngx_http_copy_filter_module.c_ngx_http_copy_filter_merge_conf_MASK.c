
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bufs; } ;
typedef TYPE_1__ ngx_http_copy_filter_conf_t ;
typedef int ngx_conf_t ;


 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_0, void *VAR_1, void *VAR_2)
{
    ngx_http_copy_filter_conf_t *VAR_3 = VAR_1;
    ngx_http_copy_filter_conf_t *VAR_4 = VAR_2;

    FUNC_0(VAR_4->bufs, VAR_3->bufs, 2, 32768);

    return ((void*)0);
}
