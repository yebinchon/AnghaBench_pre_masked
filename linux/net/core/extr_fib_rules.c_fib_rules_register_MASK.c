
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib_rules_ops {struct net* fro_net; int rules_list; } ;


 int VAR_0 ;
 struct fib_rules_ops* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fib_rules_ops*) ;
 int FUNC_3 (struct fib_rules_ops*) ;
 struct fib_rules_ops* FUNC_4 (struct fib_rules_ops const*,int,int ) ;

struct fib_rules_ops *
FUNC_5(const struct fib_rules_ops *VAR_2, struct net *VAR_3)
{
 struct fib_rules_ops *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2, sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_4->rules_list);
 VAR_4->fro_net = VAR_3;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4);
  VAR_4 = FUNC_0(VAR_5);
 }

 return VAR_4;
}
