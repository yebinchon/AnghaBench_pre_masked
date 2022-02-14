
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {scalar_t__ address; int page; struct vm_area_struct* vma; } ;
struct vm_area_struct {scalar_t__ vm_start; struct mdev_state* vm_private_data; } ;
struct mdev_state {scalar_t__ pagecount; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mdev_state*,scalar_t__) ;

__attribute__((used)) static vm_fault_t FUNC_1(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct mdev_state *VAR_4 = VAR_3->vm_private_data;
 pgoff_t VAR_5 = (VAR_2->address - VAR_3->vm_start) >> VAR_0;

 if (VAR_5 >= VAR_4->pagecount)
  return VAR_1;

 VAR_2->page = FUNC_0(VAR_4, VAR_5);
 if (!VAR_2->page)
  return VAR_1;

 return 0;
}
