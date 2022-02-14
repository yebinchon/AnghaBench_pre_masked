
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct netif {char* name; int flags; int mtu; int output; int hwaddr_len; int hwaddr; TYPE_1__* state; } ;
typedef int err_t ;
struct TYPE_4__ {int MTU; int Address; int AddressLength; } ;
typedef TYPE_1__* PIP_INTERFACE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

err_t
FUNC_3(struct netif *VAR_2)
{
    PIP_INTERFACE VAR_3 = VAR_2->state;

    VAR_2->hwaddr_len = VAR_3->AddressLength;
    FUNC_0(VAR_2->hwaddr, VAR_3->Address, VAR_2->hwaddr_len);

    VAR_2->output = VAR_1;
    VAR_2->mtu = VAR_3->MTU;

    VAR_2->name[0] = 'e';
    VAR_2->name[1] = 'n';

    VAR_2->flags |= VAR_0;

    FUNC_2(VAR_3);

    FUNC_1(VAR_3);

    return 0;
}
