
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink*) ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*,struct devlink*,int,int ,int ,int ) ;
 int FUNC_3 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct devlink *VAR_6, enum devlink_command VAR_7)
{
 struct sk_buff *VAR_8;
 int VAR_9;

 FUNC_0(VAR_7 != VAR_1 && VAR_7 != VAR_0);

 VAR_8 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_8)
  return;

 VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_7, 0, 0, 0);
 if (VAR_9) {
  FUNC_4(VAR_8);
  return;
 }

 FUNC_3(&VAR_5, FUNC_1(VAR_6),
    VAR_8, 0, VAR_2, VAR_3);
}
