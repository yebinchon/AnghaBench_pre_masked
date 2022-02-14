
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {int * attrs; struct devlink** user_ptr; } ;
struct devlink_dpipe_table {TYPE_1__* table_ops; } ;
struct devlink {int dpipe_table_list; } ;
struct TYPE_2__ {int entries_dump; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct genl_info*,int ,int ,struct devlink_dpipe_table*) ;
 struct devlink_dpipe_table* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3,
         struct genl_info *VAR_4)
{
 struct devlink *VAR_5 = VAR_4->user_ptr[0];
 struct devlink_dpipe_table *VAR_6;
 const char *VAR_7;

 if (!VAR_4->attrs[VAR_0])
  return -VAR_2;

 VAR_7 = FUNC_2(VAR_4->attrs[VAR_0]);
 VAR_6 = FUNC_1(&VAR_5->dpipe_table_list,
      VAR_7);
 if (!VAR_6)
  return -VAR_2;

 if (!VAR_6->table_ops->entries_dump)
  return -VAR_2;

 return FUNC_0(VAR_4, VAR_1,
       0, VAR_6);
}
