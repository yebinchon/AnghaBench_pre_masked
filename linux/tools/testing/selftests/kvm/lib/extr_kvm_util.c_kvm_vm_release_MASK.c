
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vm {int kvm_fd; int fd; TYPE_1__* vcpu_head; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int,char*,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct kvm_vm*,int ) ;

void FUNC_3(struct kvm_vm *VAR_1)
{
 int VAR_2;

 while (VAR_1->vcpu_head)
  FUNC_2(VAR_1, VAR_1->vcpu_head->id);

 VAR_2 = FUNC_1(VAR_1->fd);
 FUNC_0(VAR_2 == 0, "Close of vm fd failed,\n"
  "  vmp->fd: %i rc: %i errno: %i", VAR_1->fd, VAR_2, VAR_0);

 FUNC_1(VAR_1->kvm_fd);
 FUNC_0(VAR_2 == 0, "Close of /dev/kvm fd failed,\n"
  "  vmp->kvm_fd: %i rc: %i errno: %i", VAR_1->kvm_fd, VAR_2, VAR_0);
}
