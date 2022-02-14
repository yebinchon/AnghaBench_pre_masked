
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ptrace_peeksiginfo_args {int nr; int off; scalar_t__ flags; } ;
struct TYPE_3__ {int si_code; int si_int; } ;
typedef TYPE_1__ siginfo_t ;
typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,struct ptrace_peeksiginfo_args*,TYPE_1__*) ;

int FUNC_2(pid_t VAR_5, int VAR_6, int VAR_7)
{
 struct ptrace_peeksiginfo_args VAR_8 = {.flags = 0, .nr = VAR_7, .off = 0};
 int VAR_9, VAR_10, VAR_11, VAR_12 = -1;
 siginfo_t VAR_13[VAR_2];
 int VAR_14;

 if (VAR_6 == 1) {
  VAR_8.flags = VAR_1;
  VAR_14 = VAR_4;
 } else {
  VAR_8.flags = 0;
  VAR_14 = VAR_3;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; ) {
  VAR_8.off = VAR_9;
  VAR_11 = FUNC_1(VAR_0, VAR_5, &VAR_8, VAR_13);
  if (VAR_11 == -1) {
   FUNC_0("ptrace() failed: %m\n");
   goto out;
  }

  if (VAR_11 == 0)
   break;

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++, VAR_9++) {
   if (VAR_13[VAR_10].si_code == VAR_14 &&
       VAR_13[VAR_10].si_int == VAR_9)
    continue;

   FUNC_0("%d: Wrong siginfo i=%d si_code=%d si_int=%d\n",
        VAR_6, VAR_9, VAR_13[VAR_10].si_code, VAR_13[VAR_10].si_int);
   goto out;
  }
 }

 if (VAR_9 != VAR_2) {
  FUNC_0("Only %d signals were read\n", VAR_9);
  goto out;
 }

 VAR_12 = 0;
out:
 return VAR_12;
}
