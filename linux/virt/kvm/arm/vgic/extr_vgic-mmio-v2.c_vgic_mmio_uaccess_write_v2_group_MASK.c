
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* kvm; } ;
typedef int gpa_t ;
struct TYPE_4__ {scalar_t__ v2_groups_user_writable; } ;
struct TYPE_5__ {TYPE_1__ vgic; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int ,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0,
         gpa_t VAR_1, unsigned int VAR_2,
         unsigned long VAR_3)
{
 if (VAR_0->kvm->arch.vgic.v2_groups_user_writable)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 return 0;
}
