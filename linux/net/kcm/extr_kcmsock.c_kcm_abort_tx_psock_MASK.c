
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {int tx_aborts; } ;
struct kcm_psock {int tx_stopped; TYPE_2__* tx_kcm; int psock_avail_list; TYPE_1__ stats; struct kcm_mux* mux; struct sock* sk; } ;
struct kcm_mux {int lock; } ;
struct TYPE_4__ {int tx_work; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct kcm_psock *VAR_1, int VAR_2,
          bool VAR_3)
{
 struct sock *VAR_4 = VAR_1->sk;
 struct kcm_mux *VAR_5 = VAR_1->mux;



 FUNC_5(&VAR_5->lock);

 if (VAR_1->tx_stopped) {
  FUNC_6(&VAR_5->lock);
  return;
 }

 VAR_1->tx_stopped = 1;
 FUNC_0(VAR_1->stats.tx_aborts);

 if (!VAR_1->tx_kcm) {

  FUNC_1(&VAR_1->psock_avail_list);
 } else if (VAR_3) {





  FUNC_4();

  FUNC_2(VAR_0, &VAR_1->tx_kcm->tx_work);
 }

 FUNC_6(&VAR_5->lock);


 FUNC_3(VAR_4, VAR_2);
}
