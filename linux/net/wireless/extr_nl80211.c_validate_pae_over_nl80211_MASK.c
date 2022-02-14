
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct genl_info {int * attrs; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int tx_control_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genl_info*,char*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct cfg80211_registered_device *VAR_4,
         struct genl_info *VAR_5)
{
 if (!VAR_5->attrs[VAR_2]) {
  FUNC_0(VAR_5, "SOCKET_OWNER not set");
  return -VAR_0;
 }

 if (!VAR_4->ops->tx_control_port ||
     !FUNC_1(&VAR_4->wiphy,
         VAR_3))
  return -VAR_1;

 return 0;
}
