
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * elts; } ;
struct TYPE_4__ {int log_level; TYPE_1__ limits; } ;
typedef TYPE_2__ ngx_stream_limit_conn_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_2, void *VAR_3, void *VAR_4)
{
    ngx_stream_limit_conn_conf_t *VAR_5 = VAR_3;
    ngx_stream_limit_conn_conf_t *VAR_6 = VAR_4;

    if (VAR_6->limits.elts == ((void*)0)) {
        VAR_6->limits = VAR_5->limits;
    }

    FUNC_0(VAR_6->log_level, VAR_5->log_level, VAR_1);

    return VAR_0;
}
