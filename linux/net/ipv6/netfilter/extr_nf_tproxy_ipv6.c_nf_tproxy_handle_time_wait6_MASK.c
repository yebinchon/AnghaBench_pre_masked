
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ const dest; int source; int fin; int ack; int rst; scalar_t__ syn; } ;
struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct in6_addr {int dummy; } ;
typedef int _hdr ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 struct sock* FUNC_4 (struct net*,struct sk_buff*,int,int,int *,int ,int ,scalar_t__ const,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct in6_addr const*,int *) ;
 struct tcphdr* FUNC_6 (struct sk_buff*,int,int,struct tcphdr*) ;

struct sock *
FUNC_7(struct sk_buff *VAR_1, int VAR_2, int VAR_3,
    struct net *VAR_4,
    const struct in6_addr *VAR_5,
    const __be16 VAR_6,
    struct sock *VAR_7)
{
 const struct ipv6hdr *VAR_8 = FUNC_3(VAR_1);
 struct tcphdr VAR_9, *VAR_10;

 VAR_10 = FUNC_6(VAR_1, VAR_3, sizeof(VAR_9), &VAR_9);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(FUNC_0(VAR_7));
  return ((void*)0);
 }

 if (VAR_10->syn && !VAR_10->rst && !VAR_10->ack && !VAR_10->fin) {


  struct sock *VAR_11;

  VAR_11 = FUNC_4(VAR_4, VAR_1, VAR_3, VAR_2,
         &VAR_8->saddr,
         FUNC_5(VAR_1, VAR_5, &VAR_8->daddr),
         VAR_10->source,
         VAR_6 ? VAR_6 : VAR_10->dest,
         VAR_1->dev, VAR_0);
  if (VAR_11) {
   FUNC_1(FUNC_0(VAR_7));
   VAR_7 = VAR_11;
  }
 }

 return VAR_7;
}
