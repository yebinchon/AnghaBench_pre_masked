
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_timewait_sock {int tw_last_oow_ack_time; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_timewait_sock {int dummy; } ;
typedef enum tcp_tw_status { ____Placeholder_tcp_tw_status } tcp_tw_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inet_timewait_sock*) ;
 int FUNC_1 (int ,struct sk_buff const*,int,int *) ;
 struct tcp_timewait_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct inet_timewait_sock*) ;

__attribute__((used)) static enum tcp_tw_status
FUNC_4(struct inet_timewait_sock *VAR_2,
      const struct sk_buff *VAR_3, int VAR_4)
{
 struct tcp_timewait_sock *VAR_5 = FUNC_2((struct sock *)VAR_2);

 if (!FUNC_1(FUNC_3(VAR_2), VAR_3, VAR_4,
      &VAR_5->tw_last_oow_ack_time)) {



  return VAR_0;
 }


 FUNC_0(VAR_2);
 return VAR_1;
}
