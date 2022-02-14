
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct obs_video_info {scalar_t__ fps_num; scalar_t__ fps_den; int member_0; } ;
struct gpu_delay_filter_data {unsigned long long interval_ns; } ;


 int FUNC_0 (struct obs_video_info*) ;
 int FUNC_1 (struct gpu_delay_filter_data*,unsigned long long) ;

__attribute__((used)) static inline void FUNC_2(struct gpu_delay_filter_data *VAR_0)
{
 struct obs_video_info VAR_1 = {0};
 uint64_t VAR_2;

 FUNC_0(&VAR_1);

 VAR_2 =
  (uint64_t)VAR_1.fps_den * 1000000000ULL / (uint64_t)VAR_1.fps_num;

 if (VAR_2 != VAR_0->interval_ns)
  FUNC_1(VAR_0, VAR_2);
}
