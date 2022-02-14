
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_tx_sock {int tx_no_feedback_timer; struct sock* sk; int * tx_hist; int tx_state; } ;
struct ccid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ccid3_hc_tx_sock* FUNC_0 (struct ccid*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ccid *VAR_2, struct sock *VAR_3)
{
 struct ccid3_hc_tx_sock *VAR_4 = FUNC_0(VAR_2);

 VAR_4->tx_state = VAR_0;
 VAR_4->tx_hist = ((void*)0);
 VAR_4->sk = VAR_3;
 FUNC_1(&VAR_4->tx_no_feedback_timer,
      VAR_1, 0);
 return 0;
}
