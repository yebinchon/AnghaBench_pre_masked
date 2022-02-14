
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {int extack; struct devlink** user_ptr; } ;
struct devlink {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reload_down ) (struct devlink*,int ) ;int (* reload_up ) (struct devlink*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct devlink*,int) ;
 int FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*,int *,struct genl_info*) ;
 int FUNC_4 (struct devlink*,int ) ;
 int FUNC_5 (struct devlink*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 struct devlink *VAR_3 = VAR_2->user_ptr[0];
 int VAR_4;

 if (!FUNC_2(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3, ((void*)0), VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_2->extack, "resources size validation failed");
  return VAR_4;
 }
 VAR_4 = VAR_3->ops->reload_down(VAR_3, VAR_2->extack);
 if (VAR_4)
  return VAR_4;
 VAR_4 = VAR_3->ops->reload_up(VAR_3, VAR_2->extack);
 FUNC_1(VAR_3, !!VAR_4);
 return VAR_4;
}
