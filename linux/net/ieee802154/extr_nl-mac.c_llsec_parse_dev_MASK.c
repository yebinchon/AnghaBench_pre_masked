
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_llsec_device {int seclevel_exempt; scalar_t__ key_mode; int frame_counter; int hwaddr; void* short_addr; void* pan_id; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee802154_llsec_device*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct genl_info *VAR_9,
  struct ieee802154_llsec_device *VAR_10)
{
 FUNC_1(VAR_10, 0, sizeof(*VAR_10));

 if (!VAR_9->attrs[VAR_5] ||
     !VAR_9->attrs[VAR_2] ||
     !VAR_9->attrs[VAR_4] ||
     !VAR_9->attrs[VAR_3] ||
     (!!VAR_9->attrs[VAR_6] !=
      !!VAR_9->attrs[VAR_7]))
  return -VAR_0;

 if (VAR_9->attrs[VAR_6]) {
  VAR_10->pan_id = FUNC_3(VAR_9->attrs[VAR_6]);
  VAR_10->short_addr = FUNC_3(VAR_9->attrs[VAR_7]);
 } else {
  VAR_10->short_addr = FUNC_0(VAR_1);
 }

 VAR_10->hwaddr = FUNC_2(VAR_9->attrs[VAR_2]);
 VAR_10->frame_counter = FUNC_4(VAR_9->attrs[VAR_5]);
 VAR_10->seclevel_exempt = !!FUNC_5(VAR_9->attrs[VAR_4]);
 VAR_10->key_mode = FUNC_5(VAR_9->attrs[VAR_3]);

 if (VAR_10->key_mode >= VAR_8)
  return -VAR_0;

 return 0;
}
