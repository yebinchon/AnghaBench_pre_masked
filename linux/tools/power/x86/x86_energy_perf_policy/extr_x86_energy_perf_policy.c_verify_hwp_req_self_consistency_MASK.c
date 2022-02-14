
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_request {scalar_t__ hwp_min; scalar_t__ hwp_max; scalar_t__ hwp_desired; } ;


 int FUNC_0 (int,char*,int,scalar_t__,scalar_t__) ;

int FUNC_1(int VAR_0, struct msr_hwp_request *VAR_1)
{

 if (VAR_1->hwp_min > VAR_1->hwp_max) {
  FUNC_0(1, "cpu%d: requested hwp-min %d > hwp_max %d",
   VAR_0, VAR_1->hwp_min, VAR_1->hwp_max);
 }


 if (VAR_1->hwp_desired && (VAR_1->hwp_desired > VAR_1->hwp_max)) {
  FUNC_0(1, "cpu%d: requested hwp-desired %d > hwp_max %d",
   VAR_0, VAR_1->hwp_desired, VAR_1->hwp_max);
 }

 if (VAR_1->hwp_desired && (VAR_1->hwp_desired < VAR_1->hwp_min)) {
  FUNC_0(1, "cpu%d: requested hwp-desired %d < requested hwp_min %d",
   VAR_0, VAR_1->hwp_desired, VAR_1->hwp_min);
 }

 return 0;
}
