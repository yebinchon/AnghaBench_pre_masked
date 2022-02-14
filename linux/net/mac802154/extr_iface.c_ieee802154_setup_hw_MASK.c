
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_dev {int frame_retries; int csma_retries; int max_be; int min_be; int lbt; int short_addr; int extended_addr; int pan_id; int promiscuous_mode; } ;
struct ieee802154_sub_if_data {struct wpan_dev wpan_dev; struct ieee802154_local* local; } ;
struct TYPE_2__ {int flags; } ;
struct ieee802154_local {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee802154_local*,int ,int ,int ) ;
 int FUNC_1 (struct ieee802154_local*,int ) ;
 int FUNC_2 (struct ieee802154_local*,int ) ;
 int FUNC_3 (struct ieee802154_local*,int ) ;
 int FUNC_4 (struct ieee802154_local*,int ) ;
 int FUNC_5 (struct ieee802154_local*,int ) ;
 int FUNC_6 (struct ieee802154_local*,int ) ;

__attribute__((used)) static int FUNC_7(struct ieee802154_sub_if_data *VAR_5)
{
 struct ieee802154_local *VAR_6 = VAR_5->local;
 struct wpan_dev *VAR_7 = &VAR_5->wpan_dev;
 int VAR_8;

 if (VAR_6->hw.flags & VAR_4) {
  VAR_8 = FUNC_5(VAR_6,
            VAR_7->promiscuous_mode);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_6->hw.flags & VAR_0) {
  VAR_8 = FUNC_4(VAR_6, VAR_7->pan_id);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_1(VAR_6, VAR_7->extended_addr);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = FUNC_6(VAR_6, VAR_7->short_addr);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_6->hw.flags & VAR_3) {
  VAR_8 = FUNC_2(VAR_6, VAR_7->lbt);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_6->hw.flags & VAR_1) {
  VAR_8 = FUNC_0(VAR_6, VAR_7->min_be,
       VAR_7->max_be,
       VAR_7->csma_retries);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_6->hw.flags & VAR_2) {
  VAR_8 = FUNC_3(VAR_6, VAR_7->frame_retries);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
