
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tcp_fastopen_cookie {scalar_t__ len; int exp; } ;
struct tcp_fastopen_metrics {scalar_t__ try_exp; scalar_t__ syn_loss; int last_syn_loss; struct tcp_fastopen_cookie cookie; scalar_t__ mss; } ;
struct tcp_metrics_block {struct tcp_fastopen_metrics tcpm_fastopen; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;


 struct dst_entry* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct tcp_metrics_block* FUNC_3 (struct sock*,struct dst_entry*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sock *VAR_2, u16 VAR_3,
       struct tcp_fastopen_cookie *VAR_4, bool VAR_5,
       u16 VAR_6)
{
 struct dst_entry *VAR_7 = FUNC_0(VAR_2);
 struct tcp_metrics_block *VAR_8;

 if (!VAR_7)
  return;
 FUNC_1();
 VAR_8 = FUNC_3(VAR_2, VAR_7, 1);
 if (VAR_8) {
  struct tcp_fastopen_metrics *VAR_9 = &VAR_8->tcpm_fastopen;

  FUNC_4(&VAR_0);
  if (VAR_3)
   VAR_9->mss = VAR_3;
  if (VAR_4 && VAR_4->len > 0)
   VAR_9->cookie = *VAR_4;
  else if (VAR_6 > VAR_9->try_exp &&
    VAR_9->cookie.len <= 0 && !VAR_9->cookie.exp)
   VAR_9->try_exp = VAR_6;
  if (VAR_5) {
   ++VAR_9->syn_loss;
   VAR_9->last_syn_loss = VAR_1;
  } else
   VAR_9->syn_loss = 0;
  FUNC_5(&VAR_0);
 }
 FUNC_2();
}
