
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fib6_node* fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_table {int tb6_lock; } ;
struct fib6_node {int fn_flags; int leaf; int right; int left; } ;
struct fib6_info {int fn_flags; int leaf; int right; int left; } ;


 struct fib6_node* FUNC_0 (struct fib6_node*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct fib6_node* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct fib6_info *FUNC_3(struct net *VAR_1,
      struct fib6_table *VAR_2,
      struct fib6_node *VAR_3)
{
 struct fib6_node *VAR_4, *VAR_5;

 if (VAR_3->fn_flags & VAR_0)
  return VAR_1->ipv6.fib6_null_entry;

 while (VAR_3) {
  VAR_4 = FUNC_2(VAR_3->left,
        FUNC_1(&VAR_2->tb6_lock));
  VAR_5 = FUNC_2(VAR_3->right,
        FUNC_1(&VAR_2->tb6_lock));
  if (VAR_4)
   return FUNC_2(VAR_4->leaf,
     FUNC_1(&VAR_2->tb6_lock));
  if (VAR_5)
   return FUNC_2(VAR_5->leaf,
     FUNC_1(&VAR_2->tb6_lock));

  VAR_3 = FUNC_0(VAR_3);
 }
 return ((void*)0);
}
