
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct udphdr {int dest; int source; int check; int len; } ;
struct udp_table {int dummy; } ;
struct sock {struct dst_entry* sk_rx_dst; } ;
struct sk_buff {int len; int dev; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {struct in6_addr daddr; struct in6_addr saddr; } ;
struct TYPE_3__ {int no_check6_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net*,int ,int) ;
 struct sock* FUNC_1 (struct sk_buff*,int ,int ,struct udp_table*) ;
 int FUNC_2 (struct net*,struct sk_buff*,struct in6_addr const*,struct in6_addr const*,struct udp_table*,int) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct in6_addr const*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,char*,struct in6_addr const*,int,int,int,struct in6_addr const*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int) ;
 struct dst_entry* FUNC_12 (struct sk_buff*) ;
 struct sock* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,struct udphdr*,int) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sock*,struct dst_entry*) ;
 int FUNC_18 (struct sock*,struct sk_buff*,struct udphdr*) ;
 struct udphdr* FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 TYPE_1__* FUNC_21 (struct sock*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (int *,int ,struct sk_buff*) ;

int FUNC_24(struct sk_buff *VAR_8, struct udp_table *VAR_9,
     int VAR_10)
{
 const struct in6_addr *VAR_11, *VAR_12;
 struct net *VAR_13 = FUNC_3(VAR_8->dev);
 struct udphdr *VAR_14;
 struct sock *VAR_15;
 u32 VAR_16 = 0;

 if (!FUNC_10(VAR_8, sizeof(struct udphdr)))
  goto discard;

 VAR_11 = &FUNC_6(VAR_8)->saddr;
 VAR_12 = &FUNC_6(VAR_8)->daddr;
 VAR_14 = FUNC_19(VAR_8);

 VAR_16 = FUNC_9(VAR_14->len);
 if (VAR_16 > VAR_8->len)
  goto short_packet;

 if (VAR_10 == VAR_2) {



  if (VAR_16 == 0)
   VAR_16 = VAR_8->len;

  if (VAR_16 < sizeof(*VAR_14))
   goto short_packet;

  if (VAR_16 < VAR_8->len) {
   if (FUNC_11(VAR_8, VAR_16))
    goto short_packet;
   VAR_11 = &FUNC_6(VAR_8)->saddr;
   VAR_12 = &FUNC_6(VAR_8)->daddr;
   VAR_14 = FUNC_19(VAR_8);
  }
 }

 if (FUNC_15(VAR_8, VAR_14, VAR_10))
  goto csum_error;


 VAR_15 = FUNC_13(VAR_8);
 if (VAR_15) {
  struct dst_entry *VAR_17 = FUNC_12(VAR_8);
  int VAR_18;

  if (FUNC_22(VAR_15->sk_rx_dst != VAR_17))
   FUNC_17(VAR_15, VAR_17);

  if (!VAR_14->check && !FUNC_21(VAR_15)->no_check6_rx) {
   FUNC_14(VAR_15);
   goto report_csum_error;
  }

  VAR_18 = FUNC_18(VAR_15, VAR_8, VAR_14);
  FUNC_14(VAR_15);
  return VAR_18;
 }




 if (FUNC_5(VAR_12))
  return FUNC_2(VAR_13, VAR_8,
    VAR_11, VAR_12, VAR_9, VAR_10);


 VAR_15 = FUNC_1(VAR_8, VAR_14->source, VAR_14->dest, VAR_9);
 if (VAR_15) {
  if (!VAR_14->check && !FUNC_21(VAR_15)->no_check6_rx)
   goto report_csum_error;
  return FUNC_18(VAR_15, VAR_8, VAR_14);
 }

 if (!VAR_14->check)
  goto report_csum_error;

 if (!FUNC_23(((void*)0), VAR_7, VAR_8))
  goto discard;

 if (FUNC_20(VAR_8))
  goto csum_error;

 FUNC_0(VAR_13, VAR_6, VAR_10 == VAR_3);
 FUNC_4(VAR_8, VAR_0, VAR_1, 0);

 FUNC_7(VAR_8);
 return 0;

short_packet:
 FUNC_8("UDP%sv6: short packet: From [%pI6c]:%u %d/%d to [%pI6c]:%u\n",
       VAR_10 == VAR_3 ? "-Lite" : "",
       VAR_11, FUNC_9(VAR_14->source),
       VAR_16, VAR_8->len,
       VAR_12, FUNC_9(VAR_14->dest));
 goto discard;

report_csum_error:
 FUNC_16(VAR_8);
csum_error:
 FUNC_0(VAR_13, VAR_4, VAR_10 == VAR_3);
discard:
 FUNC_0(VAR_13, VAR_5, VAR_10 == VAR_3);
 FUNC_7(VAR_8);
 return 0;
}
