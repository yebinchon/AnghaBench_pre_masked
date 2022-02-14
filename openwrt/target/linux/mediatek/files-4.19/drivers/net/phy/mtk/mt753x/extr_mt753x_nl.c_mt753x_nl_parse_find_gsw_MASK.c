
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct gsw_mt753x {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;


 size_t VAR_0 ;
 struct gsw_mt753x* FUNC_0 () ;
 struct gsw_mt753x* FUNC_1 (int) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static struct gsw_mt753x *FUNC_3(struct genl_info *VAR_1)
{
 struct gsw_mt753x *VAR_2;
 struct nlattr *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->attrs[VAR_0];
 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 >= 0)
   VAR_2 = FUNC_1(VAR_4);
  else
   VAR_2 = FUNC_0();
 } else {
  VAR_2 = FUNC_0();
 }

 return VAR_2;
}
