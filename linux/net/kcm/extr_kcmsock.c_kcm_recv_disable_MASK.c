
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk_receive_queue; } ;
struct kcm_sock {int rx_disabled; int rx_wait; TYPE_1__ sk; int wait_rx_list; int rx_psock; struct kcm_mux* mux; } ;
struct kcm_mux {int rx_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kcm_mux*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kcm_sock *VAR_0)
{
 struct kcm_mux *VAR_1 = VAR_0->mux;

 if (VAR_0->rx_disabled)
  return;

 FUNC_2(&VAR_1->rx_lock);

 VAR_0->rx_disabled = 1;


 if (!VAR_0->rx_psock) {
  if (VAR_0->rx_wait) {
   FUNC_0(&VAR_0->wait_rx_list);
   VAR_0->rx_wait = 0;
  }

  FUNC_1(VAR_1, &VAR_0->sk.sk_receive_queue);
 }

 FUNC_3(&VAR_1->rx_lock);
}
