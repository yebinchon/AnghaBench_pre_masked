
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct sk_buff {scalar_t__ data; TYPE_3__* dev; } ;
struct net {int dummy; } ;
struct iphdr {int protocol; int ihl; int daddr; int saddr; } ;
struct ip_tunnel_net {int dummy; } ;
struct TYPE_4__ {int o_key; } ;
struct ip_tunnel {TYPE_1__ parms; } ;
struct ip_esp_hdr {int spi; } ;
struct ip_comp_hdr {int cpi; } ;
struct ip_auth_hdr {int spi; } ;
typedef int __u32 ;
typedef int __be32 ;
struct TYPE_6__ {int ifindex; } ;
struct TYPE_5__ {int type; int code; } ;


 int VAR_0 ;

 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct net* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_4 (struct ip_tunnel_net*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,int) ;
 struct ip_tunnel_net* FUNC_7 (struct net*,int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 struct xfrm_state* FUNC_9 (struct net*,int ,int const*,int ,int,int ) ;
 int FUNC_10 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_4, u32 VAR_5)
{
 __be32 VAR_6;
 __u32 VAR_7;
 struct xfrm_state *VAR_8;
 struct ip_tunnel *VAR_9;
 struct ip_esp_hdr *VAR_10;
 struct ip_auth_hdr *VAR_11 ;
 struct ip_comp_hdr *VAR_12;
 struct net *VAR_13 = FUNC_1(VAR_4->dev);
 const struct iphdr *VAR_14 = (const struct iphdr *)VAR_4->data;
 int VAR_15 = VAR_14->protocol;
 struct ip_tunnel_net *VAR_16 = FUNC_7(VAR_13, VAR_3);

 VAR_9 = FUNC_4(VAR_16, VAR_4->dev->ifindex, VAR_2,
      VAR_14->daddr, VAR_14->saddr, 0);
 if (!VAR_9)
  return -1;

 VAR_7 = FUNC_0(VAR_9->parms.o_key);

 switch (VAR_15) {
 case 128:
  VAR_10 = (struct ip_esp_hdr *)(VAR_4->data+(VAR_14->ihl<<2));
  VAR_6 = VAR_10->spi;
  break;
 case 130:
  VAR_11 = (struct ip_auth_hdr *)(VAR_4->data+(VAR_14->ihl<<2));
  VAR_6 = VAR_11->spi;
  break;
 case 129:
  VAR_12 = (struct ip_comp_hdr *)(VAR_4->data+(VAR_14->ihl<<2));
  VAR_6 = FUNC_2(FUNC_8(VAR_12->cpi));
  break;
 default:
  return 0;
 }

 switch (FUNC_3(VAR_4)->type) {
 case 132:
  if (FUNC_3(VAR_4)->code != VAR_1)
   return 0;
 case 131:
  break;
 default:
  return 0;
 }

 VAR_8 = FUNC_9(VAR_13, VAR_7, (const xfrm_address_t *)&VAR_14->daddr,
         VAR_6, VAR_15, VAR_0);
 if (!VAR_8)
  return 0;

 if (FUNC_3(VAR_4)->type == 132)
  FUNC_6(VAR_4, VAR_13, VAR_5, 0, VAR_15);
 else
  FUNC_5(VAR_4, VAR_13, 0, VAR_15);
 FUNC_10(VAR_8);

 return 0;
}
