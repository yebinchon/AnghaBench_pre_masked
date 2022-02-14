
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int ack_pf; int ack_must_be_send; int first_pdu_Ns; int vR; int npta; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int*) ;
 struct llc_sock* FUNC_3 (struct sock*) ;

int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 u8 VAR_3;
 struct llc_sock *VAR_4 = FUNC_3(VAR_1);

 FUNC_2(VAR_2, &VAR_3);
 VAR_4->ack_pf |= VAR_3 & 1;
 if (!VAR_4->ack_must_be_send) {
  VAR_4->first_pdu_Ns = VAR_4->vR;
  VAR_4->ack_must_be_send = 1;
  VAR_4->ack_pf = VAR_3 & 1;
 }
 if (((VAR_4->vR - VAR_4->first_pdu_Ns + 1 + VAR_0)
   % VAR_0) >= VAR_4->npta) {
  FUNC_1(VAR_1, VAR_2);
  VAR_4->ack_must_be_send = 0;
  VAR_4->ack_pf = 0;
  FUNC_0(VAR_1, VAR_2);
 }
 return 0;
}
