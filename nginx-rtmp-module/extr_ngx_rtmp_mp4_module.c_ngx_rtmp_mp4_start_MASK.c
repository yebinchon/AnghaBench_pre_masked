
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_9__ {int epoch; int start_timestamp; } ;
typedef TYPE_3__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_file_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_4, ngx_file_t *VAR_5)
{
    ngx_rtmp_mp4_ctx_t *VAR_6;

    VAR_6 = FUNC_1(VAR_4, VAR_3);

    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_0(VAR_0, VAR_4->connection->log, 0,
                   "mp4: start timestamp=%uD", VAR_6->start_timestamp);

    VAR_6->epoch = VAR_2;

    return VAR_1;
}
