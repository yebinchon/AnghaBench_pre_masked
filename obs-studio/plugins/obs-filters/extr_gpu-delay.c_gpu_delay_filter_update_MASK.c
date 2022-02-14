
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct gpu_delay_filter_data {unsigned long long delay_ns; scalar_t__ interval_ns; scalar_t__ cy; scalar_t__ cx; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (struct gpu_delay_filter_data*) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, obs_data_t *VAR_2)
{
 struct gpu_delay_filter_data *VAR_3 = VAR_1;

 VAR_3->delay_ns = (uint64_t)FUNC_1(VAR_2, VAR_0) * 1000000ULL;


 VAR_3->cx = 0;
 VAR_3->cy = 0;
 VAR_3->interval_ns = 0;
 FUNC_0(VAR_3);
}
