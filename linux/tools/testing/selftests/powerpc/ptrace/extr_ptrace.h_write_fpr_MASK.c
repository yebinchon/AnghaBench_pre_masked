
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpr_regs {unsigned long* fpr; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *,struct fpr_regs*) ;

int FUNC_3(pid_t VAR_4, unsigned long VAR_5)
{
 struct fpr_regs *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = (struct fpr_regs *) FUNC_0(sizeof(struct fpr_regs));
 VAR_7 = FUNC_2(VAR_0, VAR_4, ((void*)0), VAR_6);
 if (VAR_7) {
  FUNC_1("ptrace(PTRACE_GETREGSET) failed");
  return VAR_2;
 }

 for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
  VAR_6->fpr[VAR_8] = VAR_5;

 VAR_7 = FUNC_2(VAR_1, VAR_4, ((void*)0), VAR_6);
 if (VAR_7) {
  FUNC_1("ptrace(PTRACE_GETREGSET) failed");
  return VAR_2;
 }
 return VAR_3;
}
