
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_sock {scalar_t__ ecn_flags; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_6__ {int tcp_flags; } ;
struct TYPE_4__ {int sysctl_tcp_ecn; } ;
struct TYPE_5__ {TYPE_1__ ipv4; } ;


 int FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 struct dst_entry* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct dst_entry const*,int ) ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_7(VAR_4);
 bool VAR_7 = FUNC_5(VAR_4);
 bool VAR_8 = FUNC_4(VAR_4)->ipv4.sysctl_tcp_ecn == 1 ||
  FUNC_6(VAR_4) || VAR_7;

 if (!VAR_8) {
  const struct dst_entry *VAR_9 = FUNC_2(VAR_4);

  if (VAR_9 && FUNC_3(VAR_9, VAR_0))
   VAR_8 = 1;
 }

 VAR_6->ecn_flags = 0;

 if (VAR_8) {
  FUNC_1(VAR_5)->tcp_flags |= VAR_2 | VAR_1;
  VAR_6->ecn_flags = VAR_3;
  if (FUNC_6(VAR_4) || VAR_7)
   FUNC_0(VAR_4);
 }
}
