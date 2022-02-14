
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_destruct; int sk_write_space; int sk_state; } ;
struct inet_connection_sock {int icsk_sync_mss; int icsk_syn_retries; int icsk_rto; } ;
struct dccp_sock {int dccps_mss_cache; int dccps_featneg; int dccps_tx_qlen; int dccps_service; int dccps_role; int dccps_rate_last; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int const) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_6(struct sock *VAR_10, const __u8 VAR_11)
{
 struct dccp_sock *VAR_12 = FUNC_3(VAR_10);
 struct inet_connection_sock *VAR_13 = FUNC_4(VAR_10);

 VAR_13->icsk_rto = VAR_3;
 VAR_13->icsk_syn_retries = VAR_8;
 VAR_10->sk_state = VAR_0;
 VAR_10->sk_write_space = VAR_6;
 VAR_10->sk_destruct = VAR_4;
 VAR_13->icsk_sync_mss = VAR_5;
 VAR_12->dccps_mss_cache = 536;
 VAR_12->dccps_rate_last = VAR_7;
 VAR_12->dccps_role = VAR_1;
 VAR_12->dccps_service = VAR_2;
 VAR_12->dccps_tx_qlen = VAR_9;

 FUNC_2(VAR_10);

 FUNC_0(&VAR_12->dccps_featneg);

 if (FUNC_5(VAR_11))
  return FUNC_1(VAR_10);
 return 0;
}
