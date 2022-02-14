
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_compat_msg {int req; } ;
struct tipc_link_config {int name; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct tipc_nl_compat_msg*,struct tipc_link_config*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4,
        struct tipc_nl_compat_msg *VAR_5)
{
 struct nlattr *VAR_6;
 struct nlattr *VAR_7;
 struct tipc_link_config *VAR_8;

 VAR_8 = (struct tipc_link_config *)FUNC_0(VAR_5->req);

 VAR_7 = FUNC_3(VAR_4, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_4(VAR_4, VAR_2, VAR_8->name))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_5, VAR_8);
 FUNC_2(VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_7);

 return 0;
}
