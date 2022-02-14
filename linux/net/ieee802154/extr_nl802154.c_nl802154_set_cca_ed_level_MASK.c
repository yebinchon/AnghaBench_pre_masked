
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct cfg802154_registered_device** user_ptr; } ;
struct TYPE_3__ {int cca_ed_levels_size; scalar_t__* cca_ed_levels; } ;
struct TYPE_4__ {int flags; TYPE_1__ supported; } ;
struct cfg802154_registered_device {TYPE_2__ wpan_phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cfg802154_registered_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 struct cfg802154_registered_device *VAR_6 = VAR_5->user_ptr[0];
 s32 VAR_7;
 int VAR_8;

 if (!(VAR_6->wpan_phy.flags & VAR_3))
  return -VAR_1;

 if (!VAR_5->attrs[VAR_2])
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5->attrs[VAR_2]);

 for (VAR_8 = 0; VAR_8 < VAR_6->wpan_phy.supported.cca_ed_levels_size; VAR_8++) {
  if (VAR_7 == VAR_6->wpan_phy.supported.cca_ed_levels[VAR_8])
   return FUNC_1(VAR_6, VAR_7);
 }

 return -VAR_0;
}
