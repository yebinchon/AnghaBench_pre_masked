
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(int VAR_2, int VAR_3)
{

 int VAR_4;
 const char *VAR_5[4] =
  { "acquire", "acquired", "contended", "release" };

 FUNC_0("\n=== output for debug===\n\n");
 FUNC_0("bad: %d, total: %d\n", VAR_2, VAR_3);
 FUNC_0("bad rate: %.2f %%\n", (double)VAR_2 / (double)VAR_3 * 100);
 FUNC_0("histogram of events caused bad sequence\n");
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(" %10s: %d\n", VAR_5[VAR_4], VAR_1[VAR_4]);
}
