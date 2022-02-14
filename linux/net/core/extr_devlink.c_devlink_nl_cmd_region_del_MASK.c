
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct devlink** user_ptr; } ;
struct devlink_snapshot {int dummy; } ;
struct devlink_region {int dummy; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct devlink_region* FUNC_0 (struct devlink*,char const*) ;
 int FUNC_1 (struct devlink_region*,struct devlink_snapshot*) ;
 struct devlink_snapshot* FUNC_2 (struct devlink_region*,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3,
         struct genl_info *VAR_4)
{
 struct devlink *VAR_5 = VAR_4->user_ptr[0];
 struct devlink_snapshot *VAR_6;
 struct devlink_region *VAR_7;
 const char *VAR_8;
 u32 VAR_9;

 if (!VAR_4->attrs[VAR_0] ||
     !VAR_4->attrs[VAR_1])
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_4->attrs[VAR_0]);
 VAR_9 = FUNC_4(VAR_4->attrs[VAR_1]);

 VAR_7 = FUNC_0(VAR_5, VAR_8);
 if (!VAR_7)
  return -VAR_2;

 VAR_6 = FUNC_2(VAR_7, VAR_9);
 if (!VAR_6)
  return -VAR_2;

 FUNC_1(VAR_7, VAR_6);
 return 0;
}
