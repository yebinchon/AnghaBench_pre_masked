
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_llsec_device_key {int list; int key_id; } ;
struct mac802154_llsec_device_key {struct ieee802154_llsec_device_key devkey; } ;
struct TYPE_2__ {int keys; } ;
struct mac802154_llsec_device {TYPE_1__ dev; } ;
struct mac802154_llsec {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mac802154_llsec_device_key* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct mac802154_llsec_device* FUNC_2 (struct mac802154_llsec*,int ) ;
 scalar_t__ FUNC_3 (struct mac802154_llsec_device*,int *) ;

int FUNC_4(struct mac802154_llsec *VAR_4,
          __le64 VAR_5,
          const struct ieee802154_llsec_device_key *VAR_6)
{
 struct mac802154_llsec_device *VAR_7;
 struct mac802154_llsec_device_key *VAR_8;

 VAR_7 = FUNC_2(VAR_4, VAR_5);

 if (!VAR_7)
  return -VAR_1;

 if (FUNC_3(VAR_7, &VAR_6->key_id))
  return -VAR_0;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->devkey = *VAR_6;
 FUNC_1(&VAR_8->devkey.list, &VAR_7->dev.keys);
 return 0;
}
