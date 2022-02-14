
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int pgoff; struct page* page; TYPE_1__* vma; } ;
struct rchan_buf {scalar_t__ start; } ;
struct page {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_2__ {struct rchan_buf* vm_private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (scalar_t__) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_3)
{
 struct page *VAR_4;
 struct rchan_buf *VAR_5 = VAR_3->vma->vm_private_data;
 pgoff_t VAR_6 = VAR_3->pgoff;

 if (!VAR_5)
  return VAR_1;

 VAR_4 = FUNC_1(VAR_5->start + (VAR_6 << VAR_0));
 if (!VAR_4)
  return VAR_2;
 FUNC_0(VAR_4);
 VAR_3->page = VAR_4;

 return 0;
}
