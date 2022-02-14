
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tcphdr {int dummy; } ;
struct TYPE_5__ {int user_mss; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct tcp_request_sock_ops {scalar_t__ mss_clamp; } ;
struct sock {int dummy; } ;
struct request_sock_ops {int slab_name; } ;
struct TYPE_6__ {int sysctl_tcp_syncookies; } ;
struct TYPE_7__ {TYPE_2__ ipv4; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct tcphdr*,int ) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

u16 FUNC_7(struct request_sock_ops *VAR_1,
     const struct tcp_request_sock_ops *VAR_2,
     struct sock *VAR_3, struct tcphdr *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_5(VAR_3);
 u16 VAR_6;

 if (FUNC_3(VAR_3)->ipv4.sysctl_tcp_syncookies != 2 &&
     !FUNC_1(VAR_3))
  return 0;

 if (!FUNC_6(VAR_3, VAR_1->slab_name))
  return 0;

 if (FUNC_2(VAR_3)) {
  FUNC_0(FUNC_3(VAR_3), VAR_0);
  return 0;
 }

 VAR_6 = FUNC_4(VAR_4, VAR_5->rx_opt.user_mss);
 if (!VAR_6)
  VAR_6 = VAR_2->mss_clamp;

 return VAR_6;
}
