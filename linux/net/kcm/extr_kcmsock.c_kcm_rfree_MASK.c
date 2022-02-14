
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvlowat; int sk_rmem_alloc; } ;
struct sk_buff {unsigned int truesize; struct sock* sk; } ;
struct kcm_sock {int rx_psock; int rx_wait; struct kcm_mux* mux; } ;
struct kcm_mux {int rx_lock; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct kcm_sock*) ;
 struct kcm_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;
 struct kcm_sock *VAR_2 = FUNC_2(VAR_1);
 struct kcm_mux *VAR_3 = VAR_2->mux;
 unsigned int VAR_4 = VAR_0->truesize;

 FUNC_3(VAR_1, VAR_4);
 FUNC_0(VAR_4, &VAR_1->sk_rmem_alloc);


 FUNC_5();

 if (!VAR_2->rx_wait && !VAR_2->rx_psock &&
     FUNC_4(VAR_1) < VAR_1->sk_rcvlowat) {
  FUNC_6(&VAR_3->rx_lock);
  FUNC_1(VAR_2);
  FUNC_7(&VAR_3->rx_lock);
 }
}
