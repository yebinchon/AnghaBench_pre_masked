
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tcphdr {int dummy; } ;
struct sock {int sk_state; int sk_refcnt; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
typedef enum nf_tproxy_lookup_t { ____Placeholder_nf_tproxy_lookup_t } nf_tproxy_lookup_t ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int inet_rcv_saddr; } ;


 int FUNC_0 () ;




 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tcphdr*) ;
 struct sock* FUNC_3 (struct net*,int *,int const,int const,int const,int const,int ) ;
 struct sock* FUNC_4 (struct net*,int *,struct sk_buff*,scalar_t__,int const,int const,int const,int const,int ,int ) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (char*,int const,int ,int ,int ,int ,int const,struct sock*) ;
 int FUNC_10 (int *) ;
 struct tcphdr* FUNC_11 (struct sk_buff*,scalar_t__,int,struct tcphdr*) ;
 int FUNC_12 (struct sock*) ;
 int VAR_1 ;
 struct sock* FUNC_13 (struct net*,int const,int const,int const,int const,int ) ;

struct sock *
FUNC_14(struct net *VAR_2, struct sk_buff *VAR_3,
        const u8 VAR_4,
        const __be32 VAR_5, const __be32 VAR_6,
        const __be16 VAR_7, const __be16 VAR_8,
        const struct net_device *VAR_9,
        const enum nf_tproxy_lookup_t VAR_10)
{
 struct sock *VAR_11;

 switch (VAR_4) {
 case 131: {
  struct tcphdr VAR_12, *VAR_13;

  VAR_13 = FUNC_11(VAR_3, FUNC_6(VAR_3),
     sizeof(struct tcphdr), &VAR_12);
  if (VAR_13 == ((void*)0))
   return ((void*)0);

  switch (VAR_10) {
  case 128:
   VAR_11 = FUNC_4(VAR_2, &VAR_1, VAR_3,
          FUNC_6(VAR_3) +
            FUNC_2(VAR_13),
          VAR_5, VAR_7,
          VAR_6, VAR_8,
          VAR_9->ifindex, 0);

   if (VAR_11 && !FUNC_10(&VAR_11->sk_refcnt))
    VAR_11 = ((void*)0);





   break;
  case 129:
   VAR_11 = FUNC_3(VAR_2, &VAR_1,
          VAR_5, VAR_7, VAR_6, VAR_8,
          VAR_9->ifindex);
   break;
  default:
   FUNC_0();
  }
  break;
  }
 case 130:
  VAR_11 = FUNC_13(VAR_2, VAR_5, VAR_7, VAR_6, VAR_8,
         VAR_9->ifindex);
  if (VAR_11) {
   int VAR_14 = (VAR_11->sk_state == VAR_0);
   int VAR_15 = (FUNC_5(VAR_11)->inet_rcv_saddr == 0);






   if ((VAR_10 == 129 &&
         (!VAR_14 || VAR_15)) ||
       (VAR_10 == 128 && VAR_14)) {
    FUNC_12(VAR_11);
    VAR_11 = ((void*)0);
   }
  }
  break;
 default:
  FUNC_1(1);
  VAR_11 = ((void*)0);
 }

 FUNC_9("tproxy socket lookup: proto %u %08x:%u -> %08x:%u, lookup type: %d, sock %p\n",
   VAR_4, FUNC_7(VAR_5), FUNC_8(VAR_7), FUNC_7(VAR_6), FUNC_8(VAR_8), VAR_10, VAR_11);

 return VAR_11;
}
