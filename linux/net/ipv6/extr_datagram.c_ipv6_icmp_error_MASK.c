
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ee_errno; scalar_t__ ee_data; int ee_info; scalar_t__ ee_pad; int ee_code; int ee_type; int ee_origin; } ;
struct sock_exterr_skb {int port; int * addr_offset; TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct sk_buff {int data; int protocol; } ;
struct ipv6hdr {int daddr; } ;
struct ipv6_pinfo {int recverr; } ;
struct icmp6hdr {int icmp6_code; int icmp6_type; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int *) ;
 int FUNC_2 (int ) ;
 struct icmp6hdr* FUNC_3 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct sk_buff*) ;

void FUNC_10(struct sock *VAR_3, struct sk_buff *VAR_4, int VAR_5,
       __be16 VAR_6, u32 VAR_7, u8 *VAR_8)
{
 struct ipv6_pinfo *VAR_9 = FUNC_4(VAR_3);
 struct icmp6hdr *VAR_10 = FUNC_3(VAR_4);
 struct sock_exterr_skb *VAR_11;

 if (!VAR_9->recverr)
  return;

 VAR_4 = FUNC_6(VAR_4, VAR_1);
 if (!VAR_4)
  return;

 VAR_4->protocol = FUNC_2(VAR_0);

 VAR_11 = FUNC_0(VAR_4);
 VAR_11->ee.ee_errno = VAR_5;
 VAR_11->ee.ee_origin = VAR_2;
 VAR_11->ee.ee_type = VAR_10->icmp6_type;
 VAR_11->ee.ee_code = VAR_10->icmp6_code;
 VAR_11->ee.ee_pad = 0;
 VAR_11->ee.ee_info = VAR_7;
 VAR_11->ee.ee_data = 0;
 VAR_11->addr_offset = (u8 *)&(((struct ipv6hdr *)(VAR_10 + 1))->daddr) -
      FUNC_7(VAR_4);
 VAR_11->port = VAR_6;

 FUNC_1(VAR_4, VAR_8 - VAR_4->data);
 FUNC_8(VAR_4);

 if (FUNC_9(VAR_3, VAR_4))
  FUNC_5(VAR_4);
}
