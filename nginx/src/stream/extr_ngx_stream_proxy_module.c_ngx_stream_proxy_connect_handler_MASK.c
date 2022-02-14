
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_stream_session_t ;
struct TYPE_5__ {scalar_t__ timedout; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_6__ {int log; int write; int * data; } ;
typedef TYPE_2__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_stream_session_t *VAR_6;

    VAR_5 = VAR_4->data;
    VAR_6 = VAR_5->data;

    if (VAR_4->timedout) {
        FUNC_2(VAR_2, VAR_5->log, VAR_0, "upstream timed out");
        FUNC_4(VAR_6);
        return;
    }

    FUNC_0(VAR_5->write);

    FUNC_1(VAR_1, VAR_5->log, 0,
                   "stream proxy connect upstream");

    if (FUNC_5(VAR_5) != VAR_3) {
        FUNC_4(VAR_6);
        return;
    }

    FUNC_3(VAR_6);
}
