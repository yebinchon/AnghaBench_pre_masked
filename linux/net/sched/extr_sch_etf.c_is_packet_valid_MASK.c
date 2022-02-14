
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_clockid; scalar_t__ sk_txtime_deadline_mode; } ;
struct sk_buff {struct sock* sk; int tstamp; } ;
struct etf_sched_data {scalar_t__ clockid; scalar_t__ deadline_mode; int last; int (* get_time ) () ;scalar_t__ skip_sock_check; } ;
struct Qdisc {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct etf_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct etf_sched_data *VAR_3 = FUNC_1(VAR_1);
 ktime_t VAR_4 = VAR_2->tstamp;
 struct sock *VAR_5 = VAR_2->sk;
 ktime_t VAR_6;

 if (VAR_3->skip_sock_check)
  goto skip;

 if (!VAR_5)
  return 0;

 if (!FUNC_2(VAR_5, VAR_0))
  return 0;




 if (VAR_5->sk_clockid != VAR_3->clockid)
  return 0;

 if (VAR_5->sk_txtime_deadline_mode != VAR_3->deadline_mode)
  return 0;

skip:
 VAR_6 = VAR_3->get_time();
 if (FUNC_0(VAR_4, VAR_6) || FUNC_0(VAR_4, VAR_3->last))
  return 0;

 return 1;
}
