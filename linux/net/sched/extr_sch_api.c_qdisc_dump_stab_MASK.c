
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct qdisc_size_table {int szopts; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct qdisc_size_table *VAR_3)
{
 struct nlattr *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_2(VAR_2, VAR_1, sizeof(VAR_3->szopts), &VAR_3->szopts))
  goto nla_put_failure;
 FUNC_0(VAR_2, VAR_4);

 return VAR_2->len;

nla_put_failure:
 return -1;
}
