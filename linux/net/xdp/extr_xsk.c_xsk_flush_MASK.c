
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* sk_data_ready ) (TYPE_1__*) ;} ;
struct xdp_sock {TYPE_1__ sk; int rx; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct xdp_sock *VAR_0)
{
 FUNC_1(VAR_0->rx);
 VAR_0->sk.sk_data_ready(&VAR_0->sk);
}
