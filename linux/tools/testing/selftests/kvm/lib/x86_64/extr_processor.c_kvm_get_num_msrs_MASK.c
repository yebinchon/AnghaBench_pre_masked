
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int kvm_fd; } ;
struct kvm_msr_list {int nmsrs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,struct kvm_msr_list*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vm *VAR_3)
{
 struct kvm_msr_list VAR_4;
 int VAR_5;

 VAR_4.nmsrs = 0;
 VAR_5 = FUNC_1(VAR_3->kvm_fd, VAR_1, &VAR_4);
 FUNC_0(VAR_5 == -1 && VAR_2 == VAR_0, "Unexpected result from KVM_GET_MSR_INDEX_LIST probe, r: %i",
  VAR_5);

 return VAR_4.nmsrs;
}
