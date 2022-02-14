
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_dpipe_header {int fields_count; struct devlink_dpipe_field* fields; } ;
struct devlink_dpipe_field {int mapping_type; int bitwidth; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6,
        const struct devlink_dpipe_header *VAR_7)
{
 struct devlink_dpipe_field *VAR_8;
 struct nlattr *VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7->fields_count; VAR_10++) {
  VAR_8 = &VAR_7->fields[VAR_10];
  VAR_9 = FUNC_2(VAR_6,
         VAR_0);
  if (!VAR_9)
   return -VAR_5;
  if (FUNC_3(VAR_6, VAR_4, VAR_8->name) ||
      FUNC_4(VAR_6, VAR_2, VAR_8->id) ||
      FUNC_4(VAR_6, VAR_1, VAR_8->bitwidth) ||
      FUNC_4(VAR_6, VAR_3, VAR_8->mapping_type))
   goto nla_put_failure;
  FUNC_1(VAR_6, VAR_9);
 }
 return 0;

nla_put_failure:
 FUNC_0(VAR_6, VAR_9);
 return -VAR_5;
}
