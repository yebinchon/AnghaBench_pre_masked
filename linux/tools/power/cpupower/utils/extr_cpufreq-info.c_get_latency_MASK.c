
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 char* FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_2);

 FUNC_3(FUNC_0("  maximum transition latency: "));
 if (!VAR_4 || VAR_4 == VAR_1) {
  FUNC_3(FUNC_0(" Cannot determine or is not supported.\n"));
  return -VAR_0;
 }

 if (VAR_3) {
  FUNC_2(VAR_4);
  FUNC_3("\n");
 } else
  FUNC_3("%lu\n", VAR_4);
 return 0;
}
