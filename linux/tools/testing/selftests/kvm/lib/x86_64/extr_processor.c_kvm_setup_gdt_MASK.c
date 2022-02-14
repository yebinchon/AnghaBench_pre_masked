
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {scalar_t__ gdt; } ;
struct kvm_dtable {int limit; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct kvm_vm*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vm *VAR_1, struct kvm_dtable *VAR_2, int VAR_3,
     int VAR_4)
{
 if (!VAR_1->gdt)
  VAR_1->gdt = FUNC_1(VAR_1, FUNC_0(),
   VAR_0, VAR_3, VAR_4);

 VAR_2->base = VAR_1->gdt;
 VAR_2->limit = FUNC_0();
}
