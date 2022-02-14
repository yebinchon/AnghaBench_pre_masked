
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef scalar_t__ u8 ;
struct xfrm_state {int dummy; } ;
struct xfrm_if {int dummy; } ;
struct sk_buff {TYPE_1__* dev; int mark; scalar_t__ data; } ;
struct net {int dummy; } ;
struct ipv6hdr {int nexthdr; int daddr; } ;
struct ip_esp_hdr {int spi; } ;
struct ip_comp_hdr {int cpi; } ;
struct ip_auth_hdr {int spi; } ;
struct inet6_skb_parm {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 struct net* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net*,int *) ;
 struct xfrm_state* FUNC_6 (struct net*,int ,int const*,int ,int,int ) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct xfrm_if* FUNC_8 (struct net*,struct xfrm_state*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_3, struct inet6_skb_parm *VAR_4,
      u8 VAR_5, u8 VAR_6, int VAR_7, __be32 VAR_8)
{
 const struct ipv6hdr *VAR_9 = (const struct ipv6hdr *)VAR_3->data;
 struct net *VAR_10 = FUNC_0(VAR_3->dev);
 int VAR_11 = VAR_9->nexthdr;
 struct ip_comp_hdr *VAR_12;
 struct ip_esp_hdr *VAR_13;
 struct ip_auth_hdr *VAR_14;
 struct xfrm_state *VAR_15;
 struct xfrm_if *VAR_16;
 __be32 VAR_17;

 switch (VAR_11) {
 case 128:
  VAR_13 = (struct ip_esp_hdr *)(VAR_3->data + VAR_7);
  VAR_17 = VAR_13->spi;
  break;
 case 130:
  VAR_14 = (struct ip_auth_hdr *)(VAR_3->data + VAR_7);
  VAR_17 = VAR_14->spi;
  break;
 case 129:
  VAR_12 = (struct ip_comp_hdr *)(VAR_3->data + VAR_7);
  VAR_17 = FUNC_1(FUNC_4(VAR_12->cpi));
  break;
 default:
  return 0;
 }

 if (VAR_5 != VAR_1 &&
     VAR_5 != VAR_2)
  return 0;

 VAR_15 = FUNC_6(VAR_10, VAR_3->mark, (const xfrm_address_t *)&VAR_9->daddr,
         VAR_17, VAR_11, VAR_0);
 if (!VAR_15)
  return 0;

 VAR_16 = FUNC_8(VAR_10, VAR_15);
 if (!VAR_16) {
  FUNC_7(VAR_15);
  return -1;
 }

 if (VAR_5 == VAR_2)
  FUNC_2(VAR_3, VAR_10, VAR_3->dev->ifindex, 0,
        FUNC_5(VAR_10, ((void*)0)));
 else
  FUNC_3(VAR_3, VAR_10, VAR_8, 0, 0, FUNC_5(VAR_10, ((void*)0)));
 FUNC_7(VAR_15);

 return 0;
}
