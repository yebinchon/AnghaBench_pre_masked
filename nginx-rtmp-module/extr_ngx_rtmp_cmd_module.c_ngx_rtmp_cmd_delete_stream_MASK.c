
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_delete_stream_t ;
struct TYPE_9__ {scalar_t__ stream; } ;
typedef TYPE_3__ ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_rtmp_session_t *VAR_1, ngx_rtmp_delete_stream_t *VAR_2)
{
    ngx_rtmp_close_stream_t VAR_3;

    FUNC_0(VAR_0, VAR_1->connection->log, 0, "deleteStream");

    VAR_3.stream = 0;

    return FUNC_1(VAR_1, &VAR_3);
}
