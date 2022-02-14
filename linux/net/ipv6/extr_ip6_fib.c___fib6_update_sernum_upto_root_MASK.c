
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fib6_node {int fn_sernum; int parent; } ;
struct fib6_info {TYPE_1__* fib6_table; int fib6_node; } ;
struct TYPE_2__ {int tb6_lock; } ;


 int FUNC_0 (int *) ;
 struct fib6_node* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct fib6_info *VAR_0,
        int VAR_1)
{
 struct fib6_node *VAR_2 = FUNC_1(VAR_0->fib6_node,
    FUNC_0(&VAR_0->fib6_table->tb6_lock));


 FUNC_2();
 while (VAR_2) {
  VAR_2->fn_sernum = VAR_1;
  VAR_2 = FUNC_1(VAR_2->parent,
    FUNC_0(&VAR_0->fib6_table->tb6_lock));
 }
}
