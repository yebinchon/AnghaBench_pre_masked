
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_operations_struct {int dummy; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_flags; void* vm_private_data; struct vm_operations_struct const* vm_ops; int vm_page_prot; } ;
struct mm_struct {unsigned long def_flags; } ;


 int VAR_0 ;
 struct vm_area_struct* FUNC_0 (int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct vm_area_struct*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct mm_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static struct vm_area_struct *FUNC_8(
 struct mm_struct *VAR_4,
 unsigned long VAR_5, unsigned long VAR_6,
 unsigned long VAR_7, void *VAR_8,
 const struct vm_operations_struct *VAR_9)
{
 int VAR_10;
 struct vm_area_struct *VAR_11;

 VAR_11 = FUNC_4(VAR_4);
 if (FUNC_3(VAR_11 == ((void*)0)))
  return FUNC_0(-VAR_0);

 VAR_11->vm_start = VAR_5;
 VAR_11->vm_end = VAR_5 + VAR_6;

 VAR_11->vm_flags = VAR_7 | VAR_4->def_flags | VAR_2 | VAR_3;
 VAR_11->vm_page_prot = FUNC_6(VAR_11->vm_flags);

 VAR_11->vm_ops = VAR_9;
 VAR_11->vm_private_data = VAR_8;

 VAR_10 = FUNC_1(VAR_4, VAR_11);
 if (VAR_10)
  goto out;

 FUNC_7(VAR_4, VAR_11->vm_flags, VAR_6 >> VAR_1);

 FUNC_2(VAR_11);

 return VAR_11;

out:
 FUNC_5(VAR_11);
 return FUNC_0(VAR_10);
}
