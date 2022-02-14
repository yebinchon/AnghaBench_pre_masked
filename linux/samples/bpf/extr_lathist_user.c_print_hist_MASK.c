
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hist {scalar_t__ max; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpu_hist* VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 char VAR_4[VAR_2];
 struct cpu_hist *VAR_5;
 int VAR_6, VAR_7;


 FUNC_0("\033[2J");

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = &VAR_3[VAR_7];


  if (VAR_5->max == 0)
   continue;

  FUNC_0("CPU %d\n", VAR_7);
  FUNC_0("      latency        : count     distribution\n");
  for (VAR_6 = 1; VAR_6 <= VAR_1; VAR_6++) {
   FUNC_1(VAR_4, VAR_5->data[VAR_6 - 1], VAR_5->max, VAR_2);
   FUNC_0("%8ld -> %-8ld : %-8ld |%-*s|\n",
    (1l << VAR_6) >> 1, (1l << VAR_6) - 1,
    VAR_5->data[VAR_6 - 1], VAR_2, VAR_4);
  }
 }
}
