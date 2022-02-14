
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct rate_sample {scalar_t__ is_app_limited; } ;
struct bbr {int full_bw; scalar_t__ full_bw_cnt; int full_bw_reached; int round_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*) ;
 struct bbr* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_3,
          const struct rate_sample *VAR_4)
{
 struct bbr *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6;

 if (FUNC_0(VAR_3) || !VAR_5->round_start || VAR_4->is_app_limited)
  return;

 VAR_6 = (u64)VAR_5->full_bw * VAR_2 >> VAR_0;
 if (FUNC_1(VAR_3) >= VAR_6) {
  VAR_5->full_bw = FUNC_1(VAR_3);
  VAR_5->full_bw_cnt = 0;
  return;
 }
 ++VAR_5->full_bw_cnt;
 VAR_5->full_bw_reached = VAR_5->full_bw_cnt >= VAR_1;
}
