
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct mac802154_llsec_device_key {TYPE_1__ devkey; } ;
struct mac802154_llsec_device {int dummy; } ;
struct mac802154_llsec {int dummy; } ;
struct ieee802154_llsec_device_key {int key_id; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (struct mac802154_llsec_device_key*,int ) ;
 int FUNC_1 (int *) ;
 struct mac802154_llsec_device* FUNC_2 (struct mac802154_llsec*,int ) ;
 struct mac802154_llsec_device_key* FUNC_3 (struct mac802154_llsec_device*,int *) ;
 int VAR_1 ;

int FUNC_4(struct mac802154_llsec *VAR_2,
          __le64 VAR_3,
          const struct ieee802154_llsec_device_key *VAR_4)
{
 struct mac802154_llsec_device *VAR_5;
 struct mac802154_llsec_device_key *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3);

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5, &VAR_4->key_id);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(&VAR_6->devkey.list);
 FUNC_0(VAR_6, VAR_1);
 return 0;
}
