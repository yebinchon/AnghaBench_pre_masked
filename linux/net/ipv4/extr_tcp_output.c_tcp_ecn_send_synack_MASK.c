
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tcp_flags; } ;


 int FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 const struct tcp_sock *VAR_5 = FUNC_4(VAR_3);

 FUNC_1(VAR_4)->tcp_flags &= ~VAR_0;
 if (!(VAR_5->ecn_flags & VAR_2))
  FUNC_1(VAR_4)->tcp_flags &= ~VAR_1;
 else if (FUNC_3(VAR_3) ||
   FUNC_2(VAR_3))
  FUNC_0(VAR_3);
}
