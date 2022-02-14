
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
struct ip_auth_hdr {int spi; } ;
struct TYPE_2__ {int type; int code; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 struct net* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int ) ;
 struct xfrm_state* FUNC_4 (struct net*,int ,int const*,int ,int ,int ) ;
 int FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, u32 VAR_4)
{
 struct net *VAR_5 = FUNC_0(VAR_3->dev);
 const struct iphdr *VAR_6 = (const struct iphdr *)VAR_3->data;
 struct ip_auth_hdr *VAR_7 = (struct ip_auth_hdr *)(VAR_3->data+(VAR_6->ihl<<2));
 struct xfrm_state *VAR_8;

 switch (FUNC_1(VAR_3)->type) {
 case 129:
  if (FUNC_1(VAR_3)->code != VAR_1)
   return 0;
 case 128:
  break;
 default:
  return 0;
 }

 VAR_8 = FUNC_4(VAR_5, VAR_3->mark, (const xfrm_address_t *)&VAR_6->daddr,
         VAR_7->spi, VAR_2, VAR_0);
 if (!VAR_8)
  return 0;

 if (FUNC_1(VAR_3)->type == 129)
  FUNC_3(VAR_3, VAR_5, VAR_4, 0, VAR_2);
 else
  FUNC_2(VAR_3, VAR_5, 0, VAR_2);
 FUNC_5(VAR_8);

 return 0;
}
