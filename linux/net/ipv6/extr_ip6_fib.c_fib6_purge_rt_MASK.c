
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib6_table {int tb6_lock; } ;
struct fib6_node {int fn_flags; int parent; int leaf; } ;
struct fib6_info {int fib6_ref; int nh_list; scalar_t__ nh; struct fib6_table* fib6_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct fib6_info*,struct fib6_table*) ;
 struct fib6_info* FUNC_1 (struct net*,struct fib6_table*,struct fib6_node*) ;
 int FUNC_2 (struct fib6_info*) ;
 int FUNC_3 (struct fib6_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct fib6_info*) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct fib6_info *VAR_1, struct fib6_node *VAR_2,
     struct net *VAR_3)
{
 struct fib6_table *VAR_4 = VAR_1->fib6_table;

 FUNC_0(VAR_1, VAR_4);

 if (VAR_1->nh && !FUNC_5(&VAR_1->nh_list))
  FUNC_4(&VAR_1->nh_list);

 if (FUNC_9(&VAR_1->fib6_ref) != 1) {






  while (VAR_2) {
   struct fib6_info *VAR_5 = FUNC_8(VAR_2->leaf,
         FUNC_6(&VAR_4->tb6_lock));
   struct fib6_info *VAR_6;
   if (!(VAR_2->fn_flags & VAR_0) && VAR_5 == VAR_1) {
    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_2);
    FUNC_2(VAR_6);

    FUNC_7(VAR_2->leaf, VAR_6);
    FUNC_3(VAR_1);
   }
   VAR_2 = FUNC_8(VAR_2->parent,
        FUNC_6(&VAR_4->tb6_lock));
  }
 }
}
