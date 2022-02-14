
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr*) ;
 struct in6_addr FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;

__attribute__((used)) static int FUNC_6(struct nlattr *VAR_5[], struct nlattr *VAR_6[],
          struct netlink_ext_ack *VAR_7)
{
 struct in6_addr VAR_8;

 if (VAR_5[VAR_3]) {
  if (FUNC_5(VAR_5[VAR_3]) != VAR_2)
   return -VAR_1;
  if (!FUNC_2(FUNC_3(VAR_5[VAR_3])))
   return -VAR_0;
 }

 if (!VAR_6)
  goto out;

 if (VAR_6[VAR_4]) {
  VAR_8 = FUNC_4(VAR_6[VAR_4]);
  if (FUNC_1(&VAR_8))
   return -VAR_1;
 }

out:
 return FUNC_0(VAR_5, VAR_6, VAR_7);
}
