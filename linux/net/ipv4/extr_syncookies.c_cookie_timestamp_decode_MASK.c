
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_options_received {int rcv_tsecr; int wscale_ok; int snd_wscale; int sack_ok; int saw_tstamp; } ;
struct TYPE_2__ {scalar_t__ sysctl_tcp_window_scaling; int sysctl_tcp_sack; int sysctl_tcp_timestamps; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tcp_options_received*) ;

bool FUNC_1(const struct net *VAR_3,
        struct tcp_options_received *VAR_4)
{

 u32 VAR_5 = VAR_4->rcv_tsecr;

 if (!VAR_4->saw_tstamp) {
  FUNC_0(VAR_4);
  return 1;
 }

 if (!VAR_3->ipv4.sysctl_tcp_timestamps)
  return 0;

 VAR_4->sack_ok = (VAR_5 & VAR_1) ? VAR_0 : 0;

 if (VAR_4->sack_ok && !VAR_3->ipv4.sysctl_tcp_sack)
  return 0;

 if ((VAR_5 & VAR_2) == VAR_2)
  return 1;

 VAR_4->wscale_ok = 1;
 VAR_4->snd_wscale = VAR_5 & VAR_2;

 return VAR_3->ipv4.sysctl_tcp_window_scaling != 0;
}
