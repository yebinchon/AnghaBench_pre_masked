
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802154_llsec_key_id {int dummy; } ;
struct TYPE_4__ {int list; struct ieee802154_llsec_key_id key_id; } ;
struct mac802154_llsec_device_key {TYPE_2__ devkey; } ;
struct TYPE_3__ {int keys; } ;
struct mac802154_llsec_device {int lock; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac802154_llsec_device_key* FUNC_0 (int,int ) ;
 int FUNC_1 (struct mac802154_llsec_device_key*) ;
 int FUNC_2 (int *,int *) ;
 struct mac802154_llsec_device_key* FUNC_3 (struct mac802154_llsec_device*,struct ieee802154_llsec_key_id const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct mac802154_llsec_device *VAR_2,
      const struct ieee802154_llsec_key_id *VAR_3)
{
 struct mac802154_llsec_device_key *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_3);

 if (!VAR_4) {
  struct mac802154_llsec_device_key *VAR_5;

  VAR_5 = FUNC_0(sizeof(*VAR_4), VAR_1);
  if (!VAR_5)
   return -VAR_0;

  VAR_5->devkey.key_id = *VAR_3;

  FUNC_4(&VAR_2->lock);

  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (!VAR_4)
   FUNC_2(&VAR_5->devkey.list, &VAR_2->dev.keys);
  else
   FUNC_1(VAR_5);

  FUNC_5(&VAR_2->lock);
 }

 return 0;
}
