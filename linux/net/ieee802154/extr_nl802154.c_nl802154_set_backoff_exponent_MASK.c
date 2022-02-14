
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpan_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ min_minbe; scalar_t__ max_minbe; scalar_t__ min_maxbe; scalar_t__ max_maxbe; } ;
struct TYPE_4__ {TYPE_1__ supported; } ;
struct net_device {TYPE_2__ wpan_phy; struct wpan_dev* ieee802154_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg802154_registered_device {TYPE_2__ wpan_phy; struct wpan_dev* ieee802154_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct wpan_dev*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct cfg802154_registered_device *VAR_6 = VAR_5->user_ptr[0];
 struct net_device *VAR_7 = VAR_5->user_ptr[1];
 struct wpan_dev *VAR_8 = VAR_7->ieee802154_ptr;
 u8 VAR_9, VAR_10;


 if (FUNC_0(VAR_7))
  return -VAR_0;

 if (!VAR_5->attrs[VAR_3] ||
     !VAR_5->attrs[VAR_2])
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_5->attrs[VAR_3]);
 VAR_10 = FUNC_1(VAR_5->attrs[VAR_2]);


 if (VAR_9 < VAR_6->wpan_phy.supported.min_minbe ||
     VAR_9 > VAR_6->wpan_phy.supported.max_minbe ||
     VAR_10 < VAR_6->wpan_phy.supported.min_maxbe ||
     VAR_10 > VAR_6->wpan_phy.supported.max_maxbe ||
     VAR_9 > VAR_10)
  return -VAR_1;

 return FUNC_2(VAR_6, VAR_8, VAR_9, VAR_10);
}
