
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int reo_wnd_steps; } ;
struct tcp_sock {scalar_t__ sacked_out; scalar_t__ reordering; int srtt_us; TYPE_1__ rack; int reord_seen; } ;
struct sock {int dummy; } ;
struct TYPE_8__ {scalar_t__ icsk_ca_state; } ;
struct TYPE_6__ {int sysctl_tcp_recovery; } ;
struct TYPE_7__ {TYPE_2__ ipv4; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sock const*) ;
 int FUNC_1 (int,int) ;
 TYPE_3__* FUNC_2 (struct sock const*) ;
 int FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock const*) ;

__attribute__((used)) static u32 FUNC_5(const struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_2);

 if (!VAR_3->reord_seen) {



  if (FUNC_0(VAR_2)->icsk_ca_state >= VAR_0)
   return 0;

  if (VAR_3->sacked_out >= VAR_3->reordering &&
      !(FUNC_2(VAR_2)->ipv4.sysctl_tcp_recovery & VAR_1))
   return 0;
 }







 return FUNC_1((FUNC_3(VAR_3) >> 2) * VAR_3->rack.reo_wnd_steps,
     VAR_3->srtt_us >> 3);
}
