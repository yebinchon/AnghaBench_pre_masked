
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int cpu; int prio; scalar_t__ verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3(const struct config *VAR_3)
{
 if (VAR_3->verbose)
  FUNC_0("set cpu affinity to cpu #%u\n", VAR_3->cpu);

 FUNC_1(VAR_3->cpu);

 switch (VAR_3->prio) {
 case 129:
  if (VAR_3->verbose)
   FUNC_0("high priority condition requested\n");

  FUNC_2(VAR_1);
  break;
 case 128:
  if (VAR_3->verbose)
   FUNC_0("low priority condition requested\n");

  FUNC_2(VAR_2);
  break;
 default:
  if (VAR_3->verbose)
   FUNC_0("default priority condition requested\n");

  FUNC_2(VAR_0);
 }
}
