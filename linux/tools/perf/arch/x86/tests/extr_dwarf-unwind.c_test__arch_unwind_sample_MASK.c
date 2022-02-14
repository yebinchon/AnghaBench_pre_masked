
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread {int dummy; } ;
struct regs_dump {int mask; int * regs; int abi; } ;
struct perf_sample {struct regs_dump user_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct perf_sample*,struct thread*,int *) ;

int FUNC_4(struct perf_sample *VAR_3,
        struct thread *VAR_4)
{
 struct regs_dump *VAR_5 = &VAR_3->user_regs;
 u64 *VAR_6;

 VAR_6 = FUNC_0(sizeof(u64) * VAR_1);
 if (!VAR_6) {
  FUNC_2("failed to allocate sample uregs data\n");
  return -1;
 }

 FUNC_1(VAR_6);
 VAR_5->abi = VAR_2;
 VAR_5->regs = VAR_6;
 VAR_5->mask = VAR_0;

 return FUNC_3(VAR_3, VAR_4, VAR_6);
}
