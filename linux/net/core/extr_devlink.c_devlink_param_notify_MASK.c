
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_param_item {int dummy; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink*) ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*,struct devlink*,unsigned int,struct devlink_param_item*,int,int ,int ,int ) ;
 int FUNC_3 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct devlink *VAR_8,
     unsigned int VAR_9,
     struct devlink_param_item *VAR_10,
     enum devlink_command VAR_11)
{
 struct sk_buff *VAR_12;
 int VAR_13;

 FUNC_0(VAR_11 != VAR_1 && VAR_11 != VAR_0 &&
  VAR_11 != VAR_3 &&
  VAR_11 != VAR_2);

 VAR_12 = FUNC_5(VAR_6, VAR_5);
 if (!VAR_12)
  return;
 VAR_13 = FUNC_2(VAR_12, VAR_8, VAR_9, VAR_10, VAR_11,
        0, 0, 0);
 if (VAR_13) {
  FUNC_4(VAR_12);
  return;
 }

 FUNC_3(&VAR_7, FUNC_1(VAR_8),
    VAR_12, 0, VAR_4, VAR_5);
}
