
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int extack; struct nlattr** attrs; struct devlink** user_ptr; } ;
struct devlink {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flash_update ) (struct devlink*,char const*,char const*,int ) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct devlink*,char const*,char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4,
           struct genl_info *VAR_5)
{
 struct devlink *VAR_6 = VAR_5->user_ptr[0];
 const char *VAR_7, *VAR_8;
 struct nlattr *VAR_9;

 if (!VAR_6->ops->flash_update)
  return -VAR_3;

 if (!VAR_5->attrs[VAR_1])
  return -VAR_2;
 VAR_7 = FUNC_0(VAR_5->attrs[VAR_1]);

 VAR_9 = VAR_5->attrs[VAR_0];
 VAR_8 = VAR_9 ? FUNC_0(VAR_9) : ((void*)0);

 return VAR_6->ops->flash_update(VAR_6, VAR_7, VAR_8,
       VAR_5->extack);
}
