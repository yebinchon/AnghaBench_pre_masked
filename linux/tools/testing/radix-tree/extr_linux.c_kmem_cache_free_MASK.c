
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_node {struct radix_tree_node* parent; } ;
struct kmem_cache {int nr_objs; int lock; struct radix_tree_node* objs; int size; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (void*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct kmem_cache *VAR_3, void *VAR_4)
{
 FUNC_0(VAR_4);
 FUNC_6(&VAR_2);
 if (VAR_1)
  FUNC_3("Freeing %p to slab\n", VAR_4);
 FUNC_4(&VAR_3->lock);
 if (VAR_3->nr_objs > 10) {
  FUNC_2(VAR_4, VAR_0, VAR_3->size);
  FUNC_1(VAR_4);
 } else {
  struct radix_tree_node *VAR_5 = VAR_4;
  VAR_3->nr_objs++;
  VAR_5->parent = VAR_3->objs;
  VAR_3->objs = VAR_5;
 }
 FUNC_5(&VAR_3->lock);
}
