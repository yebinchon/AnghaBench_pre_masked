
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ rb_subtree_gap; int vm_rb; struct vm_area_struct* vm_next; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int mm_rb; int highest_vm_end; } ;


 int FUNC_0 (int *,struct rb_node*,struct rb_node**) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*,int *) ;

void FUNC_4(struct mm_struct *VAR_0, struct vm_area_struct *VAR_1,
  struct rb_node **VAR_2, struct rb_node *VAR_3)
{

 if (VAR_1->vm_next)
  FUNC_2(VAR_1->vm_next);
 else
  VAR_0->highest_vm_end = FUNC_1(VAR_1);
 FUNC_0(&VAR_1->vm_rb, VAR_3, VAR_2);
 VAR_1->rb_subtree_gap = 0;
 FUNC_2(VAR_1);
 FUNC_3(VAR_1, &VAR_0->mm_rb);
}
