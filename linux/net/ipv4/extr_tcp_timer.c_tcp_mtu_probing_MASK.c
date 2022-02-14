
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {int sysctl_tcp_min_snd_mss; int sysctl_tcp_mtu_probe_floor; int sysctl_tcp_base_mss; int sysctl_tcp_mtu_probing; } ;
struct net {TYPE_1__ ipv4; } ;
struct TYPE_4__ {int enabled; int search_low; int probe_timestamp; } ;
struct inet_connection_sock {int icsk_pmtu_cookie; TYPE_2__ icsk_mtup; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 struct net* FUNC_2 (struct sock*) ;
 int VAR_0 ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct inet_connection_sock *VAR_1, struct sock *VAR_2)
{
 const struct net *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;


 if (!VAR_3->ipv4.sysctl_tcp_mtu_probing)
  return;

 if (!VAR_1->icsk_mtup.enabled) {
  VAR_1->icsk_mtup.enabled = 1;
  VAR_1->icsk_mtup.probe_timestamp = VAR_0;
 } else {
  VAR_4 = FUNC_4(VAR_2, VAR_1->icsk_mtup.search_low) >> 1;
  VAR_4 = FUNC_1(VAR_3->ipv4.sysctl_tcp_base_mss, VAR_4);
  VAR_4 = FUNC_0(VAR_4, VAR_3->ipv4.sysctl_tcp_mtu_probe_floor);
  VAR_4 = FUNC_0(VAR_4, VAR_3->ipv4.sysctl_tcp_min_snd_mss);
  VAR_1->icsk_mtup.search_low = FUNC_3(VAR_2, VAR_4);
 }
 FUNC_5(VAR_2, VAR_1->icsk_pmtu_cookie);
}
