
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct meta_value {unsigned long val; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct meta_value *VAR_2, struct nlattr *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3);

 VAR_2->val = (unsigned long)FUNC_0(FUNC_1(VAR_3), VAR_4, VAR_1);
 if (VAR_2->val == 0UL)
  return -VAR_0;
 VAR_2->len = VAR_4;
 return 0;
}
