
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_llsec_seclevel {scalar_t__ frame_type; void* device_override; void* sec_levels; void* cmd_frame_id; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ieee802154_llsec_seclevel*,int ,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct genl_info *VAR_6,
       struct ieee802154_llsec_seclevel *VAR_7)
{
 FUNC_0(VAR_7, 0, sizeof(*VAR_7));

 if (!VAR_6->attrs[VAR_3] ||
     !VAR_6->attrs[VAR_4] ||
     !VAR_6->attrs[VAR_2])
  return -VAR_0;

 VAR_7->frame_type = FUNC_1(VAR_6->attrs[VAR_3]);
 if (VAR_7->frame_type == VAR_5) {
  if (!VAR_6->attrs[VAR_1])
   return -VAR_0;

  VAR_7->cmd_frame_id = FUNC_1(VAR_6->attrs[VAR_1]);
 }

 VAR_7->sec_levels = FUNC_1(VAR_6->attrs[VAR_4]);
 VAR_7->device_override = FUNC_1(VAR_6->attrs[VAR_2]);

 return 0;
}
