
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct udphdr {int dest; int source; } ;
struct udp_table {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;int sk_uid; int sk_mark; } ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {struct in6_addr daddr; struct in6_addr saddr; } ;
struct ipv6_pinfo {scalar_t__ pmtudisc; int recverr; } ;
struct inet6_skb_parm {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct sock* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int VAR_4 ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct net*,int ,int ) ;
 int FUNC_4 (int ) ;
 struct sock* FUNC_5 (struct net*,struct ipv6hdr const*,int,struct udphdr*,struct udp_table*,struct sk_buff*,struct inet6_skb_parm*,int ,int ,int ) ;
 struct sock* FUNC_6 (struct net*,struct in6_addr const*,int ,struct in6_addr const*,int ,int ,int ,struct udp_table*,int *) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sk_buff*,struct sock*) ;
 int FUNC_15 (struct sk_buff*,struct sock*,int ) ;
 int FUNC_16 (struct sock*,struct sk_buff*,int,int ,int ,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct sock*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (struct sock*) ;
 int VAR_6 ;

int FUNC_21(struct sk_buff *VAR_7, struct inet6_skb_parm *VAR_8,
     u8 VAR_9, u8 VAR_10, int VAR_11, __be32 VAR_12,
     struct udp_table *VAR_13)
{
 struct ipv6_pinfo *VAR_14;
 const struct ipv6hdr *VAR_15 = (const struct ipv6hdr *)VAR_7->data;
 const struct in6_addr *VAR_16 = &VAR_15->saddr;
 const struct in6_addr *VAR_17 = &VAR_15->daddr;
 struct udphdr *VAR_18 = (struct udphdr *)(VAR_7->data+VAR_11);
 bool VAR_19 = 0;
 struct sock *VAR_20;
 int VAR_21;
 int VAR_22;
 struct net *VAR_23 = FUNC_7(VAR_7->dev);

 VAR_20 = FUNC_6(VAR_23, VAR_17, VAR_18->dest, VAR_16, VAR_18->source,
          FUNC_9(VAR_7), FUNC_10(VAR_7), VAR_13, ((void*)0));
 if (!VAR_20) {

  VAR_20 = FUNC_0(-VAR_0);
  if (FUNC_19(&VAR_6)) {
   VAR_20 = FUNC_5(VAR_23, VAR_15, VAR_11, VAR_18,
        VAR_13, VAR_7,
        VAR_8, VAR_9, VAR_10, VAR_12);
   if (!VAR_20)
    return 0;
  }

  if (FUNC_1(VAR_20)) {
   FUNC_3(VAR_23, FUNC_4(VAR_7->dev),
       VAR_1);
   return FUNC_2(VAR_20);
  }

  VAR_19 = 1;
 }

 VAR_21 = FUNC_8(VAR_9, VAR_10, &VAR_22);
 VAR_14 = FUNC_11(VAR_20);

 if (VAR_9 == VAR_2) {
  if (!FUNC_13(VAR_20))
   goto out;
  FUNC_15(VAR_7, VAR_20, VAR_12);
  if (VAR_14->pmtudisc != VAR_3)
   VAR_21 = 1;
 }
 if (VAR_9 == VAR_4) {
  if (VAR_19) {
   FUNC_12(VAR_7, FUNC_18(VAR_20), FUNC_9(VAR_7),
         VAR_20->sk_mark, VAR_20->sk_uid);
  } else {
   FUNC_14(VAR_7, VAR_20);
  }
  goto out;
 }


 if (VAR_19)
  goto out;

 if (!VAR_14->recverr) {
  if (!VAR_21 || VAR_20->sk_state != VAR_5)
   goto out;
 } else {
  FUNC_16(VAR_20, VAR_7, VAR_22, VAR_18->dest, FUNC_17(VAR_12), (u8 *)(VAR_18+1));
 }

 VAR_20->sk_err = VAR_22;
 VAR_20->sk_error_report(VAR_20);
out:
 return 0;
}
