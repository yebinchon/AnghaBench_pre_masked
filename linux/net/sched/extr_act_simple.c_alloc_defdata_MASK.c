
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_defact {int tcfd_defdata; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct nlattr const*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct tcf_defact *VAR_3, const struct nlattr *VAR_4)
{
 VAR_3->tcfd_defdata = FUNC_0(VAR_2, VAR_1);
 if (FUNC_2(!VAR_3->tcfd_defdata))
  return -VAR_0;
 FUNC_1(VAR_3->tcfd_defdata, VAR_4, VAR_2);
 return 0;
}
