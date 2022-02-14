
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpr_regs {unsigned long* fpr; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *,struct fpr_regs*) ;

int FUNC_3(pid_t VAR_3, unsigned long *VAR_4)
{
 struct fpr_regs *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = (struct fpr_regs *) FUNC_0(sizeof(struct fpr_regs));
 VAR_6 = FUNC_2(VAR_0, VAR_3, ((void*)0), VAR_5);
 if (VAR_6) {
  FUNC_1("ptrace(PTRACE_GETREGSET) failed");
  return VAR_1;
 }

 if (VAR_4) {
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
   VAR_4[VAR_7] = VAR_5->fpr[VAR_7];
 }
 return VAR_2;
}
