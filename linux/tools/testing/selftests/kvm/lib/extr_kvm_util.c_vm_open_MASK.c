
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {scalar_t__ kvm_fd; scalar_t__ fd; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(struct kvm_vm *VAR_6, int VAR_7)
{
 VAR_6->kvm_fd = FUNC_5(VAR_3, VAR_7);
 if (VAR_6->kvm_fd < 0)
  FUNC_1(VAR_0);

 if (!FUNC_4(VAR_1)) {
  FUNC_2(VAR_5, "immediate_exit not available, skipping test\n");
  FUNC_1(VAR_0);
 }

 VAR_6->fd = FUNC_3(VAR_6->kvm_fd, VAR_2, VAR_6->type);
 FUNC_0(VAR_6->fd >= 0, "KVM_CREATE_VM ioctl failed, "
  "rc: %i errno: %i", VAR_6->fd, VAR_4);
}
