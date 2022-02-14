
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; int (* handler ) (TYPE_4__*,int ,int ) ;} ;
typedef TYPE_2__ ngx_http_script_var_handler_code_t ;
struct TYPE_8__ {int sp; TYPE_4__* request; scalar_t__ ip; } ;
typedef TYPE_3__ ngx_http_script_engine_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

void
FUNC_2(ngx_http_script_engine_t *VAR_1)
{
    ngx_http_script_var_handler_code_t *VAR_2;

    FUNC_0(VAR_0, VAR_1->request->connection->log, 0,
                   "http script set var handler");

    VAR_2 = (ngx_http_script_var_handler_code_t *) VAR_1->ip;

    VAR_1->ip += sizeof(ngx_http_script_var_handler_code_t);

    VAR_1->sp--;

    VAR_2->handler(VAR_1->request, VAR_1->sp, VAR_2->data);
}
