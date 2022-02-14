
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ last_out; } ;
typedef TYPE_1__ ngx_http_v2_connection_t ;
struct TYPE_10__ {scalar_t__ ready; int (* handler ) (TYPE_2__*) ;TYPE_3__* data; int log; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_11__ {TYPE_1__* data; scalar_t__ error; } ;
typedef TYPE_3__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_2)
{
    ngx_connection_t *VAR_3;
    ngx_http_v2_connection_t *VAR_4;

    FUNC_4(VAR_1, VAR_2->log, 0,
                   "http2 handle connection handler");

    VAR_3 = VAR_2->data;
    VAR_4 = VAR_3->data;

    if (VAR_3->error) {
        FUNC_0(VAR_4, 0);
        return;
    }

    VAR_2->handler = FUNC_2;

    if (VAR_2->ready) {
        FUNC_2(VAR_2);
        return;
    }

    if (VAR_4->last_out && FUNC_3(VAR_4) == VAR_0) {
        FUNC_0(VAR_4, 0);
        return;
    }

    FUNC_1(VAR_3->data);
}
