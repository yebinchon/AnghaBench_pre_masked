
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpu_delay_filter_data {int processed_frame; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (struct gpu_delay_filter_data*) ;
 scalar_t__ FUNC_2 (struct gpu_delay_filter_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, float VAR_1)
{
 FUNC_0(VAR_1);

 struct gpu_delay_filter_data *VAR_2 = VAR_0;

 VAR_2->processed_frame = 0;

 if (FUNC_2(VAR_2))
  return;
 FUNC_1(VAR_2);
}
