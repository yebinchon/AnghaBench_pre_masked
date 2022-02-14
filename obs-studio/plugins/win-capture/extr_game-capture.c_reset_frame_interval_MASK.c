
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct obs_video_info {unsigned long long fps_den; unsigned long long fps_num; } ;
struct TYPE_3__ {int limit_framerate; } ;
struct game_capture {TYPE_2__* global_hook_info; TYPE_1__ config; } ;
struct TYPE_4__ {int frame_interval; } ;


 scalar_t__ FUNC_0 (struct obs_video_info*) ;

__attribute__((used)) static inline void FUNC_1(struct game_capture *VAR_0)
{
 struct obs_video_info VAR_1;
 uint64_t VAR_2 = 0;

 if (FUNC_0(&VAR_1)) {
  VAR_2 = VAR_1.fps_den * 1000000000ULL / VAR_1.fps_num;





  if (!VAR_0->config.limit_framerate)
   VAR_2 /= 2;
 }

 VAR_0->global_hook_info->frame_interval = VAR_2;
}
