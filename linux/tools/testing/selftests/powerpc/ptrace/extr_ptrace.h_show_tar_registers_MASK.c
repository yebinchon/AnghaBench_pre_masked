
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long*) ;
 unsigned long* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,struct iovec*) ;

int FUNC_4(pid_t VAR_6, unsigned long *VAR_7)
{
 struct iovec VAR_8;
 unsigned long *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(sizeof(unsigned long));
 if (!VAR_9) {
  FUNC_2("malloc() failed");
  return VAR_4;
 }
 VAR_8.iov_base = (u64 *) VAR_9;
 VAR_8.iov_len = sizeof(unsigned long);

 VAR_10 = FUNC_3(VAR_3, VAR_6, VAR_2, &VAR_8);
 if (VAR_10) {
  FUNC_2("ptrace(PTRACE_GETREGSET) failed");
  goto fail;
 }
 if (VAR_7)
  VAR_7[0] = *VAR_9;

 VAR_10 = FUNC_3(VAR_3, VAR_6, VAR_1, &VAR_8);
 if (VAR_10) {
  FUNC_2("ptrace(PTRACE_GETREGSET) failed");
  goto fail;
 }
 if (VAR_7)
  VAR_7[1] = *VAR_9;

 VAR_10 = FUNC_3(VAR_3, VAR_6, VAR_0, &VAR_8);
 if (VAR_10) {
  FUNC_2("ptrace(PTRACE_GETREGSET) failed");
  goto fail;
 }
 if (VAR_7)
  VAR_7[2] = *VAR_9;

 FUNC_0(VAR_9);
 return VAR_5;
fail:
 FUNC_0(VAR_9);
 return VAR_4;
}
