
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_tcp_sock {int icsk_retransmits; int delivered_ce; int delivered; int dsack_dups; } ;
struct bpf_sock_ops {int op; struct bpf_sock* sk; } ;
struct bpf_sock {int dummy; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__* FUNC_2 (int *,struct bpf_sock*,int ,int ) ;
 int FUNC_3 (struct bpf_sock_ops*,int ) ;
 struct bpf_tcp_sock* FUNC_4 (struct bpf_sock*) ;

int FUNC_5(struct bpf_sock_ops *VAR_4)
{
 struct bpf_tcp_sock *VAR_5;
 struct bpf_sock *VAR_6;
 __u64 *VAR_7;
 __u64 VAR_8;

 switch (VAR_4->op) {
 case 128:
  FUNC_3(VAR_4, VAR_1);
  return 1;
 case 129:
  break;
 default:
  return 1;
 }

 VAR_6 = VAR_4->sk;
 if (!VAR_6)
  return 1;

 VAR_7 = FUNC_2(&VAR_3, VAR_6, 0,
           VAR_0);
 if (!VAR_7)
  return 1;

 VAR_8 = FUNC_0();
 if (VAR_8 < *VAR_7)
  return 1;

 VAR_5 = FUNC_4(VAR_6);
 if (!VAR_5)
  return 1;

 *VAR_7 = VAR_8 + VAR_2;

 FUNC_1("dsack_dups=%u delivered=%u\n",
     VAR_5->dsack_dups, VAR_5->delivered);
 FUNC_1("delivered_ce=%u icsk_retransmits=%u\n",
     VAR_5->delivered_ce, VAR_5->icsk_retransmits);

 return 1;
}
