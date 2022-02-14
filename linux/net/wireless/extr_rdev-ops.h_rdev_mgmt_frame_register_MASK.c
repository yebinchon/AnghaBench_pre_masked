
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wireless_dev {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* mgmt_frame_register ) (int *,struct wireless_dev*,int ,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct wireless_dev*,int ,int) ;
 int FUNC_2 (int *,struct wireless_dev*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct cfg80211_registered_device *VAR_0,
    struct wireless_dev *VAR_1, u16 VAR_2, bool VAR_3)
{
 FUNC_0();

 FUNC_2(&VAR_0->wiphy, VAR_1 , VAR_2, VAR_3);
 VAR_0->ops->mgmt_frame_register(&VAR_0->wiphy, VAR_1 , VAR_2, VAR_3);
 FUNC_3(&VAR_0->wiphy);
}
