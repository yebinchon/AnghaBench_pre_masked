
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_1);
 FUNC_3(FUNC_0("  current CPU frequency: "));
 if (!VAR_3) {
  FUNC_3("Unable to call hardware\n");
  return -VAR_0;
 }
 if (VAR_2) {
  FUNC_2(VAR_3);
 } else
  FUNC_3("%lu", VAR_3);
 FUNC_3(FUNC_0(" (asserted by call to hardware)\n"));
 return 0;
}
