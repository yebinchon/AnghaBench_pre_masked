
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_info {scalar_t__ fib_dead; int rcu; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,struct fib_info*) ;

void FUNC_2(struct fib_info *VAR_2)
{
 if (VAR_2->fib_dead == 0) {
  FUNC_1("Freeing alive fib_info %p\n", VAR_2);
  return;
 }
 VAR_0--;

 FUNC_0(&VAR_2->rcu, VAR_1);
}
