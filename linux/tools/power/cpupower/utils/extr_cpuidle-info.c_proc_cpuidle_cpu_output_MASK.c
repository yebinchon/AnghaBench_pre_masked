
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 unsigned int FUNC_1 (unsigned int) ;
 long FUNC_2 (unsigned int,unsigned int) ;
 long FUNC_3 (unsigned int,unsigned int) ;
 long FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_0)
{
 long VAR_1 = 2000000000;
 unsigned int VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == 0) {
  FUNC_5(FUNC_0("CPU %u: No C-states info\n"), VAR_0);
  return;
 }

 FUNC_5(FUNC_0("active state:            C0\n"));
 FUNC_5(FUNC_0("max_cstate:              C%u\n"), VAR_3-1);
 FUNC_5(FUNC_0("maximum allowed latency: %lu usec\n"), VAR_1);
 FUNC_5(FUNC_0("states:\t\n"));
 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++) {
  FUNC_5(FUNC_0("    C%d:                  "
    "type[C%d] "), VAR_2, VAR_2);
  FUNC_5(FUNC_0("promotion[--] demotion[--] "));
  FUNC_5(FUNC_0("latency[%03lu] "),
         FUNC_2(VAR_0, VAR_2));
  FUNC_5(FUNC_0("usage[%08lu] "),
         FUNC_4(VAR_0, VAR_2));
  FUNC_5(FUNC_0("duration[%020Lu] \n"),
         FUNC_3(VAR_0, VAR_2));
 }
}
