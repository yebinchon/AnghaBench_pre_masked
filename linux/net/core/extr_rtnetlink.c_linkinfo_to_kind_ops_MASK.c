
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int kind ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_1 (char*,struct nlattr*,int) ;
 struct rtnl_link_ops* FUNC_2 (char*) ;

__attribute__((used)) static const struct rtnl_link_ops *FUNC_3(const struct nlattr *VAR_4)
{
 const struct rtnl_link_ops *VAR_5 = ((void*)0);
 struct nlattr *VAR_6[VAR_1 + 1];

 if (FUNC_0(VAR_6, VAR_1, VAR_4, VAR_3, ((void*)0)) < 0)
  return ((void*)0);

 if (VAR_6[VAR_0]) {
  char VAR_7[VAR_2];

  FUNC_1(VAR_7, VAR_6[VAR_0], sizeof(VAR_7));
  VAR_5 = FUNC_2(VAR_7);
 }

 return VAR_5;
}
