
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root_cached {int dummy; } ;
struct interval_tree_node {int dummy; } ;


 struct interval_tree_node* FUNC_0 (struct rb_root_cached*,unsigned long,unsigned long) ;
 struct interval_tree_node* FUNC_1 (struct interval_tree_node*,unsigned long,unsigned long) ;

__attribute__((used)) static inline unsigned long
FUNC_2(struct rb_root_cached *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 struct interval_tree_node *VAR_3;
 unsigned long VAR_4 = 0;

 for (VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2); VAR_3;
      VAR_3 = FUNC_1(VAR_3, VAR_1, VAR_2))
  VAR_4++;
 return VAR_4;
}
