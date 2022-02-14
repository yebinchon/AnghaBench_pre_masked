
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be16 ;




 struct sock* FUNC_0 (struct net*,int *,struct sk_buff*,int,struct in6_addr const*,int const,struct in6_addr const*,int const,int ) ;
 int VAR_0 ;
 struct sock* FUNC_1 (struct net*,struct in6_addr const*,int const,struct in6_addr const*,int const,int ) ;

__attribute__((used)) static struct sock *
FUNC_2(struct net *VAR_1, struct sk_buff *VAR_2, int VAR_3,
        const u8 VAR_4,
        const struct in6_addr *VAR_5, const struct in6_addr *VAR_6,
        const __be16 VAR_7, const __be16 VAR_8,
        const struct net_device *VAR_9)
{
 switch (VAR_4) {
 case 129:
  return FUNC_0(VAR_1, &VAR_0, VAR_2, VAR_3,
        VAR_5, VAR_7, VAR_6, VAR_8,
        VAR_9->ifindex);
 case 128:
  return FUNC_1(VAR_1, VAR_5, VAR_7, VAR_6, VAR_8,
           VAR_9->ifindex);
 }

 return ((void*)0);
}
