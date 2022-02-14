
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcphdr {int dummy; } ;
struct sock {int sk_v6_rcv_saddr; int sk_state; int sk_refcnt; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef enum nf_tproxy_lookup_t { ____Placeholder_nf_tproxy_lookup_t } nf_tproxy_lookup_t ;
typedef int __be16 ;


 int FUNC_0 () ;




 int VAR_0 ;
 int FUNC_1 (int) ;
 struct sock* FUNC_2 (struct net*,int *,struct in6_addr const*,int const,struct in6_addr const*,int ,int ,int ) ;
 int FUNC_3 (struct tcphdr*) ;
 struct sock* FUNC_4 (struct net*,int *,struct sk_buff*,int ,struct in6_addr const*,int const,struct in6_addr const*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (char*,int const,struct in6_addr const*,int ,struct in6_addr const*,int ,int const,struct sock*) ;
 int FUNC_8 (int *) ;
 struct tcphdr* FUNC_9 (struct sk_buff*,int,int,struct tcphdr*) ;
 int FUNC_10 (struct sock*) ;
 int VAR_1 ;
 struct sock* FUNC_11 (struct net*,struct in6_addr const*,int const,struct in6_addr const*,int const,int ) ;

struct sock *
FUNC_12(struct net *VAR_2, struct sk_buff *VAR_3, int VAR_4,
        const u8 VAR_5,
        const struct in6_addr *VAR_6, const struct in6_addr *VAR_7,
        const __be16 VAR_8, const __be16 VAR_9,
        const struct net_device *VAR_10,
        const enum nf_tproxy_lookup_t VAR_11)
{
 struct sock *VAR_12;

 switch (VAR_5) {
 case 131: {
  struct tcphdr VAR_13, *VAR_14;

  VAR_14 = FUNC_9(VAR_3, VAR_4,
     sizeof(struct tcphdr), &VAR_13);
  if (VAR_14 == ((void*)0))
   return ((void*)0);

  switch (VAR_11) {
  case 128:
   VAR_12 = FUNC_4(VAR_2, &VAR_1, VAR_3,
         VAR_4 + FUNC_3(VAR_14),
         VAR_6, VAR_8,
         VAR_7, FUNC_6(VAR_9),
         VAR_10->ifindex, 0);

   if (VAR_12 && !FUNC_8(&VAR_12->sk_refcnt))
    VAR_12 = ((void*)0);





   break;
  case 129:
   VAR_12 = FUNC_2(VAR_2, &VAR_1,
       VAR_6, VAR_8, VAR_7, FUNC_6(VAR_9),
       VAR_10->ifindex, 0);
   break;
  default:
   FUNC_0();
  }
  break;
  }
 case 130:
  VAR_12 = FUNC_11(VAR_2, VAR_6, VAR_8, VAR_7, VAR_9,
         VAR_10->ifindex);
  if (VAR_12) {
   int VAR_15 = (VAR_12->sk_state == VAR_0);
   int VAR_16 = FUNC_5(&VAR_12->sk_v6_rcv_saddr);






   if ((VAR_11 == 129 && (!VAR_15 || VAR_16)) ||
       (VAR_11 == 128 && VAR_15)) {
    FUNC_10(VAR_12);
    VAR_12 = ((void*)0);
   }
  }
  break;
 default:
  FUNC_1(1);
  VAR_12 = ((void*)0);
 }

 FUNC_7("tproxy socket lookup: proto %u %pI6:%u -> %pI6:%u, lookup type: %d, sock %p\n",
   VAR_5, VAR_6, FUNC_6(VAR_8), VAR_7, FUNC_6(VAR_9), VAR_11, VAR_12);

 return VAR_12;
}
