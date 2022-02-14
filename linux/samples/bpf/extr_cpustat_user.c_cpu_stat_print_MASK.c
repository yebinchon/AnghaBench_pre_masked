
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_stat_data {int* cstate; int* pstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int) ;
 struct cpu_stat_data* VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_4, VAR_5;
 char VAR_6[sizeof("cstate-9")];
 struct cpu_stat_data *VAR_7;


 FUNC_0("\033[2J");


 FUNC_0("\nCPU states statistics:\n");
 FUNC_0("%-10s ", "state(ms)");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_1(VAR_6, "cstate-%d", VAR_4);
  FUNC_0("%-11s ", VAR_6);
 }

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1(VAR_6, "pstate-%d", VAR_4);
  FUNC_0("%-11s ", VAR_6);
 }

 FUNC_0("\n");

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_7 = &VAR_3[VAR_5];

  FUNC_0("CPU-%-6d ", VAR_5);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0("%-11ld ", VAR_7->cstate[VAR_4] / 1000000);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_0("%-11ld ", VAR_7->pstate[VAR_4] / 1000000);

  FUNC_0("\n");
 }
}
