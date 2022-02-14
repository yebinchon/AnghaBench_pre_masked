
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sign_extend; unsigned long rt; } ;
struct TYPE_4__ {TYPE_1__ mmio_decode; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_0, bool *VAR_1, int *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 bool VAR_5;

 if (FUNC_3(VAR_0)) {

  FUNC_0(VAR_0, FUNC_6(VAR_0));
  return 1;
 }

 VAR_4 = FUNC_1(VAR_0);
 if (FUNC_7(VAR_4 < 0))
  return VAR_4;

 *VAR_1 = FUNC_5(VAR_0);
 VAR_5 = FUNC_4(VAR_0);
 VAR_3 = FUNC_2(VAR_0);

 *VAR_2 = VAR_4;
 VAR_0->arch.mmio_decode.sign_extend = VAR_5;
 VAR_0->arch.mmio_decode.rt = VAR_3;

 return 0;
}
