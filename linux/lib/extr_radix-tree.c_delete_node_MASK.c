
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int * xa_head; } ;
struct radix_tree_node {size_t offset; int private_list; scalar_t__ count; int ** slots; struct radix_tree_node* parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct radix_tree_root*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct radix_tree_node*) ;
 int FUNC_4 (struct radix_tree_node*) ;
 int FUNC_5 (struct radix_tree_root*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct radix_tree_root*) ;

__attribute__((used)) static bool FUNC_8(struct radix_tree_root *VAR_0,
   struct radix_tree_node *VAR_1)
{
 bool VAR_2 = 0;

 do {
  struct radix_tree_node *VAR_3;

  if (VAR_1->count) {
   if (FUNC_3(VAR_1) ==
     FUNC_6(VAR_0->xa_head))
    VAR_2 |= FUNC_5(VAR_0);
   return VAR_2;
  }

  VAR_3 = VAR_1->parent;
  if (VAR_3) {
   VAR_3->slots[VAR_1->offset] = ((void*)0);
   VAR_3->count--;
  } else {




   if (!FUNC_1(VAR_0))
    FUNC_7(VAR_0);
   VAR_0->xa_head = ((void*)0);
  }

  FUNC_0(!FUNC_2(&VAR_1->private_list));
  FUNC_4(VAR_1);
  VAR_2 = 1;

  VAR_1 = VAR_3;
 } while (VAR_1);

 return VAR_2;
}
