
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kvm_vm {int fd; } ;
struct kvm_clear_dirty_log {void* dirty_bitmap; int slot; int num_pages; int first_page; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,struct kvm_clear_dirty_log*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct kvm_vm *VAR_1, int VAR_2, void *VAR_3,
       uint64_t VAR_4, uint32_t VAR_5)
{
 struct kvm_clear_dirty_log VAR_6 = { .dirty_bitmap = VAR_3, .slot = VAR_2,
                              .first_page = VAR_4,
                                     .num_pages = VAR_5 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1->fd, VAR_0, &VAR_6);
 FUNC_0(VAR_7 == 0, "%s: KVM_CLEAR_DIRTY_LOG failed: %s",
      FUNC_2(-VAR_7));
}
