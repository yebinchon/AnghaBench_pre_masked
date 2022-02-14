
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct sk_buff {int mark; scalar_t__ data; int dev; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int daddr; } ;
struct ip_comp_hdr {int cpi; } ;
typedef int __be32 ;
struct TYPE_2__ {int type; int code; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 struct net* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct xfrm_state* FUNC_6 (struct net*,int ,int const*,int ,int ,int ) ;
 int FUNC_7 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, u32 VAR_4)
{
 struct net *VAR_5 = FUNC_0(VAR_3->dev);
 __be32 VAR_6;
 const struct iphdr *VAR_7 = (const struct iphdr *)VAR_3->data;
 struct ip_comp_hdr *VAR_8 = (struct ip_comp_hdr *)(VAR_3->data+(VAR_7->ihl<<2));
 struct xfrm_state *VAR_9;

 switch (FUNC_2(VAR_3)->type) {
 case 129:
  if (FUNC_2(VAR_3)->code != VAR_1)
   return 0;
 case 128:
  break;
 default:
  return 0;
 }

 VAR_6 = FUNC_1(FUNC_5(VAR_8->cpi));
 VAR_9 = FUNC_6(VAR_5, VAR_3->mark, (const xfrm_address_t *)&VAR_7->daddr,
         VAR_6, VAR_2, VAR_0);
 if (!VAR_9)
  return 0;

 if (FUNC_2(VAR_3)->type == 129)
  FUNC_4(VAR_3, VAR_5, VAR_4, 0, VAR_2);
 else
  FUNC_3(VAR_3, VAR_5, 0, VAR_2);
 FUNC_7(VAR_9);

 return 0;
}
