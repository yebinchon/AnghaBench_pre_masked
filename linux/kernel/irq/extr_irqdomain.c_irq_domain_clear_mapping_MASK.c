
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {size_t revmap_size; int revmap_tree_mutex; int revmap_tree; scalar_t__* linear_revmap; } ;
typedef size_t irq_hw_number_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static void FUNC_3(struct irq_domain *VAR_0,
         irq_hw_number_t VAR_1)
{
 if (VAR_1 < VAR_0->revmap_size) {
  VAR_0->linear_revmap[VAR_1] = 0;
 } else {
  FUNC_0(&VAR_0->revmap_tree_mutex);
  FUNC_2(&VAR_0->revmap_tree, VAR_1);
  FUNC_1(&VAR_0->revmap_tree_mutex);
 }
}
