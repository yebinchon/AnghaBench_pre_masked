
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int rules_mod_lock; } ;
struct fib_rules_ops {int list; struct net* fro_net; } ;


 int FUNC_0 (struct fib_rules_ops*) ;
 int FUNC_1 (struct fib_rules_ops*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fib_rules_ops *VAR_1)
{
 struct net *VAR_2 = VAR_1->fro_net;

 FUNC_3(&VAR_2->rules_mod_lock);
 FUNC_2(&VAR_1->list);
 FUNC_4(&VAR_2->rules_mod_lock);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0);
}
