
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {unsigned int halt_poll_ns; int vcpu_id; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_3 = VAR_1->halt_poll_ns;
 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 == 0)
  VAR_3 = 0;
 else
  VAR_3 /= VAR_4;

 VAR_1->halt_poll_ns = VAR_3;
 FUNC_1(VAR_1->vcpu_id, VAR_3, VAR_2);
}
