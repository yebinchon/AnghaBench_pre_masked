
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int timeout; int * out; } ;
typedef TYPE_1__ ngx_rtmp_netcall_session_t ;
struct TYPE_12__ {scalar_t__ timer_set; scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_13__ {int timedout; int read; int * (* send_chain ) (TYPE_3__*,int *,int ) ;int log; scalar_t__ destroyed; TYPE_1__* data; } ;
typedef TYPE_3__ ngx_connection_t ;
typedef int ngx_chain_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(ngx_event_t *VAR_5)
{
    ngx_rtmp_netcall_session_t *VAR_6;
    ngx_connection_t *VAR_7;
    ngx_chain_t *VAR_8;

    VAR_7 = VAR_5->data;
    VAR_6 = VAR_7->data;

    if (VAR_7->destroyed) {
        return;
    }

    if (VAR_5->timedout) {
        FUNC_4(VAR_2, VAR_7->log, VAR_1,
                "netcall: client send timed out");
        VAR_7->timedout = 1;
        FUNC_5(VAR_7);
        return;
    }

    if (VAR_5->timer_set) {
        FUNC_2(VAR_5);
    }

    VAR_8 = VAR_7->send_chain(VAR_7, VAR_6->out, 0);

    if (VAR_8 == VAR_0) {
        FUNC_5(VAR_7);
        return;
    }

    VAR_6->out = VAR_8;


    if (VAR_8) {
        FUNC_0(VAR_5, VAR_6->timeout);
        if (FUNC_3(VAR_5, 0) != VAR_3) {
            FUNC_5(VAR_7);
        }
        return;
    }



    FUNC_1(VAR_5, VAR_4, 0);

    FUNC_6(VAR_7->read);
}
