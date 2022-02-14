
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct bictcp {scalar_t__ ack_cnt; scalar_t__ last_cwnd; scalar_t__ last_time; scalar_t__ epoch_start; scalar_t__ tcp_cwnd; scalar_t__ last_max_cwnd; int bic_K; scalar_t__ bic_origin_point; int delay_min; int cnt; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline void FUNC_4(struct bictcp *VAR_7, u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 u64 VAR_13, VAR_14;

 VAR_7->ack_cnt += VAR_9;

 if (VAR_7->last_cwnd == VAR_8 &&
     (s32)(VAR_6 - VAR_7->last_time) <= VAR_1 / 32)
  return;





 if (VAR_7->epoch_start && VAR_6 == VAR_7->last_time)
  goto tcp_friendliness;

 VAR_7->last_cwnd = VAR_8;
 VAR_7->last_time = VAR_6;

 if (VAR_7->epoch_start == 0) {
  VAR_7->epoch_start = VAR_6;
  VAR_7->ack_cnt = VAR_9;
  VAR_7->tcp_cwnd = VAR_8;

  if (VAR_7->last_max_cwnd <= VAR_8) {
   VAR_7->bic_K = 0;
   VAR_7->bic_origin_point = VAR_8;
  } else {



   VAR_7->bic_K = FUNC_0(VAR_3
            * (VAR_7->last_max_cwnd - VAR_8));
   VAR_7->bic_origin_point = VAR_7->last_max_cwnd;
  }
 }
 VAR_14 = (s32)(VAR_6 - VAR_7->epoch_start);
 VAR_14 += FUNC_3(VAR_7->delay_min >> 3);

 VAR_14 <<= VAR_0;
 FUNC_1(VAR_14, VAR_1);

 if (VAR_14 < VAR_7->bic_K)
  VAR_13 = VAR_7->bic_K - VAR_14;
 else
  VAR_13 = VAR_14 - VAR_7->bic_K;


 VAR_10 = (VAR_4 * VAR_13 * VAR_13 * VAR_13) >> (10+3*VAR_0);
 if (VAR_14 < VAR_7->bic_K)
  VAR_11 = VAR_7->bic_origin_point - VAR_10;
 else
  VAR_11 = VAR_7->bic_origin_point + VAR_10;


 if (VAR_11 > VAR_8) {
  VAR_7->cnt = VAR_8 / (VAR_11 - VAR_8);
 } else {
  VAR_7->cnt = 100 * VAR_8;
 }





 if (VAR_7->last_max_cwnd == 0 && VAR_7->cnt > 20)
  VAR_7->cnt = 20;

tcp_friendliness:

 if (VAR_5) {
  u32 VAR_15 = VAR_2;

  VAR_10 = (VAR_8 * VAR_15) >> 3;
  while (VAR_7->ack_cnt > VAR_10) {
   VAR_7->ack_cnt -= VAR_10;
   VAR_7->tcp_cwnd++;
  }

  if (VAR_7->tcp_cwnd > VAR_8) {
   VAR_10 = VAR_7->tcp_cwnd - VAR_8;
   VAR_12 = VAR_8 / VAR_10;
   if (VAR_7->cnt > VAR_12)
    VAR_7->cnt = VAR_12;
  }
 }




 VAR_7->cnt = FUNC_2(VAR_7->cnt, 2U);
}
