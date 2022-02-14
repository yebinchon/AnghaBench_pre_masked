
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vm {int gdt; } ;
struct kvm_segment {int selector; int limit; int base; int s; int g; int db; int l; int present; int dpl; int type; } ;
struct desc64 {int limit0; int base0; int base1; int limit1; int base2; int base3; int g; int db; int l; int p; int dpl; int type; int s; } ;


 void* FUNC_0 (struct kvm_vm*,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vm *VAR_0, struct kvm_segment *VAR_1)
{
 void *VAR_2 = FUNC_0(VAR_0, VAR_0->gdt);
 struct desc64 *VAR_3 = VAR_2 + (VAR_1->selector >> 3) * 8;

 VAR_3->limit0 = VAR_1->limit & 0xFFFF;
 VAR_3->base0 = VAR_1->base & 0xFFFF;
 VAR_3->base1 = VAR_1->base >> 16;
 VAR_3->s = VAR_1->s;
 VAR_3->type = VAR_1->type;
 VAR_3->dpl = VAR_1->dpl;
 VAR_3->p = VAR_1->present;
 VAR_3->limit1 = VAR_1->limit >> 16;
 VAR_3->l = VAR_1->l;
 VAR_3->db = VAR_1->db;
 VAR_3->g = VAR_1->g;
 VAR_3->base2 = VAR_1->base >> 24;
 if (!VAR_1->s)
  VAR_3->base3 = VAR_1->base >> 32;
}
