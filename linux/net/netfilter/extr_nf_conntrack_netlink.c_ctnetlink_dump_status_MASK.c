
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, const struct nf_conn *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_0, FUNC_0(VAR_2->status)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
