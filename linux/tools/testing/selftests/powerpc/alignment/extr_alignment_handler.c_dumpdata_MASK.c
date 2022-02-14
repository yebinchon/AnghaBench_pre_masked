
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(char *VAR_0, char *VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4;

 FUNC_0("  %s: unexpected result:\n", VAR_3);
 FUNC_0("    mem:");
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(" %02x", VAR_0[VAR_4]);
 FUNC_0("\n");
 FUNC_0("    ci: ");
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(" %02x", VAR_1[VAR_4]);
 FUNC_0("\n");
}
