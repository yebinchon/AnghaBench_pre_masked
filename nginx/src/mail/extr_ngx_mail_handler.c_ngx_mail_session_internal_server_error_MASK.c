
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int quit; TYPE_2__* connection; int out; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_11__ {TYPE_1__* protocol; } ;
typedef TYPE_4__ ngx_mail_core_srv_conf_t ;
struct TYPE_9__ {int write; } ;
struct TYPE_8__ {int internal_server_error; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(ngx_mail_session_t *VAR_1)
{
    ngx_mail_core_srv_conf_t *VAR_2;

    VAR_2 = FUNC_0(VAR_1, VAR_0);

    VAR_1->out = VAR_2->protocol->internal_server_error;
    VAR_1->quit = 1;

    FUNC_1(VAR_1->connection->write);
}
