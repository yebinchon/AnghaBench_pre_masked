
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_regs {unsigned long* gpr; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,struct iovec*) ;

int FUNC_3(pid_t VAR_5, unsigned long VAR_6)
{
 struct pt_regs *VAR_7;
 struct iovec VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = (struct pt_regs *) FUNC_0(sizeof(struct pt_regs));
 if (!VAR_7) {
  FUNC_1("malloc() failed\n");
  return VAR_3;
 }
 VAR_8.iov_base = (u64 *) VAR_7;
 VAR_8.iov_len = sizeof(struct pt_regs);

 VAR_9 = FUNC_2(VAR_1, VAR_5, VAR_0, &VAR_8);
 if (VAR_9) {
  FUNC_1("ptrace(PTRACE_GETREGSET) failed");
  return VAR_3;
 }

 for (VAR_10 = 14; VAR_10 < 32; VAR_10++)
  VAR_7->gpr[VAR_10] = VAR_6;

 VAR_9 = FUNC_2(VAR_2, VAR_5, VAR_0, &VAR_8);
 if (VAR_9) {
  FUNC_1("ptrace(PTRACE_GETREGSET) failed");
  return VAR_3;
 }
 return VAR_4;
}
