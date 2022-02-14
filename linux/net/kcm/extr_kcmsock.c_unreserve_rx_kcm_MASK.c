
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk_receive_queue; } ;
struct kcm_sock {int done; int rx_disabled; TYPE_1__ sk; int done_work; int * rx_psock; } ;
struct kcm_psock {struct kcm_sock* rx_kcm; struct kcm_mux* mux; } ;
struct kcm_mux {int rx_lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kcm_sock*) ;
 int FUNC_2 (struct kcm_mux*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct kcm_psock *VAR_1,
        bool VAR_2)
{
 struct kcm_sock *VAR_3 = VAR_1->rx_kcm;
 struct kcm_mux *VAR_4 = VAR_1->mux;

 if (!VAR_3)
  return;

 FUNC_6(&VAR_4->rx_lock);

 VAR_1->rx_kcm = ((void*)0);
 VAR_3->rx_psock = ((void*)0);




 FUNC_5();

 if (FUNC_8(VAR_3->done)) {
  FUNC_7(&VAR_4->rx_lock);




  FUNC_0(&VAR_3->done_work, VAR_0);
  FUNC_3(&VAR_3->done_work);
  return;
 }

 if (FUNC_8(VAR_3->rx_disabled)) {
  FUNC_2(VAR_4, &VAR_3->sk.sk_receive_queue);
 } else if (VAR_2 || FUNC_8(!FUNC_4(&VAR_3->sk))) {



  FUNC_1(VAR_3);
 }
 FUNC_7(&VAR_4->rx_lock);
}
