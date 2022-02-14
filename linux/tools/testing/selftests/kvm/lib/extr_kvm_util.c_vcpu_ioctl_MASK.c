
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kvm_vm {int dummy; } ;


 int FUNC_0 (int,char*,unsigned long,int,int ,int ) ;
 int FUNC_1 (struct kvm_vm*,int ,unsigned long,void*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct kvm_vm *VAR_1, uint32_t VAR_2,
  unsigned long VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5 == 0, "vcpu ioctl %lu failed, rc: %i errno: %i (%s)",
  VAR_3, VAR_5, VAR_0, FUNC_2(VAR_0));
}
