
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_request {scalar_t__ hwp_max; scalar_t__ hwp_min; scalar_t__ hwp_desired; } ;
struct msr_hwp_cap {scalar_t__ highest; scalar_t__ lowest; } ;


 int FUNC_0 (int,char*,int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_1(int VAR_3, struct msr_hwp_request *VAR_4, struct msr_hwp_cap *VAR_5)
{
 if (VAR_1) {
  if (VAR_4->hwp_max > VAR_5->highest)
   FUNC_0(1, "cpu%d: requested max %d > capabilities highest %d, use --force?",
    VAR_3, VAR_4->hwp_max, VAR_5->highest);
  if (VAR_4->hwp_max < VAR_5->lowest)
   FUNC_0(1, "cpu%d: requested max %d < capabilities lowest %d, use --force?",
    VAR_3, VAR_4->hwp_max, VAR_5->lowest);
 }

 if (VAR_2) {
  if (VAR_4->hwp_min > VAR_5->highest)
   FUNC_0(1, "cpu%d: requested min %d > capabilities highest %d, use --force?",
    VAR_3, VAR_4->hwp_min, VAR_5->highest);
  if (VAR_4->hwp_min < VAR_5->lowest)
   FUNC_0(1, "cpu%d: requested min %d < capabilities lowest %d, use --force?",
    VAR_3, VAR_4->hwp_min, VAR_5->lowest);
 }

 if (VAR_2 && VAR_1 && (VAR_4->hwp_min > VAR_4->hwp_max))
  FUNC_0(1, "cpu%d: requested min %d > requested max %d",
   VAR_3, VAR_4->hwp_min, VAR_4->hwp_max);

 if (VAR_0 && VAR_4->hwp_desired) {
  if (VAR_4->hwp_desired > VAR_4->hwp_max)
   FUNC_0(1, "cpu%d: requested desired %d > requested max %d, use --force?",
    VAR_3, VAR_4->hwp_desired, VAR_4->hwp_max);
  if (VAR_4->hwp_desired < VAR_4->hwp_min)
   FUNC_0(1, "cpu%d: requested desired %d < requested min %d, use --force?",
    VAR_3, VAR_4->hwp_desired, VAR_4->hwp_min);
  if (VAR_4->hwp_desired < VAR_5->lowest)
   FUNC_0(1, "cpu%d: requested desired %d < capabilities lowest %d, use --force?",
    VAR_3, VAR_4->hwp_desired, VAR_5->lowest);
  if (VAR_4->hwp_desired > VAR_5->highest)
   FUNC_0(1, "cpu%d: requested desired %d > capabilities highest %d, use --force?",
    VAR_3, VAR_4->hwp_desired, VAR_5->highest);
 }

 return 0;
}
