
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct devlink** user_ptr; } ;
struct devlink {int dpipe_table_list; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genl_info*,int ,int ,int *,char const*) ;
 char* FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
       struct genl_info *VAR_3)
{
 struct devlink *VAR_4 = VAR_3->user_ptr[0];
 const char *VAR_5 = ((void*)0);

 if (VAR_3->attrs[VAR_0])
  VAR_5 = FUNC_1(VAR_3->attrs[VAR_0]);

 return FUNC_0(VAR_3, VAR_1, 0,
      &VAR_4->dpipe_table_list,
      VAR_5);
}
