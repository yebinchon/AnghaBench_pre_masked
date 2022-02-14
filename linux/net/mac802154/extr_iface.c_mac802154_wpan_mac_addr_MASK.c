
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_2__ {struct net_device* lowpan_dev; int extended_addr; } ;
struct ieee802154_sub_if_data {TYPE_1__ wpan_dev; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee802154_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct ieee802154_sub_if_data *VAR_4 = FUNC_0(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;
 __le64 VAR_6;

 if (FUNC_5(VAR_2))
  return -VAR_0;




 if (VAR_4->wpan_dev.lowpan_dev) {
  if (FUNC_5(VAR_4->wpan_dev.lowpan_dev))
   return -VAR_0;
 }

 FUNC_1(&VAR_6, VAR_5->sa_data);
 if (!FUNC_2(VAR_6))
  return -VAR_1;

 FUNC_4(VAR_2->dev_addr, VAR_5->sa_data, VAR_2->addr_len);
 VAR_4->wpan_dev.extended_addr = VAR_6;




 if (VAR_4->wpan_dev.lowpan_dev)
  FUNC_4(VAR_4->wpan_dev.lowpan_dev->dev_addr, VAR_2->dev_addr,
         VAR_2->addr_len);

 return FUNC_3(VAR_2);
}
