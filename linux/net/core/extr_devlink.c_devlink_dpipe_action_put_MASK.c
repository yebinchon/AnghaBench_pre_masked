
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_dpipe_header {int global; int id; struct devlink_dpipe_field* fields; } ;
struct devlink_dpipe_field {int id; } ;
struct devlink_dpipe_action {size_t field_id; int header_index; int type; struct devlink_dpipe_header* header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

int FUNC_5(struct sk_buff *VAR_7,
        struct devlink_dpipe_action *VAR_8)
{
 struct devlink_dpipe_header *VAR_9 = VAR_8->header;
 struct devlink_dpipe_field *VAR_10 = &VAR_9->fields[VAR_8->field_id];
 struct nlattr *VAR_11;

 VAR_11 = FUNC_2(VAR_7, VAR_0);
 if (!VAR_11)
  return -VAR_6;

 if (FUNC_3(VAR_7, VAR_1, VAR_8->type) ||
     FUNC_3(VAR_7, VAR_5, VAR_8->header_index) ||
     FUNC_3(VAR_7, VAR_4, VAR_9->id) ||
     FUNC_3(VAR_7, VAR_2, VAR_10->id) ||
     FUNC_4(VAR_7, VAR_3, VAR_9->global))
  goto nla_put_failure;

 FUNC_1(VAR_7, VAR_11);
 return 0;

nla_put_failure:
 FUNC_0(VAR_7, VAR_11);
 return -VAR_6;
}
