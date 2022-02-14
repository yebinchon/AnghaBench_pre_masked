
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (long) ;
 long FUNC_1 (struct nf_conn const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, const struct nf_conn *VAR_3)
{
 long VAR_4 = FUNC_1(VAR_3) / VAR_1;

 if (FUNC_2(VAR_2, VAR_0, FUNC_0(VAR_4)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
