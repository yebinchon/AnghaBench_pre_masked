
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ethtool_regs {scalar_t__ len; int version; } ;
struct TYPE_2__ {int hw_version; } ;



__attribute__((used)) static void FUNC_0(struct net_device *VAR_0,
          struct ethtool_regs *VAR_1,
          void *VAR_2)
{
 struct wireless_dev *VAR_3 = VAR_0->ieee80211_ptr;

 VAR_1->version = VAR_3->wiphy->hw_version;
 VAR_1->len = 0;
}
