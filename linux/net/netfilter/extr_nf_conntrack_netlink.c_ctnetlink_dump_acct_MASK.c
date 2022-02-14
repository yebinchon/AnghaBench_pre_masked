
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn_acct {int dummy; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct nf_conn_acct*,int ,int) ;
 struct nf_conn_acct* FUNC_1 (struct nf_conn const*) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_2, const struct nf_conn *VAR_3, int VAR_4)
{
 struct nf_conn_acct *VAR_5 = FUNC_1(VAR_3);

 if (!VAR_5)
  return 0;

 if (FUNC_0(VAR_2, VAR_5, VAR_0, VAR_4) < 0)
  return -1;
 if (FUNC_0(VAR_2, VAR_5, VAR_1, VAR_4) < 0)
  return -1;

 return 0;
}
