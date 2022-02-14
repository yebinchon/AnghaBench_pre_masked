
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct gpu_delay_filter_data {int target_valid; scalar_t__ cx; scalar_t__ cy; int context; } ;
typedef int obs_source_t ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct gpu_delay_filter_data*) ;

__attribute__((used)) static inline bool FUNC_4(struct gpu_delay_filter_data *VAR_0)
{
 obs_source_t *VAR_1 = FUNC_0(VAR_0->context);
 uint32_t VAR_2;
 uint32_t VAR_3;

 VAR_0->target_valid = !!VAR_1;
 if (!VAR_0->target_valid)
  return 1;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_1);

 VAR_0->target_valid = !!VAR_2 && !!VAR_3;
 if (!VAR_0->target_valid)
  return 1;

 if (VAR_2 != VAR_0->cx || VAR_3 != VAR_0->cy) {
  VAR_0->cx = VAR_2;
  VAR_0->cy = VAR_3;
  FUNC_3(VAR_0);
  return 1;
 }

 return 0;
}
