
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_5__ {int event; int addr6_resend_queue; int addr6_rbtree; int addr_resend_queue; int addr_rbtree; int srv_resend_queue; int srv_rbtree; int name_resend_queue; int name_rbtree; int log; } ;
typedef TYPE_1__ ngx_resolver_t ;
typedef int ngx_msec_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ ngx_event_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_1)
{
    time_t VAR_2, VAR_3, VAR_4, VAR_5;



    ngx_resolver_t *VAR_6;

    VAR_6 = VAR_1->data;

    FUNC_1(VAR_0, VAR_6->log, 0,
                   "resolver resend handler");



    VAR_5 = FUNC_3(VAR_6, &VAR_6->name_rbtree, &VAR_6->name_resend_queue);

    VAR_4 = FUNC_3(VAR_6, &VAR_6->srv_rbtree, &VAR_6->srv_resend_queue);





    VAR_3 = FUNC_3(VAR_6, &VAR_6->addr_rbtree, &VAR_6->addr_resend_queue);
    VAR_2 = VAR_5;

    if (VAR_2 == 0) {
        VAR_2 = VAR_3;

    } else if (VAR_3) {
        VAR_2 = FUNC_2(VAR_2, VAR_3);
    }

    if (VAR_2 == 0) {
        VAR_2 = VAR_4;

    } else if (VAR_4) {
        VAR_2 = FUNC_2(VAR_2, VAR_4);
    }
    if (VAR_2) {
        FUNC_0(VAR_6->event, (ngx_msec_t) (VAR_2 * 1000));
    }
}
