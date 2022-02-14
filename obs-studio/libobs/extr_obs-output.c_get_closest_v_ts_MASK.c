
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct pause_data {int last_video_ts; } ;
struct TYPE_3__ {int video_frame_interval_ns; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline uint64_t FUNC_1(struct pause_data *VAR_1)
{
 uint64_t VAR_2 = VAR_0->video.video_frame_interval_ns;
 uint64_t VAR_3 = VAR_2 * 2;
 uint64_t VAR_4 = FUNC_0();

 return VAR_1->last_video_ts +
        ((VAR_4 - VAR_1->last_video_ts + VAR_3) / VAR_2) * VAR_2;
}
