
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nn_ep {TYPE_2__* sock; } ;
struct TYPE_4__ {TYPE_1__* socktype; } ;
struct TYPE_3__ {int protocol; } ;


 int FUNC_0 (struct nn_ep*,int ) ;

int FUNC_1 (struct nn_ep *VAR_0, struct nn_ep *VAR_1)
{
    return FUNC_0 (VAR_0, VAR_1->sock->socktype->protocol);
}
