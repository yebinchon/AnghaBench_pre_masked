
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_rtt_storage {int icsk_retransmits; int delivered_ce; int delivered; int dsack_dups; int invoked; } ;
struct bpf_tcp_sock {int icsk_retransmits; int delivered_ce; int delivered; int dsack_dups; } ;
struct bpf_sock_ops {struct bpf_sock* sk; scalar_t__ op; } ;
struct bpf_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tcp_rtt_storage* FUNC_0 (int *,struct bpf_sock*,int ,int ) ;
 int FUNC_1 (struct bpf_sock_ops*,int ) ;
 struct bpf_tcp_sock* FUNC_2 (struct bpf_sock*) ;
 int VAR_4 ;

int FUNC_3(struct bpf_sock_ops *VAR_5)
{
 struct tcp_rtt_storage *VAR_6;
 struct bpf_tcp_sock *VAR_7;
 int VAR_8 = (int) VAR_5->op;
 struct bpf_sock *VAR_9;

 VAR_9 = VAR_5->sk;
 if (!VAR_9)
  return 1;

 VAR_6 = FUNC_0(&VAR_4, VAR_9, 0,
         VAR_0);
 if (!VAR_6)
  return 1;

 if (VAR_8 == VAR_3) {
  FUNC_1(VAR_5, VAR_2);
  return 1;
 }

 if (VAR_8 != VAR_1)
  return 1;

 VAR_7 = FUNC_2(VAR_9);
 if (!VAR_7)
  return 1;

 VAR_6->invoked++;

 VAR_6->dsack_dups = VAR_7->dsack_dups;
 VAR_6->delivered = VAR_7->delivered;
 VAR_6->delivered_ce = VAR_7->delivered_ce;
 VAR_6->icsk_retransmits = VAR_7->icsk_retransmits;

 return 1;
}
