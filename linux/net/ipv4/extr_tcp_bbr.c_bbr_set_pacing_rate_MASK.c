
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ srtt_us; } ;
struct sock {unsigned long sk_pacing_rate; } ;
struct bbr {int has_seen_rtt; } ;


 unsigned long FUNC_0 (struct sock*,int ,int) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct bbr* FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0, u32 VAR_1, int VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_0);
 struct bbr *VAR_4 = FUNC_3(VAR_0);
 unsigned long VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (FUNC_5(!VAR_4->has_seen_rtt && VAR_3->srtt_us))
  FUNC_2(VAR_0);
 if (FUNC_1(VAR_0) || VAR_5 > VAR_0->sk_pacing_rate)
  VAR_0->sk_pacing_rate = VAR_5;
}
