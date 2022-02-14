
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kcm_sock {int tx_wait; struct kcm_psock* tx_psock; struct kcm_mux* mux; } ;
struct TYPE_4__ {int unreserved; } ;
struct kcm_psock {TYPE_3__* sk; int psock_list; scalar_t__ done; int tx_stopped; TYPE_1__ stats; int * tx_kcm; } ;
struct kcm_mux {int lock; int psocks_cnt; } ;
struct TYPE_6__ {TYPE_2__* sk_socket; } ;
struct TYPE_5__ {int file; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct kcm_mux*,struct kcm_psock*) ;
 int FUNC_4 (int ,struct kcm_psock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kcm_psock*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct kcm_sock *VAR_1)
{
 struct kcm_psock *VAR_2;
 struct kcm_mux *VAR_3 = VAR_1->mux;

 FUNC_9(&VAR_3->lock);

 VAR_2 = VAR_1->tx_psock;

 if (FUNC_1(!VAR_2)) {
  FUNC_10(&VAR_3->lock);
  return;
 }

 FUNC_7();

 FUNC_3(VAR_3, VAR_2);

 FUNC_1(VAR_1->tx_wait);

 VAR_1->tx_psock = ((void*)0);
 VAR_2->tx_kcm = ((void*)0);
 FUNC_0(VAR_2->stats.unreserved);

 if (FUNC_11(VAR_2->tx_stopped)) {
  if (VAR_2->done) {

   FUNC_5(&VAR_2->psock_list);
   VAR_3->psocks_cnt--;
   FUNC_8(VAR_2->sk);
   FUNC_2(VAR_2->sk->sk_socket->file);
   FUNC_4(VAR_0, VAR_2);
  }



  FUNC_10(&VAR_3->lock);

  return;
 }

 FUNC_6(VAR_2);

 FUNC_10(&VAR_3->lock);
}
