
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int flags; unsigned long pgoff; struct page* page; TYPE_2__* vma; } ;
struct policy_load_memory {scalar_t__ data; int len; } ;
struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vm_file; } ;
struct TYPE_3__ {struct policy_load_memory* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 unsigned long FUNC_1 (int ,int ) ;
 struct page* FUNC_2 (scalar_t__) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_fault *VAR_5)
{
 struct policy_load_memory *VAR_6 = VAR_5->vma->vm_file->private_data;
 unsigned long VAR_7;
 struct page *VAR_8;

 if (VAR_5->flags & (VAR_0 | VAR_1))
  return VAR_4;

 VAR_7 = VAR_5->pgoff << VAR_2;
 if (VAR_7 >= FUNC_1(VAR_6->len, VAR_3))
  return VAR_4;

 VAR_8 = FUNC_2(VAR_6->data + VAR_7);
 FUNC_0(VAR_8);

 VAR_5->page = VAR_8;

 return 0;
}
