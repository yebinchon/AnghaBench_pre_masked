
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ packets_out; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ sysctl_tcp_retries2; } ;
struct net {TYPE_1__ ipv4; } ;
struct inet_connection_sock {scalar_t__ icsk_backoff; scalar_t__ icsk_probes_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct net* FUNC_1 (struct sock*) ;
 unsigned long FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,int ,unsigned long,int ,int *) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

void FUNC_7(struct sock *VAR_4)
{
 struct inet_connection_sock *VAR_5 = FUNC_0(VAR_4);
 struct tcp_sock *VAR_6 = FUNC_4(VAR_4);
 struct net *VAR_7 = FUNC_1(VAR_4);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_4, VAR_1);

 if (VAR_6->packets_out || FUNC_5(VAR_4)) {

  VAR_5->icsk_probes_out = 0;
  VAR_5->icsk_backoff = 0;
  return;
 }

 VAR_5->icsk_probes_out++;
 if (VAR_9 <= 0) {
  if (VAR_5->icsk_backoff < VAR_7->ipv4.sysctl_tcp_retries2)
   VAR_5->icsk_backoff++;
  VAR_8 = FUNC_2(VAR_4, VAR_3);
 } else {



  VAR_8 = VAR_2;
 }
 FUNC_3(VAR_4, VAR_0, VAR_8, VAR_3, ((void*)0));
}
