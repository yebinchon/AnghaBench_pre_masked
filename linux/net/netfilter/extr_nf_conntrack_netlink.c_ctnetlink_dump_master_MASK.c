
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct nf_conn const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, const struct nf_conn *VAR_3)
{
 struct nlattr *VAR_4;

 if (!(VAR_3->status & VAR_1))
  return 0;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_4)
  goto nla_put_failure;
 if (FUNC_0(VAR_2, FUNC_1(VAR_3)) < 0)
  goto nla_put_failure;
 FUNC_2(VAR_2, VAR_4);

 return 0;

nla_put_failure:
 return -1;
}
