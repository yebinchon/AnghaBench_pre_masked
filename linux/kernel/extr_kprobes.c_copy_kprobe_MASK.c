
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int ainsn; int opcode; } ;
struct arch_specific_insn {int dummy; } ;
typedef int kprobe_opcode_t ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct kprobe *VAR_0, struct kprobe *VAR_1)
{
 FUNC_0(&VAR_1->opcode, &VAR_0->opcode, sizeof(kprobe_opcode_t));
 FUNC_0(&VAR_1->ainsn, &VAR_0->ainsn, sizeof(struct arch_specific_insn));
}
