
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {int offset; int sec; } ;
struct insn_state {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct insn_state*) ;
 int FUNC_2 (struct instruction*,struct insn_state*) ;

__attribute__((used)) static int FUNC_3(struct instruction *VAR_0, struct insn_state *VAR_1)
{
 if (FUNC_1(VAR_1)) {
  FUNC_0("sibling call from callable instruction with modified stack frame",
    VAR_0->sec, VAR_0->offset);
  return 1;
 }

 return FUNC_2(VAR_0, VAR_1);
}
