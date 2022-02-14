
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_map {int * emul_ptimer; int * direct_ptimer; void* direct_vtimer; } ;
struct kvm_vcpu {int vcpu_id; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,struct timer_map*) ;
 void* FUNC_2 (struct kvm_vcpu*) ;
 void* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0, struct timer_map *VAR_1)
{
 if (FUNC_0()) {
  VAR_1->direct_vtimer = FUNC_3(VAR_0);
  VAR_1->direct_ptimer = FUNC_2(VAR_0);
  VAR_1->emul_ptimer = ((void*)0);
 } else {
  VAR_1->direct_vtimer = FUNC_3(VAR_0);
  VAR_1->direct_ptimer = ((void*)0);
  VAR_1->emul_ptimer = FUNC_2(VAR_0);
 }

 FUNC_1(VAR_0->vcpu_id, VAR_1);
}
