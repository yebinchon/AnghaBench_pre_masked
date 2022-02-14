
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {scalar_t__ window_clamp; unsigned int advmss; int rcv_ssthresh; } ;
struct sock {scalar_t__ sk_rcvbuf; int sk_userlocks; int sk_rmem_alloc; } ;
struct TYPE_4__ {scalar_t__* sysctl_tcp_rmem; } ;
struct net {TYPE_2__ ipv4; } ;
struct TYPE_3__ {scalar_t__ quick; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 struct net* FUNC_6 (struct sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_7(VAR_1);
 struct inet_connection_sock *VAR_3 = FUNC_2(VAR_1);
 struct net *VAR_4 = FUNC_6(VAR_1);

 VAR_3->icsk_ack.quick = 0;

 if (VAR_1->sk_rcvbuf < VAR_4->ipv4.sysctl_tcp_rmem[2] &&
     !(VAR_1->sk_userlocks & VAR_0) &&
     !FUNC_8(VAR_1) &&
     FUNC_4(VAR_1) < FUNC_5(VAR_1, 0)) {
  FUNC_0(VAR_1->sk_rcvbuf,
      FUNC_3(FUNC_1(&VAR_1->sk_rmem_alloc),
          VAR_4->ipv4.sysctl_tcp_rmem[2]));
 }
 if (FUNC_1(&VAR_1->sk_rmem_alloc) > VAR_1->sk_rcvbuf)
  VAR_2->rcv_ssthresh = FUNC_3(VAR_2->window_clamp, 2U * VAR_2->advmss);
}
