
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_dev {scalar_t__ promiscuous_mode; scalar_t__ pan_id; scalar_t__ short_addr; scalar_t__ extended_addr; scalar_t__ min_be; scalar_t__ max_be; scalar_t__ csma_retries; scalar_t__ frame_retries; scalar_t__ lbt; } ;
struct TYPE_2__ {int flags; } ;
struct ieee802154_local {TYPE_1__ hw; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_local *VAR_6,
         struct wpan_dev *VAR_7,
         struct wpan_dev *VAR_8)
{
 FUNC_0();

 if (VAR_6->hw.flags & VAR_5) {
  if (VAR_7->promiscuous_mode != VAR_8->promiscuous_mode)
   return -VAR_0;
 }

 if (VAR_6->hw.flags & VAR_1) {
  if (VAR_7->pan_id != VAR_8->pan_id ||
      VAR_7->short_addr != VAR_8->short_addr ||
      VAR_7->extended_addr != VAR_8->extended_addr)
   return -VAR_0;
 }

 if (VAR_6->hw.flags & VAR_2) {
  if (VAR_7->min_be != VAR_8->min_be ||
      VAR_7->max_be != VAR_8->max_be ||
      VAR_7->csma_retries != VAR_8->csma_retries)
   return -VAR_0;
 }

 if (VAR_6->hw.flags & VAR_3) {
  if (VAR_7->frame_retries != VAR_8->frame_retries)
   return -VAR_0;
 }

 if (VAR_6->hw.flags & VAR_4) {
  if (VAR_7->lbt != VAR_8->lbt)
   return -VAR_0;
 }

 return 0;
}
