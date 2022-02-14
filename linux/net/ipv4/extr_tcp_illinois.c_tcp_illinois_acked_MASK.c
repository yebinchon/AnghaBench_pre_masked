
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct illinois {scalar_t__ base_rtt; scalar_t__ max_rtt; int sum_rtt; int cnt_rtt; int acked; } ;
struct ack_sample {scalar_t__ rtt_us; int pkts_acked; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 struct illinois* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1, const struct ack_sample *VAR_2)
{
 struct illinois *VAR_3 = FUNC_0(VAR_1);
 s32 VAR_4 = VAR_2->rtt_us;

 VAR_3->acked = VAR_2->pkts_acked;


 if (VAR_4 < 0)
  return;


 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;


 if (VAR_3->base_rtt > VAR_4)
  VAR_3->base_rtt = VAR_4;


 if (VAR_3->max_rtt < VAR_4)
  VAR_3->max_rtt = VAR_4;

 ++VAR_3->cnt_rtt;
 VAR_3->sum_rtt += VAR_4;
}
