
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int out; } ;
typedef TYPE_1__ ngx_mail_session_t ;
struct TYPE_12__ {int timeout; } ;
typedef TYPE_2__ ngx_mail_core_srv_conf_t ;
struct TYPE_13__ {int write; TYPE_9__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_14__ {int handler; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(ngx_mail_session_t *VAR_4, ngx_connection_t *VAR_5)
{
    ngx_mail_core_srv_conf_t *VAR_6;

    VAR_6 = FUNC_3(VAR_4, VAR_2);

    FUNC_5(&VAR_4->out, VAR_1);

    VAR_5->read->handler = VAR_3;

    FUNC_0(VAR_5->read, VAR_6->timeout);

    if (FUNC_1(VAR_5->read, 0) != VAR_0) {
        FUNC_2(VAR_5);
    }

    FUNC_4(VAR_5->write);
}
