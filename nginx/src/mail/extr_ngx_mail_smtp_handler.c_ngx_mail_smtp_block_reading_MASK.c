
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ handler; } ;
typedef TYPE_1__ ngx_resolver_ctx_t ;
struct TYPE_11__ {TYPE_1__* resolver_ctx; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_12__ {TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_13__ {int log; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_mail_session_t *VAR_6;
    ngx_resolver_ctx_t *VAR_7;

    VAR_5 = VAR_4->data;
    VAR_6 = VAR_5->data;

    FUNC_1(VAR_0, VAR_5->log, 0, "smtp reading blocked");

    if (FUNC_0(VAR_4, 0) != VAR_1) {

        if (VAR_6->resolver_ctx) {
            VAR_7 = VAR_6->resolver_ctx;

            if (VAR_7->handler == VAR_2) {
                FUNC_3(VAR_7);

            } else if (VAR_7->handler == VAR_3) {
                FUNC_4(VAR_7);
            }

            VAR_6->resolver_ctx = ((void*)0);
        }

        FUNC_2(VAR_5);
    }
}
