
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tcp_fastopen_cookie {scalar_t__ len; int exp; } ;
struct tcp_fastopen_metrics {int try_exp; struct tcp_fastopen_cookie cookie; scalar_t__ mss; } ;
struct tcp_metrics_block {struct tcp_fastopen_metrics tcpm_fastopen; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 struct tcp_metrics_block* FUNC_5 (struct sock*,int ,int) ;

void FUNC_6(struct sock *VAR_1, u16 *VAR_2,
       struct tcp_fastopen_cookie *VAR_3)
{
 struct tcp_metrics_block *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_5(VAR_1, FUNC_0(VAR_1), 0);
 if (VAR_4) {
  struct tcp_fastopen_metrics *VAR_5 = &VAR_4->tcpm_fastopen;
  unsigned int VAR_6;

  do {
   VAR_6 = FUNC_3(&VAR_0);
   if (VAR_5->mss)
    *VAR_2 = VAR_5->mss;
   *VAR_3 = VAR_5->cookie;
   if (VAR_3->len <= 0 && VAR_5->try_exp == 1)
    VAR_3->exp = 1;
  } while (FUNC_4(&VAR_0, VAR_6));
 }
 FUNC_2();
}
