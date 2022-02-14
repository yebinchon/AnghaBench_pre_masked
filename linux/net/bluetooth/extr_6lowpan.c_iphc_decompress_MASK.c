
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; } ;
struct lowpan_peer {int * lladdr; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*,int ,int const*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, struct net_device *VAR_1,
      struct lowpan_peer *VAR_2)
{
 const u8 *VAR_3;

 VAR_3 = VAR_2->lladdr;

 return FUNC_0(VAR_0, VAR_1, VAR_1->dev_addr, VAR_3);
}
