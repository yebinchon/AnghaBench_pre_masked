
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct xdp_sock {int tx_completion_lock; TYPE_1__* umem; } ;
struct sk_buff {int sk; } ;
struct TYPE_4__ {scalar_t__ destructor_arg; } ;
struct TYPE_3__ {int cq; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct xdp_sock* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_0)
{
 u64 VAR_1 = (u64)(long)FUNC_1(VAR_0)->destructor_arg;
 struct xdp_sock *VAR_2 = FUNC_5(VAR_0->sk);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->tx_completion_lock, VAR_3);
 FUNC_0(FUNC_6(VAR_2->umem->cq, VAR_1));
 FUNC_4(&VAR_2->tx_completion_lock, VAR_3);

 FUNC_2(VAR_0);
}
