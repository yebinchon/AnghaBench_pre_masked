
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbytes; } ;
struct insn {TYPE_1__ opcode; } ;


 int FUNC_0 (struct insn*) ;

__attribute__((used)) static inline int FUNC_1(struct insn *VAR_0)
{
 return FUNC_0(VAR_0) + VAR_0->opcode.nbytes;
}
