
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct nlattr {int dummy; } ;


 struct rtnexthop* FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;
 struct rtnexthop* FUNC_2 (struct rtnexthop*,int*) ;
 scalar_t__ FUNC_3 (struct rtnexthop*,int) ;

__attribute__((used)) static int FUNC_4(const struct nlattr *VAR_0)
{
 struct rtnexthop *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0, VAR_3 = FUNC_1(VAR_0);

 while (FUNC_3(VAR_1, VAR_3)) {
  VAR_2++;
  VAR_1 = FUNC_2(VAR_1, &VAR_3);
 }


 return VAR_3 > 0 ? 0 : VAR_2;
}
