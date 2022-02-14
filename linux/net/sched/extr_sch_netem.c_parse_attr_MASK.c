
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nla_policy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nlattr**,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int,int,int,struct nla_policy const*,int *) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct nlattr *VAR_1[], int VAR_2, struct nlattr *VAR_3,
        const struct nla_policy *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_4(VAR_3) - FUNC_0(VAR_5);

 if (VAR_6 < 0) {
  FUNC_6("netem: invalid attributes len %d\n", VAR_6);
  return -VAR_0;
 }

 if (VAR_6 >= FUNC_2(0))
  return FUNC_5(VAR_1, VAR_2,
         FUNC_3(VAR_3) + FUNC_0(VAR_5),
         VAR_6, VAR_4, ((void*)0));

 FUNC_1(VAR_1, 0, sizeof(struct nlattr *) * (VAR_2 + 1));
 return 0;
}
