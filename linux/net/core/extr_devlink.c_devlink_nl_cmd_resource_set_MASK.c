
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct genl_info {int extack; int * attrs; struct devlink** user_ptr; } ;
struct devlink_resource {struct devlink_resource* parent; int size_new; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct devlink_resource* FUNC_0 (struct devlink*,int *,int ) ;
 int FUNC_1 (struct devlink_resource*) ;
 int FUNC_2 (struct devlink_resource*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3,
           struct genl_info *VAR_4)
{
 struct devlink *VAR_5 = VAR_4->user_ptr[0];
 struct devlink_resource *VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 int VAR_9;

 if (!VAR_4->attrs[VAR_0] ||
     !VAR_4->attrs[VAR_1])
  return -VAR_2;
 VAR_7 = FUNC_3(VAR_4->attrs[VAR_0]);

 VAR_6 = FUNC_0(VAR_5, ((void*)0), VAR_7);
 if (!VAR_6)
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_4->attrs[VAR_1]);
 VAR_9 = FUNC_2(VAR_6, VAR_8, VAR_4->extack);
 if (VAR_9)
  return VAR_9;

 VAR_6->size_new = VAR_8;
 FUNC_1(VAR_6);
 if (VAR_6->parent)
  FUNC_1(VAR_6->parent);
 return 0;
}
