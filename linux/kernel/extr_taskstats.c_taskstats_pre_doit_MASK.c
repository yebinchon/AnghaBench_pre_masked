
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nla_policy {int dummy; } ;
struct genl_ops {int cmd; } ;
struct genl_info {int extack; int nlhdr; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct nla_policy* VAR_3 ;
 int FUNC_0 (int ,int ,int ,struct nla_policy const*,int ) ;
 struct nla_policy* VAR_4 ;

__attribute__((used)) static int FUNC_1(const struct genl_ops *VAR_5, struct sk_buff *VAR_6,
         struct genl_info *VAR_7)
{
 const struct nla_policy *VAR_8 = ((void*)0);

 switch (VAR_5->cmd) {
 case 128:
  VAR_8 = VAR_4;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_7->nlhdr, VAR_1,
      VAR_2, VAR_8,
      VAR_7->extack);
}
