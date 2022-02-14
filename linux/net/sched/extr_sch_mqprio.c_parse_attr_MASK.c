
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nla_policy {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nlattr**,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int,int,int,struct nla_policy const*,int *) ;

__attribute__((used)) static int FUNC_6(struct nlattr *VAR_0[], int VAR_1, struct nlattr *VAR_2,
        const struct nla_policy *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_4(VAR_2) - FUNC_0(VAR_4);

 if (VAR_5 >= FUNC_2(0))
  return FUNC_5(VAR_0, VAR_1,
         FUNC_3(VAR_2) + FUNC_0(VAR_4),
         VAR_5, VAR_3, ((void*)0));

 FUNC_1(VAR_0, 0, sizeof(struct nlattr *) * (VAR_1 + 1));
 return 0;
}
