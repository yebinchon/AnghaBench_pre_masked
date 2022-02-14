
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {int rtt_min; } ;
struct sock {int dummy; } ;
struct TYPE_3__ {scalar_t__ sysctl_tcp_min_rtt_wlen; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3, u32 VAR_4, const int VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_3)->ipv4.sysctl_tcp_min_rtt_wlen * VAR_1;
 struct tcp_sock *VAR_7 = FUNC_4(VAR_3);

 if ((VAR_5 & VAR_0) && VAR_4 > FUNC_3(VAR_7)) {




  return;
 }
 FUNC_1(&VAR_7->rtt_min, VAR_6, VAR_2,
      VAR_4 ? : FUNC_0(1));
}
