
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwp_min; scalar_t__ hwp_max; scalar_t__ hwp_desired; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_2(void)
{
 if (!FUNC_0())
  return 0;


 if ((VAR_2 && VAR_3) &&
     (VAR_1.hwp_min > VAR_1.hwp_max)) {
  FUNC_1("hwp-min %d > hwp_max %d\n", VAR_1.hwp_min, VAR_1.hwp_max);
  return -VAR_0;
 }


 if (VAR_1.hwp_desired && VAR_2 &&
     (VAR_1.hwp_desired > VAR_1.hwp_max)) {
  FUNC_1("hwp-desired cannot be greater than hwp_max\n");
  return -VAR_0;
 }

 if (VAR_1.hwp_desired && VAR_3 &&
     (VAR_1.hwp_desired < VAR_1.hwp_min)) {
  FUNC_1("hwp-desired cannot be less than hwp_min\n");
  return -VAR_0;
 }

 return 0;
}
