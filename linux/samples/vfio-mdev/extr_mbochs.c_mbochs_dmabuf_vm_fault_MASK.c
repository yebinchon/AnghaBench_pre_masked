
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {size_t pgoff; int page; struct vm_area_struct* vma; } ;
struct vm_area_struct {struct mbochs_dmabuf* vm_private_data; } ;
struct mbochs_dmabuf {size_t pagecount; int * pages; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_1)
{
 struct vm_area_struct *VAR_2 = VAR_1->vma;
 struct mbochs_dmabuf *VAR_3 = VAR_2->vm_private_data;

 if (FUNC_0(VAR_1->pgoff >= VAR_3->pagecount))
  return VAR_0;

 VAR_1->page = VAR_3->pages[VAR_1->pgoff];
 FUNC_1(VAR_1->page);
 return 0;
}
