
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct devlink_sb** user_ptr; } ;
struct devlink_sb {int lock; } ;
struct devlink_port {int lock; } ;
struct devlink {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct devlink_sb*) ;
 int FUNC_1 (struct devlink_sb*) ;
 struct devlink_sb* FUNC_2 (struct genl_info*) ;
 int VAR_4 ;
 struct devlink_sb* FUNC_3 (struct devlink_sb*,struct genl_info*) ;
 struct devlink_sb* FUNC_4 (struct devlink_sb*,struct genl_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(const struct genl_ops *VAR_5,
          struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct devlink *VAR_8;
 int VAR_9;

 FUNC_5(&VAR_4);
 VAR_8 = FUNC_2(VAR_7);
 if (FUNC_0(VAR_8)) {
  FUNC_6(&VAR_4);
  return FUNC_1(VAR_8);
 }
 if (~VAR_5->internal_flags & VAR_3)
  FUNC_5(&VAR_8->lock);
 if (VAR_5->internal_flags & VAR_0) {
  VAR_7->user_ptr[0] = VAR_8;
 } else if (VAR_5->internal_flags & VAR_1) {
  struct devlink_port *VAR_10;

  VAR_10 = FUNC_3(VAR_8, VAR_7);
  if (FUNC_0(VAR_10)) {
   VAR_9 = FUNC_1(VAR_10);
   goto unlock;
  }
  VAR_7->user_ptr[0] = VAR_10;
 }
 if (VAR_5->internal_flags & VAR_2) {
  struct devlink_sb *VAR_11;

  VAR_11 = FUNC_4(VAR_8, VAR_7);
  if (FUNC_0(VAR_11)) {
   VAR_9 = FUNC_1(VAR_11);
   goto unlock;
  }
  VAR_7->user_ptr[1] = VAR_11;
 }
 return 0;

unlock:
 if (~VAR_5->internal_flags & VAR_3)
  FUNC_6(&VAR_8->lock);
 FUNC_6(&VAR_4);
 return VAR_9;
}
