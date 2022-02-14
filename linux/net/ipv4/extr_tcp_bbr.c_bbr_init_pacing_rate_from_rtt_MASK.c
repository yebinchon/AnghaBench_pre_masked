
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tcp_sock {int srtt_us; scalar_t__ snd_cwnd; } ;
struct sock {int sk_pacing_rate; } ;
struct bbr {int has_seen_rtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 struct bbr* FUNC_2 (struct sock*) ;
 int FUNC_3 (int,unsigned int) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_4(VAR_3);
 struct bbr *VAR_5 = FUNC_2(VAR_3);
 u64 VAR_6;
 u32 VAR_7;

 if (VAR_4->srtt_us) {
  VAR_7 = FUNC_3(VAR_4->srtt_us >> 3, 1U);
  VAR_5->has_seen_rtt = 1;
 } else {
  VAR_7 = VAR_1;
 }
 VAR_6 = (u64)VAR_4->snd_cwnd * VAR_0;
 FUNC_1(VAR_6, VAR_7);
 VAR_3->sk_pacing_rate = FUNC_0(VAR_3, VAR_6, VAR_2);
}
