
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct cfg802154_registered_device** user_ptr; } ;
struct TYPE_4__ {int iftypes; } ;
struct TYPE_5__ {TYPE_1__ supported; } ;
struct cfg802154_registered_device {TYPE_3__* ops; TYPE_2__ wpan_phy; } ;
typedef enum nl802154_iftype { ____Placeholder_nl802154_iftype } nl802154_iftype ;
typedef int __le64 ;
struct TYPE_6__ {int add_virtual_intf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct cfg802154_registered_device*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct cfg802154_registered_device *VAR_10 = VAR_9->user_ptr[0];
 enum nl802154_iftype VAR_11 = VAR_7;
 __le64 VAR_12 = FUNC_1(0x0000000000000000ULL);





 if (!VAR_9->attrs[VAR_4])
  return -VAR_0;

 if (VAR_9->attrs[VAR_5]) {
  VAR_11 = FUNC_4(VAR_9->attrs[VAR_5]);
  if (VAR_11 > VAR_6 ||
      !(VAR_10->wpan_phy.supported.iftypes & FUNC_0(VAR_11)))
   return -VAR_0;
 }

 if (VAR_9->attrs[VAR_3])
  VAR_12 = FUNC_3(VAR_9->attrs[VAR_3]);

 if (!VAR_10->ops->add_virtual_intf)
  return -VAR_1;

 return FUNC_5(VAR_10,
         FUNC_2(VAR_9->attrs[VAR_4]),
         VAR_2, VAR_11, VAR_12);
}
