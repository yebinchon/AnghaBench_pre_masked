
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int fd; } ;
struct kvm_dirty_log {void* dirty_bitmap; int slot; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,struct kvm_dirty_log*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct kvm_vm *VAR_1, int VAR_2, void *VAR_3)
{
 struct kvm_dirty_log VAR_4 = { .dirty_bitmap = VAR_3, .slot = VAR_2 };
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1->fd, VAR_0, &VAR_4);
 FUNC_0(VAR_5 == 0, "%s: KVM_GET_DIRTY_LOG failed: %s",
      FUNC_2(-VAR_5));
}
