
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_sock {int tx; int rx; int mutex; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_prot; } ;
struct TYPE_2__ {int lock; } ;
struct net {TYPE_1__ xdp; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 struct net* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct net*,int ,int) ;
 int FUNC_9 (struct sock*) ;
 struct xdp_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct xdp_sock*) ;
 int FUNC_12 (struct xdp_sock*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;
 struct xdp_sock *VAR_2 = FUNC_10(VAR_1);
 struct net *VAR_3;

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_6(VAR_1);

 FUNC_2(&VAR_3->xdp.lock);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_3->xdp.lock);

 FUNC_0();
 FUNC_8(VAR_3, VAR_1->sk_prot, -1);
 FUNC_1();

 FUNC_11(VAR_2);
 FUNC_2(&VAR_2->mutex);
 FUNC_12(VAR_2);
 FUNC_3(&VAR_2->mutex);

 FUNC_13(VAR_2->rx);
 FUNC_13(VAR_2->tx);

 FUNC_7(VAR_1);
 VAR_0->sk = ((void*)0);

 FUNC_5(VAR_1);
 FUNC_9(VAR_1);

 return 0;
}
