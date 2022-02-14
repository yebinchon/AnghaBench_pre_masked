
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* handler ) (TYPE_1__*) ;int state; } ;
typedef TYPE_1__ ngx_resolver_ctx_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ ngx_event_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(ngx_event_t *VAR_1)
{
    ngx_resolver_ctx_t *VAR_2;

    VAR_2 = VAR_1->data;

    VAR_2->state = VAR_0;

    VAR_2->handler(VAR_2);
}
