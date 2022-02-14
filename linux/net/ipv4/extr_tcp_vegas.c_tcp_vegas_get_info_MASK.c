
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcpv_minrtt; int tcpv_rtt; int tcpv_rttcnt; int tcpv_enabled; } ;
union tcp_cc_info {TYPE_1__ vegas; } ;
typedef int u32 ;
struct vegas {int minRTT; int baseRTT; int cntRTT; int doing_vegas_now; } ;
struct tcpvegas_info {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 struct vegas* FUNC_0 (struct sock*) ;

size_t FUNC_1(struct sock *VAR_1, u32 VAR_2, int *VAR_3,
     union tcp_cc_info *VAR_4)
{
 const struct vegas *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 & (1 << (VAR_0 - 1))) {
  VAR_4->vegas.tcpv_enabled = VAR_5->doing_vegas_now,
  VAR_4->vegas.tcpv_rttcnt = VAR_5->cntRTT,
  VAR_4->vegas.tcpv_rtt = VAR_5->baseRTT,
  VAR_4->vegas.tcpv_minrtt = VAR_5->minRTT,

  *VAR_3 = VAR_0;
  return sizeof(struct tcpvegas_info);
 }
 return 0;
}
