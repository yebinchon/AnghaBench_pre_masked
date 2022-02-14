
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; int extended_addr; int short_addr; int pan_id; } ;
struct ieee802154_llsec_key_id {scalar_t__ mode; scalar_t__ id; int extended_source; int short_source; TYPE_1__ device_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_14,
        const struct ieee802154_llsec_key_id *VAR_15)
{
 if (FUNC_4(VAR_14, VAR_5, VAR_15->mode))
  return -VAR_0;

 if (VAR_15->mode == VAR_12) {
  if (FUNC_2(VAR_14, VAR_9,
          VAR_15->device_addr.pan_id))
   return -VAR_0;

  if (VAR_15->device_addr.mode == VAR_2 &&
      FUNC_2(VAR_14, VAR_10,
          VAR_15->device_addr.short_addr))
   return -VAR_0;

  if (VAR_15->device_addr.mode == VAR_1 &&
      FUNC_1(VAR_14, VAR_3,
       VAR_15->device_addr.extended_addr,
       VAR_8))
   return -VAR_0;
 }

 if (VAR_15->mode != VAR_12 &&
     FUNC_4(VAR_14, VAR_4, VAR_15->id))
  return -VAR_0;

 if (VAR_15->mode == VAR_13 &&
     FUNC_3(VAR_14, VAR_7,
   FUNC_0(VAR_15->short_source)))
  return -VAR_0;

 if (VAR_15->mode == VAR_11 &&
     FUNC_1(VAR_14, VAR_6,
      VAR_15->extended_source, VAR_8))
  return -VAR_0;

 return 0;
}
