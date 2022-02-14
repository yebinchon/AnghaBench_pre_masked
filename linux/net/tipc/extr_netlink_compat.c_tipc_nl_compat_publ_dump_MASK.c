
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_compat_msg {int dummy; } ;
struct tipc_nl_compat_cmd_dump {int format; int dumpit; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tipc_nl_compat_cmd_dump*,struct tipc_nl_compat_msg*,struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_8(struct tipc_nl_compat_msg *VAR_11, u32 VAR_12)
{
 int VAR_13;
 void *VAR_14;
 struct nlattr *VAR_15;
 struct sk_buff *VAR_16;
 struct tipc_nl_compat_cmd_dump VAR_17;

 VAR_16 = FUNC_7(VAR_3, VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_16, 0, 0, &VAR_9, VAR_4,
     VAR_7);
 if (!VAR_14) {
  FUNC_3(VAR_16);
  return -VAR_0;
 }

 VAR_15 = FUNC_5(VAR_16, VAR_5);
 if (!VAR_15) {
  FUNC_3(VAR_16);
  return -VAR_0;
 }

 if (FUNC_6(VAR_16, VAR_6, VAR_12)) {
  FUNC_3(VAR_16);
  return -VAR_0;
 }

 FUNC_4(VAR_16, VAR_15);
 FUNC_1(VAR_16, VAR_14);

 VAR_17.dumpit = VAR_10;
 VAR_17.format = VAR_8;

 VAR_13 = FUNC_0(&VAR_17, VAR_11, VAR_16);

 FUNC_3(VAR_16);

 return VAR_13;
}
