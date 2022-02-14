
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ieee802154_mlme_ops {TYPE_1__* llsec; } ;
struct ieee802154_llsec_device_key {int key_id; } ;
struct genl_info {int * attrs; } ;
typedef int __le64 ;
struct TYPE_2__ {int (* del_devkey ) (struct net_device*,int ,struct ieee802154_llsec_device_key*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct genl_info*,int *) ;
 struct ieee802154_mlme_ops* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int ,struct ieee802154_llsec_device_key*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct genl_info *VAR_3)
{
 struct ieee802154_mlme_ops *VAR_4 = FUNC_1(VAR_2);
 struct ieee802154_llsec_device_key VAR_5;
 __le64 VAR_6;

 if (!VAR_3->attrs[VAR_1] ||
     FUNC_0(VAR_3, &VAR_5.key_id))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3->attrs[VAR_1]);

 return VAR_4->llsec->del_devkey(VAR_2, VAR_6, &VAR_5);
}
