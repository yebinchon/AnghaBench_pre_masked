
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_stream_session_t ;
struct TYPE_9__ {int * out; } ;
typedef TYPE_1__ ngx_stream_return_ctx_t ;
struct TYPE_10__ {scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_11__ {int log; int buffered; int * data; } ;
typedef TYPE_3__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_7(ngx_event_t *VAR_7)
{
    ngx_connection_t *VAR_8;
    ngx_stream_session_t *VAR_9;
    ngx_stream_return_ctx_t *VAR_10;

    VAR_8 = VAR_7->data;
    VAR_9 = VAR_8->data;

    if (VAR_7->timedout) {
        FUNC_1(VAR_8, VAR_1, "connection timed out");
        FUNC_4(VAR_9, VAR_5);
        return;
    }

    VAR_10 = FUNC_5(VAR_9, VAR_6);

    if (FUNC_6(VAR_9, VAR_10->out, 1) == VAR_0) {
        FUNC_4(VAR_9, VAR_4);
        return;
    }

    VAR_10->out = ((void*)0);

    if (!VAR_8->buffered) {
        FUNC_3(VAR_2, VAR_8->log, 0,
                       "stream return done sending");
        FUNC_4(VAR_9, VAR_5);
        return;
    }

    if (FUNC_2(VAR_7, 0) != VAR_3) {
        FUNC_4(VAR_9, VAR_4);
        return;
    }

    FUNC_0(VAR_7, 5000);
}
