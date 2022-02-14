
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {scalar_t__ ack_pf; scalar_t__ ack_must_be_send; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 struct llc_sock* FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_sock *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 if (VAR_2->ack_must_be_send) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  VAR_2->ack_must_be_send = 0 ;
  VAR_2->ack_pf = 0;
 } else {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
 }

 return VAR_3;
}
