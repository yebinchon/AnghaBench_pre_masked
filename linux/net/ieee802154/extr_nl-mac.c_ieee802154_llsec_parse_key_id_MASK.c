
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* extended_addr; int mode; void* short_addr; void* pan_id; } ;
struct ieee802154_llsec_key_id {int mode; void* extended_source; int short_source; void* id; TYPE_1__ device_addr; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

 int VAR_10 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee802154_llsec_key_id*,int ,int) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct genl_info *VAR_11,
         struct ieee802154_llsec_key_id *VAR_12)
{
 FUNC_1(VAR_12, 0, sizeof(*VAR_12));

 if (!VAR_11->attrs[VAR_5])
  return -VAR_0;

 VAR_12->mode = FUNC_5(VAR_11->attrs[VAR_5]);

 if (VAR_12->mode == VAR_10) {
  if (!VAR_11->attrs[VAR_8] &&
      !(VAR_11->attrs[VAR_9] ||
        VAR_11->attrs[VAR_3]))
   return -VAR_0;

  VAR_12->device_addr.pan_id = FUNC_3(VAR_11->attrs[VAR_8]);

  if (VAR_11->attrs[VAR_9]) {
   VAR_12->device_addr.mode = VAR_2;
   VAR_12->device_addr.short_addr = FUNC_3(VAR_11->attrs[VAR_9]);
  } else {
   VAR_12->device_addr.mode = VAR_1;
   VAR_12->device_addr.extended_addr = FUNC_2(VAR_11->attrs[VAR_3]);
  }
 }

 if (VAR_12->mode != VAR_10 &&
     !VAR_11->attrs[VAR_4])
  return -VAR_0;

 if (VAR_12->mode == 128 &&
     !VAR_11->attrs[VAR_7])
  return -VAR_0;

 if (VAR_12->mode == 129 &&
     !VAR_11->attrs[VAR_6])
  return -VAR_0;

 if (VAR_12->mode != VAR_10)
  VAR_12->id = FUNC_5(VAR_11->attrs[VAR_4]);

 switch (VAR_12->mode) {
 case 128:
 {
  u32 VAR_13 = FUNC_4(VAR_11->attrs[VAR_7]);

  VAR_12->short_source = FUNC_0(VAR_13);
  break;
 }
 case 129:
  VAR_12->extended_source = FUNC_2(VAR_11->attrs[VAR_6]);
  break;
 }

 return 0;
}
