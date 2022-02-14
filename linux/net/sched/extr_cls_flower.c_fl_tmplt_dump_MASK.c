
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct fl_flow_key {int dummy; } ;
struct fl_flow_tmplt {struct fl_flow_key mask; struct fl_flow_key dummy_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct net*,struct fl_flow_key*,struct fl_flow_key*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct net *VAR_3, void *VAR_4)
{
 struct fl_flow_tmplt *VAR_5 = VAR_4;
 struct fl_flow_key *VAR_6, *VAR_7;
 struct nlattr *VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_8)
  goto nla_put_failure;

 VAR_6 = &VAR_5->dummy_key;
 VAR_7 = &VAR_5->mask;

 if (FUNC_0(VAR_2, VAR_3, VAR_6, VAR_7))
  goto nla_put_failure;

 FUNC_2(VAR_2, VAR_8);

 return VAR_2->len;

nla_put_failure:
 FUNC_1(VAR_2, VAR_8);
 return -VAR_0;
}
