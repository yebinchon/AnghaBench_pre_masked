
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct radix_tree_preload {scalar_t__ nr; struct radix_tree_node* nodes; } ;
struct radix_tree_node {unsigned int shift; unsigned int offset; unsigned int count; unsigned int nr_values; struct radix_tree_root* array; struct radix_tree_node* parent; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 struct radix_tree_node* FUNC_3 (int ,int) ;
 int FUNC_4 (struct radix_tree_node*) ;
 int FUNC_5 (struct radix_tree_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct radix_tree_preload* FUNC_6 (int *) ;

__attribute__((used)) static struct radix_tree_node *
FUNC_7(gfp_t VAR_3, struct radix_tree_node *VAR_4,
   struct radix_tree_root *VAR_5,
   unsigned int VAR_6, unsigned int VAR_7,
   unsigned int VAR_8, unsigned int VAR_9)
{
 struct radix_tree_node *VAR_10 = ((void*)0);






 if (!FUNC_1(VAR_3) && !FUNC_2()) {
  struct radix_tree_preload *VAR_11;






  VAR_10 = FUNC_3(VAR_1,
           VAR_3 | VAR_0);
  if (VAR_10)
   goto out;






  VAR_11 = FUNC_6(&VAR_2);
  if (VAR_11->nr) {
   VAR_10 = VAR_11->nodes;
   VAR_11->nodes = VAR_10->parent;
   VAR_11->nr--;
  }




  FUNC_4(VAR_10);
  goto out;
 }
 VAR_10 = FUNC_3(VAR_1, VAR_3);
out:
 FUNC_0(FUNC_5(VAR_10));
 if (VAR_10) {
  VAR_10->shift = VAR_6;
  VAR_10->offset = VAR_7;
  VAR_10->count = VAR_8;
  VAR_10->nr_values = VAR_9;
  VAR_10->parent = VAR_4;
  VAR_10->array = VAR_5;
 }
 return VAR_10;
}
