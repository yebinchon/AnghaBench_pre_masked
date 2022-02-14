
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fib6_node {int leaf; } ;
struct fib6_info {scalar_t__ fib6_metric; TYPE_1__* fib6_table; int fib6_next; int fib6_node; } ;
struct TYPE_2__ {int tb6_lock; } ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct fib6_info*) ;

__attribute__((used)) static struct fib6_info *FUNC_3(const struct fib6_info *VAR_0)
{
 struct fib6_info *VAR_1;
 struct fib6_node *VAR_2;

 VAR_2 = FUNC_1(VAR_0->fib6_node,
   FUNC_0(&VAR_0->fib6_table->tb6_lock));
 VAR_1 = FUNC_1(VAR_2->leaf,
   FUNC_0(&VAR_0->fib6_table->tb6_lock));
 while (VAR_1) {
  if (VAR_1->fib6_metric == VAR_0->fib6_metric &&
      FUNC_2(VAR_1))
   return VAR_1;
  VAR_1 = FUNC_1(VAR_1->fib6_next,
    FUNC_0(&VAR_0->fib6_table->tb6_lock));
 }

 return ((void*)0);
}
