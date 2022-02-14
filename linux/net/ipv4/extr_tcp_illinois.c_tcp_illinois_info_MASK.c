
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcpv_enabled; scalar_t__ tcpv_rtt; int tcpv_rttcnt; int tcpv_minrtt; } ;
union tcp_cc_info {TYPE_1__ vegas; } ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct tcpvegas_info {int dummy; } ;
struct sock {int dummy; } ;
struct illinois {scalar_t__ sum_rtt; int base_rtt; int cnt_rtt; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 struct illinois* FUNC_1 (struct sock*) ;

__attribute__((used)) static size_t FUNC_2(struct sock *VAR_1, u32 VAR_2, int *VAR_3,
    union tcp_cc_info *VAR_4)
{
 const struct illinois *VAR_5 = FUNC_1(VAR_1);

 if (VAR_2 & (1 << (VAR_0 - 1))) {
  VAR_4->vegas.tcpv_enabled = 1;
  VAR_4->vegas.tcpv_rttcnt = VAR_5->cnt_rtt;
  VAR_4->vegas.tcpv_minrtt = VAR_5->base_rtt;
  VAR_4->vegas.tcpv_rtt = 0;

  if (VAR_4->vegas.tcpv_rttcnt > 0) {
   u64 VAR_6 = VAR_5->sum_rtt;

   FUNC_0(VAR_6, VAR_4->vegas.tcpv_rttcnt);
   VAR_4->vegas.tcpv_rtt = VAR_6;
  }
  *VAR_3 = VAR_0;
  return sizeof(struct tcpvegas_info);
 }
 return 0;
}
