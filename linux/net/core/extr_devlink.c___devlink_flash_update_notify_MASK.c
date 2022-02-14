
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
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink*) ;
 int VAR_6 ;
 int FUNC_2 (struct sk_buff*,struct devlink*,int,char const*,char const*,unsigned long,unsigned long) ;
 int FUNC_3 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct devlink *VAR_7,
       enum devlink_command VAR_8,
       const char *VAR_9,
       const char *VAR_10,
       unsigned long VAR_11,
       unsigned long VAR_12)
{
 struct sk_buff *VAR_13;
 int VAR_14;

 FUNC_0(VAR_8 != VAR_0 &&
  VAR_8 != VAR_1 &&
  VAR_8 != VAR_2);

 VAR_13 = FUNC_5(VAR_5, VAR_4);
 if (!VAR_13)
  return;

 VAR_14 = FUNC_2(VAR_13, VAR_7, VAR_8, VAR_9,
        VAR_10, VAR_11, VAR_12);
 if (VAR_14)
  goto out_free_msg;

 FUNC_3(&VAR_6, FUNC_1(VAR_7),
    VAR_13, 0, VAR_3, VAR_4);
 return;

out_free_msg:
 FUNC_4(VAR_13);
}
