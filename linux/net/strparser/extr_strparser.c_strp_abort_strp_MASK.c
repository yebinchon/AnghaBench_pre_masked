
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strparser {int stopped; struct sock* sk; int msg_timer_work; } ;
struct sock {int sk_err; int (* sk_error_report ) (struct sock*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct strparser *VAR_0, int VAR_1)
{


 FUNC_0(&VAR_0->msg_timer_work);

 if (VAR_0->stopped)
  return;

 VAR_0->stopped = 1;

 if (VAR_0->sk) {
  struct sock *VAR_2 = VAR_0->sk;


  VAR_2->sk_err = -VAR_1;
  VAR_2->sk_error_report(VAR_2);
 }
}
