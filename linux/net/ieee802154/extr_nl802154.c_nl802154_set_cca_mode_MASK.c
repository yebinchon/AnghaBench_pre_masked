
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpan_phy_cca {scalar_t__ mode; scalar_t__ opt; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct cfg802154_registered_device** user_ptr; } ;
struct TYPE_3__ {int cca_modes; int cca_opts; } ;
struct TYPE_4__ {int flags; TYPE_1__ supported; } ;
struct cfg802154_registered_device {TYPE_2__ wpan_phy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct cfg802154_registered_device*,struct wpan_phy_cca*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct cfg802154_registered_device *VAR_11 = VAR_10->user_ptr[0];
 struct wpan_phy_cca VAR_12;

 if (!(VAR_11->wpan_phy.flags & VAR_8))
  return -VAR_1;

 if (!VAR_10->attrs[VAR_2])
  return -VAR_0;

 VAR_12.mode = FUNC_1(VAR_10->attrs[VAR_2]);

 if (VAR_12.mode < VAR_5 ||
     VAR_12.mode > VAR_4 ||
     !(VAR_11->wpan_phy.supported.cca_modes & FUNC_0(VAR_12.mode)))
  return -VAR_0;

 if (VAR_12.mode == VAR_6) {
  if (!VAR_10->attrs[VAR_3])
   return -VAR_0;

  VAR_12.opt = FUNC_1(VAR_10->attrs[VAR_3]);
  if (VAR_12.opt > VAR_7 ||
      !(VAR_11->wpan_phy.supported.cca_opts & FUNC_0(VAR_12.opt)))
   return -VAR_0;
 }

 return FUNC_2(VAR_11, &VAR_12);
}
