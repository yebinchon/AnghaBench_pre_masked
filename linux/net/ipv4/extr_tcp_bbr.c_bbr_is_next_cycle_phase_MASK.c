
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {int delivered_mstamp; } ;
struct sock {int dummy; } ;
struct rate_sample {scalar_t__ losses; int prior_in_flight; } ;
struct bbr {scalar_t__ min_rtt_us; scalar_t__ pacing_gain; int cycle_mstamp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;
 struct bbr* FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct sock *VAR_1,
        const struct rate_sample *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_1);
 struct bbr *VAR_4 = FUNC_3(VAR_1);
 bool VAR_5 =
  FUNC_5(VAR_3->delivered_mstamp, VAR_4->cycle_mstamp) >
  VAR_4->min_rtt_us;
 u32 VAR_6, VAR_7;




 if (VAR_4->pacing_gain == VAR_0)
  return VAR_5;

 VAR_6 = FUNC_2(VAR_1, VAR_2->prior_in_flight);
 VAR_7 = FUNC_1(VAR_1);






 if (VAR_4->pacing_gain > VAR_0)
  return VAR_5 &&
   (VAR_2->losses ||
    VAR_6 >= FUNC_0(VAR_1, VAR_7, VAR_4->pacing_gain));





 return VAR_5 ||
  VAR_6 <= FUNC_0(VAR_1, VAR_7, VAR_0);
}
