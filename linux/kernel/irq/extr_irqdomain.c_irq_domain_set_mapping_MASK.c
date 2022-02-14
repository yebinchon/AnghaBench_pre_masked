
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {size_t revmap_size; int revmap_tree_mutex; int revmap_tree; int * linear_revmap; } ;
struct irq_data {int irq; } ;
typedef size_t irq_hw_number_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_domain *VAR_0,
       irq_hw_number_t VAR_1,
       struct irq_data *VAR_2)
{
 if (VAR_1 < VAR_0->revmap_size) {
  VAR_0->linear_revmap[VAR_1] = VAR_2->irq;
 } else {
  FUNC_0(&VAR_0->revmap_tree_mutex);
  FUNC_2(&VAR_0->revmap_tree, VAR_1, VAR_2);
  FUNC_1(&VAR_0->revmap_tree_mutex);
 }
}
