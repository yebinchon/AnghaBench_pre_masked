
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg {int dummy; } ;
struct bpf_insn {int dummy; } ;
typedef int cfg ;


 scalar_t__ FUNC_0 (struct cfg*,struct bpf_insn*,unsigned int) ;
 int FUNC_1 (struct cfg*) ;
 int FUNC_2 (struct cfg*) ;
 int FUNC_3 (struct cfg*,int ,int) ;

void FUNC_4(void *VAR_0, unsigned int VAR_1)
{
 struct bpf_insn *VAR_2 = VAR_0;
 struct cfg VAR_3;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_0(&VAR_3, VAR_2, VAR_1))
  return;

 FUNC_2(&VAR_3);

 FUNC_1(&VAR_3);
}
