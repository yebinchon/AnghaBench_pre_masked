
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_request {int hwp_min; int hwp_max; int hwp_desired; int hwp_epp; int hwp_window; int hwp_use_pkg; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(int VAR_0, struct msr_hwp_request *VAR_1, char *VAR_2)
{
 if (VAR_0 != -1)
  FUNC_0("cpu%d: ", VAR_0);

 if (VAR_2)
  FUNC_0("%s", VAR_2);

 FUNC_0("HWP_REQ: min %d max %d des %d epp %d window 0x%x (%d*10^%dus) use_pkg %d\n",
  VAR_1->hwp_min, VAR_1->hwp_max, VAR_1->hwp_desired, VAR_1->hwp_epp,
  VAR_1->hwp_window, VAR_1->hwp_window & 0x7F, (VAR_1->hwp_window >> 7) & 0x7, VAR_1->hwp_use_pkg);
}
