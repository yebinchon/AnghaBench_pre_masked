
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_info {int extack; int * attrs; struct devlink** user_ptr; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct devlink*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3,
       struct genl_info *VAR_4)
{
 struct devlink *VAR_5 = VAR_4->user_ptr[0];
 u32 VAR_6;
 u32 VAR_7;

 if (!VAR_4->attrs[VAR_0] ||
     !VAR_4->attrs[VAR_1])
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_4->attrs[VAR_0]);
 VAR_7 = FUNC_1(VAR_4->attrs[VAR_1]);
 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_4->extack);
}
