
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_peeksiginfo_args {int flags; scalar_t__ off; int nr; } ;
typedef int siginfo_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_11 ;
 void* FUNC_1 (void*,int,int,int,int,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int ,int ,struct ptrace_peeksiginfo_args*,void*) ;

__attribute__((used)) static int FUNC_4(pid_t VAR_12)
{
 struct ptrace_peeksiginfo_args VAR_13;
 int VAR_14, VAR_15 = -1;
 void *VAR_16, *VAR_17;





 VAR_16 = FUNC_1(((void*)0), 2 * VAR_6, VAR_7 | VAR_8,
    VAR_5 | VAR_2, -1, 0);
 if (VAR_16 == VAR_3) {
  FUNC_0("mmap() failed: %m\n");
  return 1;
 }

 VAR_17 = FUNC_1(VAR_16 + VAR_6, VAR_6, VAR_7,
   VAR_5 | VAR_2 | VAR_4, -1, 0);
 if (VAR_17 == VAR_3) {
  FUNC_0("mmap() failed: %m\n");
  goto out;
 }

 VAR_13.nr = VAR_10;
 VAR_13.off = 0;


 VAR_13.flags = ~0;
 VAR_14 = FUNC_3(VAR_9, VAR_12, &VAR_13, VAR_16);
 if (VAR_14 != -1 || VAR_11 != VAR_1) {
  FUNC_0("sys_ptrace() returns %d (expected -1),"
    " errno %d (expected %d): %m\n",
    VAR_14, VAR_11, VAR_1);
  goto out;
 }
 VAR_13.flags = 0;


 VAR_14 = FUNC_3(VAR_9, VAR_12, &VAR_13,
     VAR_17 - sizeof(siginfo_t) * 2);
 if (VAR_14 != 2) {
  FUNC_0("sys_ptrace() returns %d (expected 2): %m\n", VAR_14);
  goto out;
 }


 VAR_14 = FUNC_3(VAR_9, VAR_12, &VAR_13, VAR_17);
 if (VAR_14 != -1 && VAR_11 != VAR_0) {
  FUNC_0("sys_ptrace() returns %d (expected -1),"
    " errno %d (expected %d): %m\n",
    VAR_14, VAR_11, VAR_0);
  goto out;
 }

 VAR_15 = 0;
out:
 FUNC_2(VAR_16, 2 * VAR_6);
 return VAR_15;
}
