
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char**) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (char*,int *,int ) ;

int FUNC_5(int VAR_3, char **VAR_4)
{
 if (VAR_3 < 5) {
  FUNC_1(VAR_2, "Usage:\n"
   "dropper <syscall_nr> <arch> <errno> <prog> [<args>]\n"
   "Hint:	AUDIT_ARCH_I386: 0x%X\n"
   "	AUDIT_ARCH_X86_64: 0x%X\n"
   "\n", VAR_0, VAR_1);
  return 1;
 }
 if (FUNC_2(FUNC_4(VAR_4[1], ((void*)0), 0), FUNC_4(VAR_4[2], ((void*)0), 0),
      FUNC_4(VAR_4[3], ((void*)0), 0)))
  return 1;
 FUNC_0(VAR_4[4], &VAR_4[4]);
 FUNC_3("Failed to execv\n");
 return 255;
}
