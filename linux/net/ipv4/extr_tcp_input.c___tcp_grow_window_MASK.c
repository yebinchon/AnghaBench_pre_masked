
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcp_sock {int rcv_ssthresh; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; int truesize; } ;
struct TYPE_5__ {int rcv_mss; } ;
struct TYPE_8__ {TYPE_1__ icsk_ack; } ;
struct TYPE_6__ {int * sysctl_tcp_rmem; } ;
struct TYPE_7__ {TYPE_2__ ipv4; } ;


 TYPE_4__* FUNC_0 (struct sock const*) ;
 TYPE_3__* FUNC_1 (struct sock const*) ;
 struct tcp_sock* FUNC_2 (struct sock const*) ;
 int FUNC_3 (struct sock const*,int ) ;

__attribute__((used)) static int FUNC_4(const struct sock *VAR_0, const struct sk_buff *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_2(VAR_0);

 int VAR_3 = FUNC_3(VAR_0, VAR_1->truesize) >> 1;
 int VAR_4 = FUNC_3(VAR_0, FUNC_1(VAR_0)->ipv4.sysctl_tcp_rmem[2]) >> 1;

 while (VAR_2->rcv_ssthresh <= VAR_4) {
  if (VAR_3 <= VAR_1->len)
   return 2 * FUNC_0(VAR_0)->icsk_ack.rcv_mss;

  VAR_3 >>= 1;
  VAR_4 >>= 1;
 }
 return 0;
}
