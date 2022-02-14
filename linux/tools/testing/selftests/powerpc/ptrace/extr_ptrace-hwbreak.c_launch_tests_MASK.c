
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_debug_info {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int,struct ppc_debug_info*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int *,struct ppc_debug_info*) ;
 int FUNC_8 (int*) ;

__attribute__((used)) static int FUNC_9(bool VAR_9)
{
 char VAR_10[1024];
 int VAR_11, VAR_12, VAR_13;

 struct ppc_debug_info VAR_14;

 VAR_12 = FUNC_7(VAR_3, VAR_8, ((void*)0), &VAR_14);
 if (VAR_12) {
  FUNC_5("Can't set breakpoint info\n");
  FUNC_3(-1);
 }
 if (!(VAR_14.features & VAR_2))
  FUNC_6("WARNING: Kernel doesn't support PPC_PTRACE_SETHWDEBUG\n");


 for (VAR_11 = 1; VAR_11 <= sizeof(long); VAR_11 <<= 1)
  FUNC_4(VAR_10, VAR_1, VAR_11, &VAR_14, VAR_9);


 for (VAR_11 = 1; VAR_11 <= sizeof(long); VAR_11 <<= 1)
  FUNC_4(VAR_10, VAR_0, VAR_11, &VAR_14, VAR_9);

 FUNC_7(VAR_4, VAR_8, ((void*)0), 0);






 FUNC_8(&VAR_13);

 if (FUNC_1(VAR_13) && FUNC_2(VAR_13) == VAR_5) {
  FUNC_6("FAIL: Child process hit the breakpoint, which is not expected\n");
  FUNC_7(VAR_4, VAR_8, ((void*)0), 0);
  return VAR_6;
 }

 if (FUNC_0(VAR_13))
  FUNC_6("Child exited normally\n");

 return VAR_7;
}
