
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
struct sk_buff {scalar_t__ data; int protocol; } ;
struct ipv6hdr {int daddr; } ;
struct ipv6_pinfo {int recverr; } ;
struct flowi6 {int fl6_dport; int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 struct ipv6_pinfo* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct ipv6hdr*,int ,int ) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sock*,struct sk_buff*) ;

void FUNC_14(struct sock *VAR_3, int VAR_4, struct flowi6 *VAR_5, u32 VAR_6)
{
 const struct ipv6_pinfo *VAR_7 = FUNC_4(VAR_3);
 struct sock_exterr_skb *VAR_8;
 struct ipv6hdr *VAR_9;
 struct sk_buff *VAR_10;

 if (!VAR_7->recverr)
  return;

 VAR_10 = FUNC_2(sizeof(struct ipv6hdr), VAR_1);
 if (!VAR_10)
  return;

 VAR_10->protocol = FUNC_3(VAR_0);

 FUNC_9(VAR_10, sizeof(struct ipv6hdr));
 FUNC_10(VAR_10);
 VAR_9 = FUNC_6(VAR_10);
 VAR_9->daddr = VAR_5->daddr;
 FUNC_5(VAR_9, 0, 0);

 VAR_8 = FUNC_0(VAR_10);
 VAR_8->ee.ee_errno = VAR_4;
 VAR_8->ee.ee_origin = VAR_2;
 VAR_8->ee.ee_type = 0;
 VAR_8->ee.ee_code = 0;
 VAR_8->ee.ee_pad = 0;
 VAR_8->ee.ee_info = VAR_6;
 VAR_8->ee.ee_data = 0;
 VAR_8->addr_offset = (u8 *)&VAR_9->daddr - FUNC_8(VAR_10);
 VAR_8->port = VAR_5->fl6_dport;

 FUNC_1(VAR_10, FUNC_12(VAR_10) - VAR_10->data);
 FUNC_11(VAR_10);

 if (FUNC_13(VAR_3, VAR_10))
  FUNC_7(VAR_10);
}
