
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_userfaultfd_ctx {int dummy; } ;
struct vm_area_struct {scalar_t__ vm_pgoff; int anon_vma; } ;
struct file {int dummy; } ;
struct anon_vma {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ FUNC_0 (struct anon_vma*,int ,struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,struct file*,unsigned long,struct vm_userfaultfd_ctx) ;

__attribute__((used)) static int
FUNC_2(struct vm_area_struct *VAR_0, unsigned long VAR_1,
       struct anon_vma *VAR_2, struct file *VAR_3,
       pgoff_t VAR_4,
       struct vm_userfaultfd_ctx VAR_5)
{
 if (FUNC_1(VAR_0, VAR_3, VAR_1, VAR_5) &&
     FUNC_0(VAR_2, VAR_0->anon_vma, VAR_0)) {
  if (VAR_0->vm_pgoff == VAR_4)
   return 1;
 }
 return 0;
}
