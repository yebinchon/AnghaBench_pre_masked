
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char* const*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 char *const VAR_0[] = { "./exec_target", ((void*)0) };

 if (FUNC_0("./exec_target", VAR_0, ((void*)0)) == -1) {
  FUNC_2("execve");
  FUNC_1(1);
 }
}
