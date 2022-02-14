
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ee_errno; scalar_t__ ee_data; int ee_info; scalar_t__ ee_pad; scalar_t__ ee_code; scalar_t__ ee_type; int ee_origin; } ;
struct sock_exterr_skb {int port; int * addr_offset; TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct iphdr {int daddr; } ;
struct inet_sock {int recverr; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,struct sk_buff*) ;

void FUNC_12(struct sock *VAR_2, int VAR_3, __be32 VAR_4, __be16 VAR_5, u32 VAR_6)
{
 struct inet_sock *VAR_7 = FUNC_3(VAR_2);
 struct sock_exterr_skb *VAR_8;
 struct iphdr *VAR_9;
 struct sk_buff *VAR_10;

 if (!VAR_7->recverr)
  return;

 VAR_10 = FUNC_2(sizeof(struct iphdr), VAR_0);
 if (!VAR_10)
  return;

 FUNC_7(VAR_10, sizeof(struct iphdr));
 FUNC_8(VAR_10);
 VAR_9 = FUNC_4(VAR_10);
 VAR_9->daddr = VAR_4;

 VAR_8 = FUNC_0(VAR_10);
 VAR_8->ee.ee_errno = VAR_3;
 VAR_8->ee.ee_origin = VAR_1;
 VAR_8->ee.ee_type = 0;
 VAR_8->ee.ee_code = 0;
 VAR_8->ee.ee_pad = 0;
 VAR_8->ee.ee_info = VAR_6;
 VAR_8->ee.ee_data = 0;
 VAR_8->addr_offset = (u8 *)&VAR_9->daddr - FUNC_6(VAR_10);
 VAR_8->port = VAR_5;

 FUNC_1(VAR_10, FUNC_10(VAR_10) - VAR_10->data);
 FUNC_9(VAR_10);

 if (FUNC_11(VAR_2, VAR_10))
  FUNC_5(VAR_10);
}
