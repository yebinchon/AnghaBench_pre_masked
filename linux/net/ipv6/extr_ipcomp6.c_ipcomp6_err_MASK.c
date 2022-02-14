
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef scalar_t__ u8 ;
struct xfrm_state {int dummy; } ;
struct sk_buff {TYPE_1__* dev; int mark; scalar_t__ data; } ;
struct net {int dummy; } ;
struct ipv6hdr {int daddr; } ;
struct ip_comp_hdr {int cpi; } ;
struct inet6_skb_parm {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct net* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net*,int *) ;
 struct xfrm_state* FUNC_6 (struct net*,int ,int const*,int ,int ,int ) ;
 int FUNC_7 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4, struct inet6_skb_parm *VAR_5,
    u8 VAR_6, u8 VAR_7, int VAR_8, __be32 VAR_9)
{
 struct net *VAR_10 = FUNC_0(VAR_4->dev);
 __be32 VAR_11;
 const struct ipv6hdr *VAR_12 = (const struct ipv6hdr *)VAR_4->data;
 struct ip_comp_hdr *VAR_13 =
  (struct ip_comp_hdr *)(VAR_4->data + VAR_8);
 struct xfrm_state *VAR_14;

 if (VAR_6 != VAR_1 &&
     VAR_6 != VAR_3)
  return 0;

 VAR_11 = FUNC_1(FUNC_4(VAR_13->cpi));
 VAR_14 = FUNC_6(VAR_10, VAR_4->mark, (const xfrm_address_t *)&VAR_12->daddr,
         VAR_11, VAR_2, VAR_0);
 if (!VAR_14)
  return 0;

 if (VAR_6 == VAR_3)
  FUNC_2(VAR_4, VAR_10, VAR_4->dev->ifindex, 0,
        FUNC_5(VAR_10, ((void*)0)));
 else
  FUNC_3(VAR_4, VAR_10, VAR_9, 0, 0, FUNC_5(VAR_10, ((void*)0)));
 FUNC_7(VAR_14);

 return 0;
}
