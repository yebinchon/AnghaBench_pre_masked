
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct xfrm_if {int dummy; } ;
struct sk_buff {int mark; scalar_t__ data; int dev; } ;
struct net {int dummy; } ;
struct iphdr {int protocol; int ihl; int daddr; } ;
struct ip_esp_hdr {int spi; } ;
struct ip_comp_hdr {int cpi; } ;
struct ip_auth_hdr {int spi; } ;
typedef int __be32 ;
struct TYPE_2__ {int type; int code; } ;


 int VAR_0 ;

 int VAR_1 ;




 struct net* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int) ;
 int FUNC_5 (int ) ;
 struct xfrm_state* FUNC_6 (struct net*,int ,int const*,int ,int,int ) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct xfrm_if* FUNC_8 (struct net*,struct xfrm_state*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, u32 VAR_3)
{
 const struct iphdr *VAR_4 = (const struct iphdr *)VAR_2->data;
 struct net *VAR_5 = FUNC_0(VAR_2->dev);
 int VAR_6 = VAR_4->protocol;
 struct ip_comp_hdr *VAR_7;
 struct ip_esp_hdr *VAR_8;
 struct ip_auth_hdr *VAR_9 ;
 struct xfrm_state *VAR_10;
 struct xfrm_if *VAR_11;
 __be32 VAR_12;

 switch (VAR_6) {
 case 128:
  VAR_8 = (struct ip_esp_hdr *)(VAR_2->data+(VAR_4->ihl<<2));
  VAR_12 = VAR_8->spi;
  break;
 case 130:
  VAR_9 = (struct ip_auth_hdr *)(VAR_2->data+(VAR_4->ihl<<2));
  VAR_12 = VAR_9->spi;
  break;
 case 129:
  VAR_7 = (struct ip_comp_hdr *)(VAR_2->data+(VAR_4->ihl<<2));
  VAR_12 = FUNC_1(FUNC_5(VAR_7->cpi));
  break;
 default:
  return 0;
 }

 switch (FUNC_2(VAR_2)->type) {
 case 132:
  if (FUNC_2(VAR_2)->code != VAR_1)
   return 0;
 case 131:
  break;
 default:
  return 0;
 }

 VAR_10 = FUNC_6(VAR_5, VAR_2->mark, (const xfrm_address_t *)&VAR_4->daddr,
         VAR_12, VAR_6, VAR_0);
 if (!VAR_10)
  return 0;

 VAR_11 = FUNC_8(VAR_5, VAR_10);
 if (!VAR_11) {
  FUNC_7(VAR_10);
  return -1;
 }

 if (FUNC_2(VAR_2)->type == 132)
  FUNC_4(VAR_2, VAR_5, VAR_3, 0, VAR_6);
 else
  FUNC_3(VAR_2, VAR_5, 0, VAR_6);
 FUNC_7(VAR_10);

 return 0;
}
