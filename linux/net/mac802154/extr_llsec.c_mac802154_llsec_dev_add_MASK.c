
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ieee802154_llsec_device {int list; int short_addr; int keys; int hwaddr; int pan_id; } ;
struct mac802154_llsec_device {struct ieee802154_llsec_device dev; int bucket_hw; int bucket_s; int lock; } ;
struct TYPE_2__ {int devices; } ;
struct mac802154_llsec {TYPE_1__ table; int devices_hw; int devices_short; } ;
typedef int hwkey ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 struct mac802154_llsec_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (struct mac802154_llsec*,int ) ;
 scalar_t__ FUNC_7 (struct mac802154_llsec*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct mac802154_llsec *VAR_4,
       const struct ieee802154_llsec_device *VAR_5)
{
 struct mac802154_llsec_device *VAR_6;
 u32 VAR_7 = FUNC_9(VAR_5->short_addr, VAR_5->pan_id);
 u64 VAR_8 = FUNC_8(VAR_5->hwaddr);

 FUNC_0(sizeof(VAR_8) != VAR_3);

 if ((FUNC_10(VAR_5->short_addr) &&
      FUNC_7(VAR_4, VAR_5->short_addr, VAR_5->pan_id)) ||
      FUNC_6(VAR_4, VAR_5->hwaddr))
  return -VAR_0;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->dev = *VAR_5;
 FUNC_11(&VAR_6->lock);
 FUNC_2(&VAR_6->dev.keys);

 if (FUNC_10(VAR_5->short_addr))
  FUNC_3(VAR_4->devices_short, &VAR_6->bucket_s, VAR_7);
 else
  FUNC_1(&VAR_6->bucket_s);

 FUNC_3(VAR_4->devices_hw, &VAR_6->bucket_hw, VAR_8);
 FUNC_5(&VAR_6->dev.list, &VAR_4->table.devices);

 return 0;
}
