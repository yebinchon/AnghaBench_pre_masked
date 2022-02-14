
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* connection; scalar_t__ auto_pushed; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_1,
                             ngx_rtmp_close_stream_t *VAR_2)
{
    if (VAR_1->auto_pushed) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_1->connection->log, 0,
                   "record: close_stream");

    FUNC_2(VAR_1);

next:
    return FUNC_0(VAR_1, VAR_2);
}
