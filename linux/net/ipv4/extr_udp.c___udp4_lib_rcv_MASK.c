
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dest; int source; int len; } ;
struct udp_table {int dummy; } ;
struct sock {struct dst_entry* sk_rx_dst; } ;
struct sk_buff {unsigned short len; int dev; } ;
struct rtable {int rt_flags; } ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net*,int ,int) ;
 struct sock* FUNC_1 (struct sk_buff*,int ,int ,struct udp_table*) ;
 int FUNC_2 (struct net*,struct sk_buff*,struct udphdr*,int ,int ,struct udp_table*,int) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*,char*,int *,unsigned short,unsigned short,unsigned short,unsigned short,...) ;
 int FUNC_8 (struct sk_buff*) ;
 unsigned short FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,unsigned short) ;
 struct dst_entry* FUNC_12 (struct sk_buff*) ;
 struct rtable* FUNC_13 (struct sk_buff*) ;
 struct sock* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sock*) ;
 scalar_t__ FUNC_16 (struct sk_buff*,struct udphdr*,int) ;
 struct udphdr* FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sock*,struct dst_entry*) ;
 int FUNC_20 (struct sock*,struct sk_buff*,struct udphdr*) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int *,int ,struct sk_buff*) ;

int FUNC_23(struct sk_buff *VAR_10, struct udp_table *VAR_11,
     int VAR_12)
{
 struct sock *VAR_13;
 struct udphdr *VAR_14;
 unsigned short VAR_15;
 struct rtable *VAR_16 = FUNC_13(VAR_10);
 __be32 VAR_17, VAR_18;
 struct net *VAR_19 = FUNC_3(VAR_10->dev);




 if (!FUNC_10(VAR_10, sizeof(struct udphdr)))
  goto drop;

 VAR_14 = FUNC_17(VAR_10);
 VAR_15 = FUNC_9(VAR_14->len);
 VAR_17 = FUNC_5(VAR_10)->saddr;
 VAR_18 = FUNC_5(VAR_10)->daddr;

 if (VAR_15 > VAR_10->len)
  goto short_packet;

 if (VAR_12 == VAR_2) {

  if (VAR_15 < sizeof(*VAR_14) || FUNC_11(VAR_10, VAR_15))
   goto short_packet;
  VAR_14 = FUNC_17(VAR_10);
 }

 if (FUNC_16(VAR_10, VAR_14, VAR_12))
  goto csum_error;

 VAR_13 = FUNC_14(VAR_10);
 if (VAR_13) {
  struct dst_entry *VAR_20 = FUNC_12(VAR_10);
  int VAR_21;

  if (FUNC_21(VAR_13->sk_rx_dst != VAR_20))
   FUNC_19(VAR_13, VAR_20);

  VAR_21 = FUNC_20(VAR_13, VAR_10, VAR_14);
  FUNC_15(VAR_13);
  return VAR_21;
 }

 if (VAR_16->rt_flags & (VAR_4|VAR_5))
  return FUNC_2(VAR_19, VAR_10, VAR_14,
      VAR_17, VAR_18, VAR_11, VAR_12);

 VAR_13 = FUNC_1(VAR_10, VAR_14->source, VAR_14->dest, VAR_11);
 if (VAR_13)
  return FUNC_20(VAR_13, VAR_10, VAR_14);

 if (!FUNC_22(((void*)0), VAR_9, VAR_10))
  goto drop;
 FUNC_8(VAR_10);


 if (FUNC_18(VAR_10))
  goto csum_error;

 FUNC_0(VAR_19, VAR_8, VAR_12 == VAR_3);
 FUNC_4(VAR_10, VAR_0, VAR_1, 0);





 FUNC_6(VAR_10);
 return 0;

short_packet:
 FUNC_7("UDP%s: short packet: From %pI4:%u %d/%d to %pI4:%u\n",
       VAR_12 == VAR_3 ? "Lite" : "",
       &VAR_17, FUNC_9(VAR_14->source),
       VAR_15, VAR_10->len,
       &VAR_18, FUNC_9(VAR_14->dest));
 goto drop;

csum_error:




 FUNC_7("UDP%s: bad checksum. From %pI4:%u to %pI4:%u ulen %d\n",
       VAR_12 == VAR_3 ? "Lite" : "",
       &VAR_17, FUNC_9(VAR_14->source), &VAR_18, FUNC_9(VAR_14->dest),
       VAR_15);
 FUNC_0(VAR_19, VAR_6, VAR_12 == VAR_3);
drop:
 FUNC_0(VAR_19, VAR_7, VAR_12 == VAR_3);
 FUNC_6(VAR_10);
 return 0;
}
