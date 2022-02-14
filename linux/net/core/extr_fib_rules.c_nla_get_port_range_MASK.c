
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct fib_rule_port_range {int end; int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct fib_rule_port_range const*) ;
 struct fib_rule_port_range* FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct nlattr *VAR_1,
         struct fib_rule_port_range *VAR_2)
{
 const struct fib_rule_port_range *VAR_3 = FUNC_1(VAR_1);

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 VAR_2->start = VAR_3->start;
 VAR_2->end = VAR_3->end;

 return 0;
}
