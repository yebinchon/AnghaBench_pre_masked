
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct lowpan_peer {TYPE_1__* chan; int * lladdr; } ;
struct lowpan_btle_dev {TYPE_2__* netdev; } ;
struct ipv6hdr {int daddr; } ;
struct in6_addr {int dummy; } ;
typedef int ipv6_daddr ;
typedef int bdaddr_t ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_5__ {int dev_addr; } ;
struct TYPE_4__ {int dst_type; int dst; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 struct lowpan_btle_dev* FUNC_4 (struct net_device*) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct net_device*,int *,int ) ;
 int FUNC_7 (struct in6_addr*,int *,int) ;
 struct lowpan_peer* FUNC_8 (struct lowpan_btle_dev*,struct in6_addr*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, struct net_device *VAR_3,
   bdaddr_t *VAR_4, u8 *VAR_5)
{
 struct in6_addr VAR_6;
 struct ipv6hdr *VAR_7;
 struct lowpan_btle_dev *VAR_8;
 struct lowpan_peer *VAR_9;
 u8 *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_7 = FUNC_3(VAR_2);

 VAR_8 = FUNC_4(VAR_3);

 FUNC_7(&VAR_6, &VAR_7->daddr, sizeof(VAR_6));

 if (FUNC_2(&VAR_6)) {
  FUNC_5(VAR_2)->chan = ((void*)0);
  VAR_10 = ((void*)0);
 } else {
  FUNC_0("dest IP %pI6c", &VAR_6);






  VAR_9 = FUNC_8(VAR_8, &VAR_6, VAR_2);
  if (!VAR_9) {
   FUNC_0("no such peer");
   return -VAR_0;
  }

  VAR_10 = VAR_9->lladdr;
  *VAR_4 = VAR_9->chan->dst;
  *VAR_5 = VAR_9->chan->dst_type;
  FUNC_5(VAR_2)->chan = VAR_9->chan;

  VAR_12 = 1;
 }

 FUNC_6(VAR_2, VAR_3, VAR_10, VAR_8->netdev->dev_addr);

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_1, ((void*)0), ((void*)0), 0);
 if (VAR_11 < 0)
  return VAR_11;

 return VAR_12;
}
