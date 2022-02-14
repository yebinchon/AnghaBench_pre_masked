
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_compat_msg {scalar_t__ cmd; int req; } ;
struct tipc_nl_compat_cmd_doit {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct tipc_nl_compat_cmd_doit *VAR_6,
      struct sk_buff *VAR_7,
      struct tipc_nl_compat_msg *VAR_8)
{
 u32 VAR_9;
 struct nlattr *VAR_10;

 VAR_9 = FUNC_4(*(__be32 *)FUNC_0(VAR_8->req));

 VAR_10 = FUNC_2(VAR_7, VAR_3);
 if (!VAR_10)
  return -VAR_0;

 if (VAR_8->cmd == VAR_2) {
  if (FUNC_3(VAR_7, VAR_4, VAR_9))
   return -VAR_0;
 } else if (VAR_8->cmd == VAR_1) {
  if (FUNC_3(VAR_7, VAR_5, VAR_9))
   return -VAR_0;
 }
 FUNC_1(VAR_7, VAR_10);

 return 0;
}
