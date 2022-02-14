
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long pgoff; int page; TYPE_1__* vma; } ;
struct usX2Ydev {scalar_t__ hwdep_pcm_shm; } ;
struct TYPE_2__ {scalar_t__ vm_private_data; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_1)
{
 unsigned long VAR_2;
 void *VAR_3;

 VAR_2 = VAR_1->pgoff << VAR_0;
 VAR_3 = (char *)((struct usX2Ydev *)VAR_1->vma->vm_private_data)->hwdep_pcm_shm + VAR_2;
 VAR_1->page = FUNC_1(VAR_3);
 FUNC_0(VAR_1->page);
 return 0;
}
