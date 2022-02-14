
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tm_spr_regs {int dummy; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tm_spr_regs*,struct tm_spr_regs*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,struct iovec*) ;

int FUNC_4(pid_t VAR_4, struct tm_spr_regs *VAR_5)
{
 struct tm_spr_regs *VAR_6;
 struct iovec VAR_7;
 int VAR_8;

 VAR_6 = (struct tm_spr_regs *) FUNC_0(sizeof(struct tm_spr_regs));
 if (!VAR_6) {
  FUNC_2("malloc() failed");
  return VAR_2;
 }

 VAR_7.iov_base = (u64 *) VAR_6;
 VAR_7.iov_len = sizeof(struct tm_spr_regs);

 VAR_8 = FUNC_3(VAR_1, VAR_4, VAR_0, &VAR_7);
 if (VAR_8) {
  FUNC_2("ptrace(PTRACE_GETREGSET) failed");
  return VAR_2;
 }

 if (VAR_5)
  FUNC_1(VAR_5, VAR_6, sizeof(struct tm_spr_regs));

 return VAR_3;
}
