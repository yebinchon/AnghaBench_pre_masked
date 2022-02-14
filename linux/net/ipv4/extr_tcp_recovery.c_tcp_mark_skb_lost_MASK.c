
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int retrans_out; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sacked; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tcp_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

void FUNC_6(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_3(VAR_2);

 FUNC_4(VAR_4, VAR_3);
 if (FUNC_1(VAR_3)->sacked & VAR_1) {

  FUNC_1(VAR_3)->sacked &= ~VAR_1;
  VAR_4->retrans_out -= FUNC_5(VAR_3);
  FUNC_0(FUNC_2(VAR_2), VAR_0,
         FUNC_5(VAR_3));
 }
}
