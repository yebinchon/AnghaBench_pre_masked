
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned int flags; TYPE_4__* vma; struct page* page; } ;
struct page {int mapping; } ;
struct TYPE_8__ {TYPE_3__* vm_ops; TYPE_2__* vm_file; } ;
struct TYPE_7__ {int (* page_mkwrite ) (struct vm_fault*) ;} ;
struct TYPE_6__ {TYPE_1__* f_mapping; } ;
struct TYPE_5__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct vm_fault*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static vm_fault_t FUNC_7(struct vm_fault *VAR_6)
{
 vm_fault_t VAR_7;
 struct page *VAR_8 = VAR_6->page;
 unsigned int VAR_9 = VAR_6->flags;

 VAR_6->flags = VAR_1|VAR_0;

 if (VAR_6->vma->vm_file &&
     FUNC_0(VAR_6->vma->vm_file->f_mapping->host))
  return VAR_5;

 VAR_7 = VAR_6->vma->vm_ops->page_mkwrite(VAR_6);

 VAR_6->flags = VAR_9;
 if (FUNC_5(VAR_7 & (VAR_2 | VAR_4)))
  return VAR_7;
 if (FUNC_5(!(VAR_7 & VAR_3))) {
  FUNC_3(VAR_8);
  if (!VAR_8->mapping) {
   FUNC_6(VAR_8);
   return 0;
  }
  VAR_7 |= VAR_3;
 } else
  FUNC_2(!FUNC_1(VAR_8), VAR_8);
 return VAR_7;
}
