
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {unsigned int halt_poll_ns; int vcpu_id; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_5 = VAR_3->halt_poll_ns;
 VAR_7 = FUNC_0(VAR_2);
 VAR_6 = FUNC_0(VAR_1);
 if (!VAR_6)
  goto out;

 VAR_5 *= VAR_6;
 if (VAR_5 < VAR_7)
  VAR_5 = VAR_7;

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 VAR_3->halt_poll_ns = VAR_5;
out:
 FUNC_1(VAR_3->vcpu_id, VAR_5, VAR_4);
}
