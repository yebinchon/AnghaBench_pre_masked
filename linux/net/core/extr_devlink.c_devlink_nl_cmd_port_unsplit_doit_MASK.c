
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_info {int extack; int * attrs; struct devlink** user_ptr; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
         struct genl_info *VAR_3)
{
 struct devlink *VAR_4 = VAR_3->user_ptr[0];
 u32 VAR_5;

 if (!VAR_3->attrs[VAR_0])
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_3->attrs[VAR_0]);
 return FUNC_0(VAR_4, VAR_5, VAR_3->extack);
}
