
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct tcp_sock {unsigned int lost; unsigned int delivered; int delivered_mstamp; } ;
struct sock {int dummy; } ;
struct rate_sample {int losses; scalar_t__ is_app_limited; } ;
struct bbr {scalar_t__ mode; scalar_t__ lt_rtt_cnt; int lt_is_sampling; unsigned int lt_last_lost; unsigned int lt_last_delivered; unsigned int lt_last_stamp; scalar_t__ round_start; scalar_t__ lt_use_bw; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sock*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 unsigned int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int,unsigned int) ;
 struct bbr* FUNC_6 (struct sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_7, const struct rate_sample *VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_7(VAR_7);
 struct bbr *VAR_10 = FUNC_6(VAR_7);
 u32 VAR_11, VAR_12;
 u64 VAR_13;
 u32 VAR_14;

 if (VAR_10->lt_use_bw) {
  if (VAR_10->mode == VAR_0 && VAR_10->round_start &&
      ++VAR_10->lt_rtt_cnt >= VAR_4) {
   FUNC_1(VAR_7);
   FUNC_3(VAR_7);
  }
  return;
 }





 if (!VAR_10->lt_is_sampling) {
  if (!VAR_8->losses)
   return;
  FUNC_2(VAR_7);
  VAR_10->lt_is_sampling = 1;
 }


 if (VAR_8->is_app_limited) {
  FUNC_1(VAR_7);
  return;
 }

 if (VAR_10->round_start)
  VAR_10->lt_rtt_cnt++;
 if (VAR_10->lt_rtt_cnt < VAR_5)
  return;
 if (VAR_10->lt_rtt_cnt > 4 * VAR_5) {
  FUNC_1(VAR_7);
  return;
 }





 if (!VAR_8->losses)
  return;


 VAR_11 = VAR_9->lost - VAR_10->lt_last_lost;
 VAR_12 = VAR_9->delivered - VAR_10->lt_last_delivered;

 if (!VAR_12 || (VAR_11 << VAR_1) < VAR_6 * VAR_12)
  return;


 VAR_14 = FUNC_4(VAR_9->delivered_mstamp, VAR_3) - VAR_10->lt_last_stamp;
 if ((s32)VAR_14 < 1)
  return;

 if (VAR_14 >= ~0U / VAR_3) {
  FUNC_1(VAR_7);
  return;
 }
 VAR_14 *= VAR_3;
 VAR_13 = (u64)VAR_12 * VAR_2;
 FUNC_5(VAR_13, VAR_14);
 FUNC_0(VAR_7, VAR_13);
}
