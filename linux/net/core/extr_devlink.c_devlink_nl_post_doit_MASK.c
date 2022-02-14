
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {int dummy; } ;
struct devlink {int lock; } ;


 int VAR_0 ;
 struct devlink* FUNC_0 (struct genl_info*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const struct genl_ops *VAR_2,
     struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct devlink *VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (~VAR_2->internal_flags & VAR_0)
  FUNC_1(&VAR_5->lock);
 FUNC_1(&VAR_1);
}
