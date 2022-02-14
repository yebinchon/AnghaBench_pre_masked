
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int fd; } ;
struct kvm_enable_cap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct kvm_enable_cap*) ;

int FUNC_2(struct kvm_vm *VAR_2, struct kvm_enable_cap *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->fd, VAR_0, VAR_3);
 FUNC_0(VAR_4 == 0, "KVM_ENABLE_CAP IOCTL failed,\n"
  "  rc: %i errno: %i", VAR_4, VAR_1);

 return VAR_4;
}
