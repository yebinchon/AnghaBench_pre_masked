
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_exts {scalar_t__ type; scalar_t__ police; int actions; scalar_t__ action; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct tc_action*,int ,int ) ;
 struct tc_action* FUNC_5 (struct tcf_exts*) ;
 scalar_t__ FUNC_6 (struct tcf_exts*) ;

int FUNC_7(struct sk_buff *VAR_1, struct tcf_exts *VAR_2)
{
 return 0;

}
