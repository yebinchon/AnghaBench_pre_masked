
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int lost_out; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sacked; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tcp_sock*,struct sk_buff*) ;
 int FUNC_3 (struct tcp_sock*,struct sk_buff*) ;

void FUNC_4(struct tcp_sock *VAR_2, struct sk_buff *VAR_3)
{
 FUNC_3(VAR_2, VAR_3);

 FUNC_2(VAR_2, VAR_3);
 if (!(FUNC_0(VAR_3)->sacked & (VAR_0|VAR_1))) {
  VAR_2->lost_out += FUNC_1(VAR_3);
  FUNC_0(VAR_3)->sacked |= VAR_0;
 }
}
