
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rt; scalar_t__ sign_extend; } ;
struct TYPE_6__ {TYPE_2__ mmio_decode; } ;
struct kvm_vcpu {TYPE_3__ arch; scalar_t__ mmio_needed; } ;
struct TYPE_4__ {unsigned int len; int phys_addr; int data; int is_write; } ;
struct kvm_run {TYPE_1__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,unsigned int,int ,unsigned long*) ;
 scalar_t__ FUNC_4 (int) ;
 unsigned long FUNC_5 (struct kvm_vcpu*,unsigned long,unsigned int) ;
 int FUNC_6 (struct kvm_vcpu*,int ,unsigned long) ;

int FUNC_7(struct kvm_vcpu *VAR_2, struct kvm_run *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 int VAR_6;


 if (FUNC_4(!VAR_2->mmio_needed))
  return 0;

 VAR_2->mmio_needed = 0;

 if (!VAR_3->mmio.is_write) {
  VAR_5 = VAR_3->mmio.len;
  if (VAR_5 > sizeof(unsigned long))
   return -VAR_0;

  VAR_4 = FUNC_0(VAR_3->mmio.data, VAR_5);

  if (VAR_2->arch.mmio_decode.sign_extend &&
      VAR_5 < sizeof(unsigned long)) {
   VAR_6 = 1U << ((VAR_5 * 8) - 1);
   VAR_4 = (VAR_4 ^ VAR_6) - VAR_6;
  }

  FUNC_3(VAR_1, VAR_5, VAR_3->mmio.phys_addr,
          &VAR_4);
  VAR_4 = FUNC_5(VAR_2, VAR_4, VAR_5);
  FUNC_6(VAR_2, VAR_2->arch.mmio_decode.rt, VAR_4);
 }





 FUNC_1(VAR_2, FUNC_2(VAR_2));

 return 0;
}
