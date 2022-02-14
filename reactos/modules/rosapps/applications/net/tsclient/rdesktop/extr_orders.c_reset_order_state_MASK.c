
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int order_type; } ;
struct TYPE_5__ {TYPE_4__ order_state; } ;
struct TYPE_6__ {TYPE_1__ orders; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;

void
FUNC_1(RDPCLIENT * VAR_1)
{
 FUNC_0(&VAR_1->orders.order_state, 0, sizeof(VAR_1->orders.order_state));
 VAR_1->orders.order_state.order_type = VAR_0;
}
