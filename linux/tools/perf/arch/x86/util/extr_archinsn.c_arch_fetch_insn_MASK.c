
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct perf_sample {int insn_len; int insn; int ip; } ;
struct machine {int dummy; } ;
struct insn {int length; } ;


 scalar_t__ FUNC_0 (struct insn*) ;
 int FUNC_1 (struct insn*) ;
 int FUNC_2 (struct insn*,int ,int,int) ;
 int FUNC_3 (struct thread*,struct machine*,int ,int ,int,int*) ;

void FUNC_4(struct perf_sample *VAR_0,
       struct thread *VAR_1,
       struct machine *VAR_2)
{
 struct insn VAR_3;
 int VAR_4;
 bool VAR_5 = 0;

 if (!VAR_0->ip)
  return;
 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_0->insn, VAR_0->ip, sizeof(VAR_0->insn), &VAR_5);
 if (VAR_4 <= 0)
  return;
 FUNC_2(&VAR_3, VAR_0->insn, VAR_4, VAR_5);
 FUNC_1(&VAR_3);
 if (FUNC_0(&VAR_3) && VAR_3.length <= VAR_4)
  VAR_0->insn_len = VAR_3.length;
}
