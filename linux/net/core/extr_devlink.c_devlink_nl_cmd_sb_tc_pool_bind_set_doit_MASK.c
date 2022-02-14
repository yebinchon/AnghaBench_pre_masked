
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct genl_info {int extack; int * attrs; struct devlink_sb** user_ptr; } ;
struct devlink_sb {int index; } ;
struct devlink_port {int index; } ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink_sb*,struct genl_info*,int *) ;
 int FUNC_1 (struct genl_info*,int*) ;
 int FUNC_2 (struct devlink_sb*,struct genl_info*,int,int *) ;
 int FUNC_3 (struct devlink_sb*,int ,int ,int,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2,
         struct genl_info *VAR_3)
{
 struct devlink_port *VAR_4 = VAR_3->user_ptr[0];
 struct devlink_sb *VAR_5 = VAR_3->user_ptr[1];
 enum devlink_sb_pool_type VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_3,
      VAR_6, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_5, VAR_3,
        &VAR_8);
 if (VAR_10)
  return VAR_10;

 if (!VAR_3->attrs[VAR_0])
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_3->attrs[VAR_0]);
 return FUNC_3(VAR_4, VAR_5->index,
        VAR_7, VAR_6,
        VAR_8, VAR_9, VAR_3->extack);
}
