
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int map_count; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 int FUNC_0 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct mm_struct*) ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_0, struct vm_area_struct *VAR_1,
   struct vm_area_struct *VAR_2, struct rb_node **VAR_3,
   struct rb_node *VAR_4)
{
 struct address_space *VAR_5 = ((void*)0);

 if (VAR_1->vm_file) {
  VAR_5 = VAR_1->vm_file->f_mapping;
  FUNC_2(VAR_5);
 }

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_1);

 if (VAR_5)
  FUNC_3(VAR_5);

 VAR_0->map_count++;
 FUNC_4(VAR_0);
}
