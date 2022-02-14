
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_cap {int lowest; int efficient; int guaranteed; int highest; } ;


 int FUNC_0 (char*,int,...) ;

void FUNC_1(int VAR_0, struct msr_hwp_cap *VAR_1, char *VAR_2)
{
 if (VAR_0 != -1)
  FUNC_0("cpu%d: ", VAR_0);

 FUNC_0("HWP_CAP: low %d eff %d guar %d high %d\n",
  VAR_1->lowest, VAR_1->efficient, VAR_1->guaranteed, VAR_1->highest);
}
