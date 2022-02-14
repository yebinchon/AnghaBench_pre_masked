
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib_rules_ops {unsigned int fib_rules_seq; } ;


 int FUNC_0 () ;
 struct fib_rules_ops* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct fib_rules_ops*) ;

unsigned int FUNC_3(struct net *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 struct fib_rules_ops *VAR_3;

 FUNC_0();

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  return 0;
 VAR_2 = VAR_3->fib_rules_seq;
 FUNC_2(VAR_3);

 return VAR_2;
}
