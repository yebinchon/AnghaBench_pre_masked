
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_allocation; } ;
struct sk_buff {int dummy; } ;
struct nsp_conn_ack_msg {int msgflg; int dstaddr; } ;
struct dn_scp {int addrrem; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 struct sk_buff* FUNC_1 (struct sock*,int,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nsp_conn_ack_msg* FUNC_3 (struct sk_buff*,int) ;

void FUNC_4 (struct sock *VAR_0)
{
 struct dn_scp *VAR_1 = FUNC_0(VAR_0);
 struct sk_buff *VAR_2 = ((void*)0);
 struct nsp_conn_ack_msg *VAR_3;

 if ((VAR_2 = FUNC_1(VAR_0, 3, VAR_0->sk_allocation)) == ((void*)0))
  return;

 VAR_3 = FUNC_3(VAR_2, 3);
 VAR_3->msgflg = 0x24;
 VAR_3->dstaddr = VAR_1->addrrem;

 FUNC_2(VAR_2);
}
