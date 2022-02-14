
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

int FUNC_4(pid_t VAR_6, unsigned long VAR_7,
  unsigned long VAR_8, unsigned long VAR_9)
{
 struct iovec VAR_10;
 unsigned long *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(sizeof(unsigned long));
 if (!VAR_11) {
  FUNC_2("malloc() failed");
  return VAR_4;
 }

 VAR_10.iov_base = (u64 *) VAR_11;
 VAR_10.iov_len = sizeof(unsigned long);

 *VAR_11 = VAR_7;
 VAR_12 = FUNC_3(VAR_3, VAR_6, VAR_2, &VAR_10);
 if (VAR_12) {
  FUNC_2("ptrace(PTRACE_SETREGSET) failed");
  goto fail;
 }

 *VAR_11 = VAR_8;
 VAR_12 = FUNC_3(VAR_3, VAR_6, VAR_1, &VAR_10);
 if (VAR_12) {
  FUNC_2("ptrace(PTRACE_SETREGSET) failed");
  goto fail;
 }

 *VAR_11 = VAR_9;
 VAR_12 = FUNC_3(VAR_3, VAR_6, VAR_0, &VAR_10);
 if (VAR_12) {
  FUNC_2("ptrace(PTRACE_SETREGSET) failed");
  goto fail;
 }

 FUNC_0(VAR_11);
 return VAR_5;
fail:
 FUNC_0(VAR_11);
 return VAR_4;
}
