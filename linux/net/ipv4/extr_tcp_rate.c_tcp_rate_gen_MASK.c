
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_3__ {int sack_ok; } ;
struct tcp_sock {int delivered; int rate_interval_us; int rate_delivered; scalar_t__ rate_app_limited; TYPE_1__ rx_opt; int tcp_mstamp; int delivered_mstamp; scalar_t__ app_limited; } ;
struct sock {int dummy; } ;
struct rate_sample {int delivered; int interval_us; int prior_delivered; scalar_t__ is_app_limited; int is_retrans; void* rcv_interval_us; void* snd_interval_us; int prior_mstamp; void* losses; void* acked_sacked; } ;
struct TYPE_4__ {int icsk_ca_state; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (char*,int,int,int ,int ,int) ;
 int FUNC_4 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 void* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct sock *VAR_0, u32 VAR_1, u32 VAR_2,
    bool VAR_3, struct rate_sample *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_5(VAR_0);
 u32 VAR_6, VAR_7;


 if (VAR_5->app_limited && FUNC_0(VAR_5->delivered, VAR_5->app_limited))
  VAR_5->app_limited = 0;





 if (VAR_1)
  VAR_5->delivered_mstamp = VAR_5->tcp_mstamp;

 VAR_4->acked_sacked = VAR_1;
 VAR_4->losses = VAR_2;





 if (!VAR_4->prior_mstamp || VAR_3) {
  VAR_4->delivered = -1;
  VAR_4->interval_us = -1;
  return;
 }
 VAR_4->delivered = VAR_5->delivered - VAR_4->prior_delivered;






 VAR_6 = VAR_4->interval_us;
 VAR_7 = FUNC_6(VAR_5->tcp_mstamp,
        VAR_4->prior_mstamp);
 VAR_4->interval_us = FUNC_2(VAR_6, VAR_7);


 VAR_4->snd_interval_us = VAR_6;
 VAR_4->rcv_interval_us = VAR_7;
 if (FUNC_7(VAR_4->interval_us < FUNC_4(VAR_5))) {
  if (!VAR_4->is_retrans)
   FUNC_3("tcp rate: %ld %d %u %u %u\n",
     VAR_4->interval_us, VAR_4->delivered,
     FUNC_1(VAR_0)->icsk_ca_state,
     VAR_5->rx_opt.sack_ok, FUNC_4(VAR_5));
  VAR_4->interval_us = -1;
  return;
 }


 if (!VAR_4->is_app_limited ||
     ((u64)VAR_4->delivered * VAR_5->rate_interval_us >=
      (u64)VAR_5->rate_delivered * VAR_4->interval_us)) {
  VAR_5->rate_delivered = VAR_4->delivered;
  VAR_5->rate_interval_us = VAR_4->interval_us;
  VAR_5->rate_app_limited = VAR_4->is_app_limited;
 }
}
