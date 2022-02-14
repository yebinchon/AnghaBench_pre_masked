
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* kvm; } ;
typedef int gpa_t ;
struct TYPE_4__ {int v2_groups_user_writable; } ;
struct TYPE_5__ {TYPE_1__ vgic; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int VAR_0 ;

 unsigned long FUNC_0 (struct kvm_vcpu*,int,unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,int,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1,
        gpa_t VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 switch (VAR_2 & 0x0c) {
 case 128:
  if (VAR_4 != FUNC_0(VAR_1, VAR_2, VAR_3))
   return -VAR_0;
  VAR_1->kvm->arch.vgic.v2_groups_user_writable = 1;
  return 0;
 }

 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 return 0;
}
