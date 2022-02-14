
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_start; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int map_count; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 scalar_t__ FUNC_2 (struct mm_struct*,int ,int ,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_0, struct vm_area_struct *VAR_1)
{
 struct vm_area_struct *VAR_2;
 struct rb_node **VAR_3, *VAR_4;

 if (FUNC_2(VAR_0, VAR_1->vm_start, VAR_1->vm_end,
      &VAR_2, &VAR_3, &VAR_4))
  FUNC_0();
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_0->map_count++;
}
