
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct meta_value {unsigned long val; int len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 unsigned long FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct meta_value *VAR_1, struct nlattr *VAR_2)
{
 if (FUNC_2(VAR_2) >= sizeof(unsigned long)) {
  VAR_1->val = *(unsigned long *) FUNC_0(VAR_2);
  VAR_1->len = sizeof(unsigned long);
 } else if (FUNC_2(VAR_2) == sizeof(u32)) {
  VAR_1->val = FUNC_1(VAR_2);
  VAR_1->len = sizeof(u32);
 } else
  return -VAR_0;

 return 0;
}
