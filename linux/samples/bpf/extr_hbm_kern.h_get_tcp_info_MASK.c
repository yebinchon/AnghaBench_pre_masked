
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hbm_pkt_info {int rtt; int packets_out; int cwnd; } ;
struct bpf_tcp_sock {int srtt_us; int packets_out; int snd_cwnd; } ;
struct bpf_sock {scalar_t__ protocol; } ;
struct __sk_buff {struct bpf_sock* sk; } ;


 scalar_t__ VAR_0 ;
 struct bpf_sock* FUNC_0 (struct bpf_sock*) ;
 struct bpf_tcp_sock* FUNC_1 (struct bpf_sock*) ;

__attribute__((used)) static int FUNC_2(struct __sk_buff *VAR_1, struct hbm_pkt_info *VAR_2)
{
 struct bpf_sock *VAR_3;
 struct bpf_tcp_sock *VAR_4;

 VAR_3 = VAR_1->sk;
 if (VAR_3) {
  VAR_3 = FUNC_0(VAR_3);
  if (VAR_3) {
   if (VAR_3->protocol == VAR_0) {
    VAR_4 = FUNC_1(VAR_3);
    if (VAR_4) {
     VAR_2->cwnd = VAR_4->snd_cwnd;
     VAR_2->rtt = VAR_4->srtt_us >> 3;
     VAR_2->packets_out = VAR_4->packets_out;
     return 0;
    }
   }
  }
 }
 VAR_2->cwnd = 0;
 VAR_2->rtt = 0;
 VAR_2->packets_out = 0;
 return 1;
}
