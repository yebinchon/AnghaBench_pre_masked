
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* gpr; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *,struct pt_regs*) ;

int FUNC_3(pid_t VAR_4, unsigned long VAR_5)
{
 struct pt_regs *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = (struct pt_regs *) FUNC_0(sizeof(struct pt_regs));
 if (!VAR_6) {
  FUNC_1("malloc() failed");
  return VAR_2;
 }

 VAR_8 = FUNC_2(VAR_0, VAR_4, ((void*)0), VAR_6);
 if (VAR_8) {
  FUNC_1("ptrace(PTRACE_GETREGSET) failed");
  return VAR_2;
 }

 for (VAR_7 = 14; VAR_7 < 32; VAR_7++)
  VAR_6->gpr[VAR_7] = VAR_5;

 VAR_8 = FUNC_2(VAR_1, VAR_4, ((void*)0), VAR_6);
 if (VAR_8) {
  FUNC_1("ptrace(PTRACE_GETREGSET) failed");
  return VAR_2;
 }
 return VAR_3;
}
