
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_sock {int inet_daddr; int inet_saddr; } ;
struct dccp_hdr {int dccph_checksum; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct dccp_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 struct inet_sock* FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 const struct inet_sock *VAR_2 = FUNC_3(VAR_0);
 struct dccp_hdr *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 VAR_3->dccph_checksum = FUNC_2(VAR_1,
       VAR_2->inet_saddr,
       VAR_2->inet_daddr);
}
