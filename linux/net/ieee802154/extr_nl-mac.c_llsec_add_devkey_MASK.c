
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ieee802154_mlme_ops {TYPE_1__* llsec; } ;
struct ieee802154_llsec_device_key {int frame_counter; int key_id; } ;
struct genl_info {int * attrs; } ;
typedef int __le64 ;
struct TYPE_2__ {int (* add_devkey ) (struct net_device*,int ,struct ieee802154_llsec_device_key*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct genl_info*,int *) ;
 struct ieee802154_mlme_ops* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,int ,struct ieee802154_llsec_device_key*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, struct genl_info *VAR_4)
{
 struct ieee802154_mlme_ops *VAR_5 = FUNC_1(VAR_3);
 struct ieee802154_llsec_device_key VAR_6;
 __le64 VAR_7;

 if (!VAR_4->attrs[VAR_2] ||
     !VAR_4->attrs[VAR_1] ||
     FUNC_0(VAR_4, &VAR_6.key_id))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4->attrs[VAR_1]);
 VAR_6.frame_counter = FUNC_3(VAR_4->attrs[VAR_2]);

 return VAR_5->llsec->add_devkey(VAR_3, VAR_7, &VAR_6);
}
