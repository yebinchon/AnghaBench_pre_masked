
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct cfg802154_registered_device** user_ptr; } ;
struct TYPE_3__ {int* channels; } ;
struct TYPE_4__ {TYPE_1__ supported; } ;
struct cfg802154_registered_device {TYPE_2__ wpan_phy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cfg802154_registered_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct cfg802154_registered_device *VAR_7 = VAR_6->user_ptr[0];
 u8 VAR_8, VAR_9;

 if (!VAR_6->attrs[VAR_4] ||
     !VAR_6->attrs[VAR_3])
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6->attrs[VAR_4]);
 VAR_8 = FUNC_1(VAR_6->attrs[VAR_3]);


 if (VAR_9 > VAR_2 || VAR_8 > VAR_1 ||
     !(VAR_7->wpan_phy.supported.channels[VAR_9] & FUNC_0(VAR_8)))
  return -VAR_0;

 return FUNC_2(VAR_7, VAR_9, VAR_8);
}
