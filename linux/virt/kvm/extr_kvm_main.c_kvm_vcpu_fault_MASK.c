
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {scalar_t__ pgoff; struct page* page; TYPE_4__* vma; } ;
struct page {int dummy; } ;
struct TYPE_5__ {int pio_data; } ;
struct kvm_vcpu {TYPE_2__* kvm; TYPE_1__ arch; int run; } ;
struct TYPE_8__ {TYPE_3__* vm_file; } ;
struct TYPE_7__ {struct kvm_vcpu* private_data; } ;
struct TYPE_6__ {int coalesced_mmio_ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct kvm_vcpu*,struct vm_fault*) ;
 struct page* FUNC_2 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_fault *VAR_2)
{
 struct kvm_vcpu *VAR_3 = VAR_2->vma->vm_file->private_data;
 struct page *VAR_4;

 if (VAR_2->pgoff == 0)
  VAR_4 = FUNC_2(VAR_3->run);
 else
  return FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_4);
 VAR_2->page = VAR_4;
 return 0;
}
