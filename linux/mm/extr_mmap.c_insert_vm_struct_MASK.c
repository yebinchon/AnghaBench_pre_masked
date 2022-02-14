
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_flags; int vm_pgoff; int anon_vma; int vm_end; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mm_struct*,int,int ,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 scalar_t__ FUNC_2 (struct mm_struct*,int ) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 int FUNC_5 (struct vm_area_struct*) ;

int FUNC_6(struct mm_struct *VAR_3, struct vm_area_struct *VAR_4)
{
 struct vm_area_struct *VAR_5;
 struct rb_node **VAR_6, *VAR_7;

 if (FUNC_1(VAR_3, VAR_4->vm_start, VAR_4->vm_end,
      &VAR_5, &VAR_6, &VAR_7))
  return -VAR_0;
 if ((VAR_4->vm_flags & VAR_2) &&
      FUNC_2(VAR_3, FUNC_5(VAR_4)))
  return -VAR_0;
 if (FUNC_3(VAR_4)) {
  FUNC_0(VAR_4->anon_vma);
  VAR_4->vm_pgoff = VAR_4->vm_start >> VAR_1;
 }

 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 return 0;
}
