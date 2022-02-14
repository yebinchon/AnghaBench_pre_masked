
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tcp_sock {int delivered; } ;
struct sock {int dummy; } ;
struct rate_sample {scalar_t__ delivered; int is_app_limited; int interval_us; int prior_delivered; } ;
struct bbr {int round_start; int rtt_cnt; int bw; scalar_t__ packet_conservation; int next_rtt_delivered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct rate_sample const*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 struct bbr* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,int ,int ,int) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, const struct rate_sample *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_6(VAR_2);
 struct bbr *VAR_5 = FUNC_4(VAR_2);
 u64 VAR_6;

 VAR_5->round_start = 0;
 if (VAR_3->delivered < 0 || VAR_3->interval_us <= 0)
  return;


 if (!FUNC_2(VAR_3->prior_delivered, VAR_5->next_rtt_delivered)) {
  VAR_5->next_rtt_delivered = VAR_4->delivered;
  VAR_5->rtt_cnt++;
  VAR_5->round_start = 1;
  VAR_5->packet_conservation = 0;
 }

 FUNC_0(VAR_2, VAR_3);





 VAR_6 = (u64)VAR_3->delivered * VAR_0;
 FUNC_3(VAR_6, VAR_3->interval_us);
 if (!VAR_3->is_app_limited || VAR_6 >= FUNC_1(VAR_2)) {

  FUNC_5(&VAR_5->bw, VAR_1, VAR_5->rtt_cnt, VAR_6);
 }
}
