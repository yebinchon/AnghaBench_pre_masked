
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ frame_counter; } ;
struct mac802154_llsec_device_key {TYPE_1__ devkey; } ;
struct TYPE_4__ {scalar_t__ key_mode; scalar_t__ frame_counter; } ;
struct mac802154_llsec_device {int lock; TYPE_2__ dev; } ;
struct ieee802154_llsec_key_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mac802154_llsec_device_key* FUNC_0 (struct mac802154_llsec_device*,struct ieee802154_llsec_key_id const*) ;
 int FUNC_1 (struct mac802154_llsec_device*,struct ieee802154_llsec_key_id const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct mac802154_llsec_device *VAR_4,
    const struct ieee802154_llsec_key_id *VAR_5,
    u32 VAR_6)
{
 struct mac802154_llsec_device_key *VAR_7 = ((void*)0);

 if (VAR_4->dev.key_mode == VAR_3) {
  VAR_7 = FUNC_0(VAR_4, VAR_5);
  if (!VAR_7)
   return -VAR_1;
 }

 if (VAR_4->dev.key_mode == VAR_2) {
  int VAR_8 = FUNC_1(VAR_4, VAR_5);

  if (VAR_8 < 0)
   return VAR_8;
 }

 FUNC_2(&VAR_4->lock);

 if ((!VAR_7 && VAR_6 < VAR_4->dev.frame_counter) ||
     (VAR_7 && VAR_6 < VAR_7->devkey.frame_counter)) {
  FUNC_3(&VAR_4->lock);
  return -VAR_0;
 }

 if (VAR_7)
  VAR_7->devkey.frame_counter = VAR_6 + 1;
 else
  VAR_4->dev.frame_counter = VAR_6 + 1;

 FUNC_3(&VAR_4->lock);

 return 0;
}
