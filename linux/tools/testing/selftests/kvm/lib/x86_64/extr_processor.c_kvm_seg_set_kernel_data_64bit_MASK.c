
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct kvm_vm {int dummy; } ;
struct kvm_segment {int limit; int s; int type; int g; int present; int selector; } ;


 int FUNC_0 (struct kvm_vm*,struct kvm_segment*) ;
 int FUNC_1 (struct kvm_segment*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vm *VAR_0, uint16_t VAR_1,
 struct kvm_segment *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->selector = VAR_1;
 VAR_2->limit = 0xFFFFFFFFu;
 VAR_2->s = 0x1;
 VAR_2->type = 0x00 | 0x01 | 0x02;


 VAR_2->g = 1;
 VAR_2->present = 1;
 if (VAR_0)
  FUNC_0(VAR_0, VAR_2);
}
