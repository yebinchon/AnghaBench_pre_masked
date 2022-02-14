
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int tcp_flags; } ;
struct TYPE_4__ {scalar_t__ sysctl_tcp_ecn_fallback; } ;
struct TYPE_5__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 if (FUNC_1(VAR_2)->ipv4.sysctl_tcp_ecn_fallback)



  FUNC_0(VAR_3)->tcp_flags &= ~(VAR_1 | VAR_0);
}
