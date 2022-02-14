
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_dev {int dummy; } ;
struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
typedef int s8 ;
struct TYPE_2__ {int (* set_max_frame_retries ) (int *,struct wpan_dev*,int ) ;} ;


 int FUNC_0 (int *,struct wpan_dev*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct wpan_dev*,int ) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg802154_registered_device *VAR_0,
      struct wpan_dev *VAR_1, s8 VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0->wpan_phy, VAR_1,
      VAR_2);
 VAR_3 = VAR_0->ops->set_max_frame_retries(&VAR_0->wpan_phy, VAR_1,
            VAR_2);
 FUNC_1(&VAR_0->wpan_phy, VAR_3);
 return VAR_3;
}
