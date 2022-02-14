
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conn_synproxy {int tsoff; int its; int isn; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct nf_conn_synproxy* FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, struct nf_conn *VAR_5)
{
 struct nf_conn_synproxy *VAR_6 = FUNC_1(VAR_5);
 struct nlattr *VAR_7;

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_3(VAR_4, VAR_0);
 if (!VAR_7)
  goto nla_put_failure;

 if (FUNC_4(VAR_4, VAR_1, FUNC_0(VAR_6->isn)) ||
     FUNC_4(VAR_4, VAR_2, FUNC_0(VAR_6->its)) ||
     FUNC_4(VAR_4, VAR_3, FUNC_0(VAR_6->tsoff)))
  goto nla_put_failure;

 FUNC_2(VAR_4, VAR_7);

 return 0;

nla_put_failure:
 return -1;
}
