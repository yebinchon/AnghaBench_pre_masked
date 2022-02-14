
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_flv_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_file_t ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_3, ngx_file_t *VAR_4)
{
    ngx_rtmp_flv_ctx_t *VAR_5;

    VAR_5 = FUNC_1(VAR_3, VAR_2);

    if (VAR_5 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
                  "flv: stop");

    return VAR_1;
}
