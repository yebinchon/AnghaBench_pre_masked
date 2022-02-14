
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {struct devlink_sb** user_ptr; } ;
struct devlink_sb {int index; struct devlink_ops* ops; } ;
struct devlink_ops {int (* sb_occ_max_clear ) (struct devlink_sb*,int ) ;} ;
struct devlink {int index; struct devlink_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_sb*,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1,
      struct genl_info *VAR_2)
{
 struct devlink *VAR_3 = VAR_2->user_ptr[0];
 struct devlink_sb *VAR_4 = VAR_2->user_ptr[1];
 const struct devlink_ops *VAR_5 = VAR_3->ops;

 if (VAR_5->sb_occ_max_clear)
  return VAR_5->sb_occ_max_clear(VAR_3, VAR_4->index);
 return -VAR_0;
}
