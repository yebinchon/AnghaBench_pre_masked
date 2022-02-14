
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcpv_enabled; void* tcpv_minrtt; void* tcpv_rtt; scalar_t__ tcpv_rttcnt; } ;
union tcp_cc_info {TYPE_1__ vegas; } ;
typedef int u32 ;
struct westwood {int rtt_min; int rtt; } ;
struct tcpvegas_info {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 struct westwood* FUNC_0 (struct sock*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(struct sock *VAR_1, u32 VAR_2, int *VAR_3,
    union tcp_cc_info *VAR_4)
{
 const struct westwood *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 & (1 << (VAR_0 - 1))) {
  VAR_4->vegas.tcpv_enabled = 1;
  VAR_4->vegas.tcpv_rttcnt = 0;
  VAR_4->vegas.tcpv_rtt = FUNC_1(VAR_5->rtt);
  VAR_4->vegas.tcpv_minrtt = FUNC_1(VAR_5->rtt_min);

  *VAR_3 = VAR_0;
  return sizeof(struct tcpvegas_info);
 }
 return 0;
}
