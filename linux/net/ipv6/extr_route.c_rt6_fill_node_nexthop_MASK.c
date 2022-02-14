
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nexthop {int dummy; } ;
struct fib6_nh {int nh_common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int *,int ,unsigned char*,int) ;
 struct fib6_nh* FUNC_1 (struct nexthop*) ;
 scalar_t__ FUNC_2 (struct nexthop*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct nexthop*,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct nexthop *VAR_4,
     unsigned char *VAR_5)
{
 if (FUNC_2(VAR_4)) {
  struct nlattr *VAR_6;

  VAR_6 = FUNC_5(VAR_3, VAR_2);
  if (!VAR_6)
   goto nla_put_failure;

  if (FUNC_3(VAR_3, VAR_4, VAR_0))
   goto nla_put_failure;

  FUNC_4(VAR_3, VAR_6);
 } else {
  struct fib6_nh *VAR_7;

  VAR_7 = FUNC_1(VAR_4);
  if (FUNC_0(VAR_3, &VAR_7->nh_common, VAR_0,
         VAR_5, 0) < 0)
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -VAR_1;
}
