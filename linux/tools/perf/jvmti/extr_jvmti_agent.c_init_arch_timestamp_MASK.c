
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 char *VAR_1 = FUNC_0("JITDUMP_USE_ARCH_TIMESTAMP");

 if (!VAR_1 || !*VAR_1 || !FUNC_1(VAR_1, "0"))
  return;

 VAR_0 = 1;
}
