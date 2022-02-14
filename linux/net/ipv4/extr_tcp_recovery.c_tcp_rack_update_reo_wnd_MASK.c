
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int reo_wnd_steps; int reo_wnd_persist; int last_delivered; scalar_t__ dsack_seen; } ;
struct tcp_sock {TYPE_2__ rack; int delivered; } ;
struct sock {int dummy; } ;
struct rate_sample {int prior_delivered; } ;
struct TYPE_4__ {int sysctl_tcp_recovery; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int VAR_2 ;

void FUNC_4(struct sock *VAR_3, struct rate_sample *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_3(VAR_3);

 if (FUNC_2(VAR_3)->ipv4.sysctl_tcp_recovery & VAR_1 ||
     !VAR_4->prior_delivered)
  return;


 if (FUNC_0(VAR_4->prior_delivered, VAR_5->rack.last_delivered))
  VAR_5->rack.dsack_seen = 0;


 if (VAR_5->rack.dsack_seen) {
  VAR_5->rack.reo_wnd_steps = FUNC_1(VAR_2, 0xFF,
            VAR_5->rack.reo_wnd_steps + 1);
  VAR_5->rack.dsack_seen = 0;
  VAR_5->rack.last_delivered = VAR_5->delivered;
  VAR_5->rack.reo_wnd_persist = VAR_0;
 } else if (!VAR_5->rack.reo_wnd_persist) {
  VAR_5->rack.reo_wnd_steps = 1;
 }
}
