
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct genl_info {int extack; scalar_t__* attrs; struct devlink** user_ptr; } ;
struct devlink_ops {int (* eswitch_mode_set ) (struct devlink*,int ,int ) ;int (* eswitch_inline_mode_set ) (struct devlink*,void*,int ) ;int (* eswitch_encap_mode_set ) (struct devlink*,int,int ) ;} ;
struct devlink {struct devlink_ops* ops; } ;
typedef enum devlink_eswitch_encap_mode { ____Placeholder_devlink_eswitch_encap_mode } devlink_eswitch_encap_mode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct devlink*,int ,int ) ;
 int FUNC_3 (struct devlink*,void*,int ) ;
 int FUNC_4 (struct devlink*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4,
        struct genl_info *VAR_5)
{
 struct devlink *VAR_6 = VAR_5->user_ptr[0];
 const struct devlink_ops *VAR_7 = VAR_6->ops;
 enum devlink_eswitch_encap_mode VAR_8;
 u8 VAR_9;
 int VAR_10 = 0;
 u16 VAR_11;

 if (VAR_5->attrs[VAR_2]) {
  if (!VAR_7->eswitch_mode_set)
   return -VAR_3;
  VAR_11 = FUNC_0(VAR_5->attrs[VAR_2]);
  VAR_10 = VAR_7->eswitch_mode_set(VAR_6, VAR_11, VAR_5->extack);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_5->attrs[VAR_1]) {
  if (!VAR_7->eswitch_inline_mode_set)
   return -VAR_3;
  VAR_9 = FUNC_1(
    VAR_5->attrs[VAR_1]);
  VAR_10 = VAR_7->eswitch_inline_mode_set(VAR_6, VAR_9,
         VAR_5->extack);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_5->attrs[VAR_0]) {
  if (!VAR_7->eswitch_encap_mode_set)
   return -VAR_3;
  VAR_8 = FUNC_1(VAR_5->attrs[VAR_0]);
  VAR_10 = VAR_7->eswitch_encap_mode_set(VAR_6, VAR_8,
        VAR_5->extack);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
