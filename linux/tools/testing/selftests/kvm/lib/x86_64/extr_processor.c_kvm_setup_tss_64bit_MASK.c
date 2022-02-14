
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {scalar_t__ tss; } ;
struct kvm_segment {int limit; int selector; int type; int present; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vm*,struct kvm_segment*) ;
 int FUNC_2 (struct kvm_segment*,int ,int) ;
 scalar_t__ FUNC_3 (struct kvm_vm*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vm *VAR_1, struct kvm_segment *VAR_2,
    int VAR_3, int VAR_4,
    int VAR_5)
{
 if (!VAR_1->tss)
  VAR_1->tss = FUNC_3(VAR_1, FUNC_0(),
   VAR_0, VAR_4, VAR_5);

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->base = VAR_1->tss;
 VAR_2->limit = 0x67;
 VAR_2->selector = VAR_3;
 VAR_2->type = 0xb;
 VAR_2->present = 1;
 FUNC_1(VAR_1, VAR_2);
}
