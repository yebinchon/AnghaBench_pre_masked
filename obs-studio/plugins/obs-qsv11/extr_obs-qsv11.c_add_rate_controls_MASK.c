
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qsv_rate_control_info {scalar_t__ name; int haswell_or_greater; } ;
typedef int obs_property_t ;
typedef enum qsv_cpu_platform { ____Placeholder_qsv_cpu_platform } qsv_cpu_platform ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(obs_property_t *VAR_1,
         const struct qsv_rate_control_info *VAR_2)
{
 enum qsv_cpu_platform VAR_3 = FUNC_1();
 while (VAR_2->name) {
  if (!VAR_2->haswell_or_greater || VAR_3 >= VAR_0)
   FUNC_0(VAR_1, VAR_2->name, VAR_2->name);
  VAR_2++;
 }
}
