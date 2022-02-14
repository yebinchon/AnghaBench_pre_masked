
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; scalar_t__ sk_user_data; } ;
struct kcm_sock {int tx_stopped; int tx_work; } ;
struct kcm_psock {struct kcm_sock* tx_kcm; struct kcm_mux* mux; } ;
struct kcm_mux {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 struct kcm_psock *VAR_2;
 struct kcm_mux *VAR_3;
 struct kcm_sock *VAR_4;

 FUNC_1(&VAR_1->sk_callback_lock);

 VAR_2 = (struct kcm_psock *)VAR_1->sk_user_data;
 if (FUNC_5(!VAR_2))
  goto out;
 VAR_3 = VAR_2->mux;

 FUNC_3(&VAR_3->lock);


 VAR_4 = VAR_2->tx_kcm;
 if (VAR_4 && !FUNC_5(VAR_4->tx_stopped))
  FUNC_0(VAR_0, &VAR_4->tx_work);

 FUNC_4(&VAR_3->lock);
out:
 FUNC_2(&VAR_1->sk_callback_lock);
}
