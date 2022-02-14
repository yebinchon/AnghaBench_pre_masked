
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int regs ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long*,unsigned long*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,struct iovec*) ;

int FUNC_3(pid_t VAR_4, unsigned long *VAR_5)
{
 unsigned long VAR_6[32];
 struct iovec VAR_7;
 int VAR_8;

 VAR_7.iov_base = (u64 *) VAR_6;
 VAR_7.iov_len = sizeof(VAR_6);
 VAR_8 = FUNC_2(VAR_1, VAR_4, VAR_0, &VAR_7);
 if (VAR_8) {
  FUNC_1("ptrace(PTRACE_GETREGSET, NT_PPC_TM_CVSX) failed");
  return VAR_2;
 }
 FUNC_0(VAR_5, VAR_6, sizeof(VAR_6));
 return VAR_3;
}
