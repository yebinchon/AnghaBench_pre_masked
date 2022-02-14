
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ time; scalar_t__ seq; } ;
struct tcp_sock {scalar_t__ tcp_mstamp; TYPE_1__ rcv_rtt_est; scalar_t__ rcv_wnd; scalar_t__ rcv_nxt; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tcp_sock*,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct tcp_sock *VAR_0)
{
 u32 VAR_1;

 if (VAR_0->rcv_rtt_est.time == 0)
  goto new_measure;
 if (FUNC_0(VAR_0->rcv_nxt, VAR_0->rcv_rtt_est.seq))
  return;
 VAR_1 = FUNC_2(VAR_0->tcp_mstamp, VAR_0->rcv_rtt_est.time);
 if (!VAR_1)
  VAR_1 = 1;
 FUNC_1(VAR_0, VAR_1, 1);

new_measure:
 VAR_0->rcv_rtt_est.seq = VAR_0->rcv_nxt + VAR_0->rcv_wnd;
 VAR_0->rcv_rtt_est.time = VAR_0->tcp_mstamp;
}
