
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct video_output_info {scalar_t__ fps_num; scalar_t__ fps_den; } ;
struct TYPE_13__ {TYPE_1__** array; int num; } ;
struct TYPE_11__ {int deinterlace_offset; int deinterlace_frame_ts; int last_frame_ts; TYPE_1__* cur_async_frame; void* deinterlace_half_duration; TYPE_1__* prev_async_frame; TYPE_8__ async_frames; scalar_t__ async_unbuffered; } ;
typedef TYPE_3__ obs_source_t ;
struct TYPE_10__ {int video_time; int video; } ;
struct TYPE_12__ {TYPE_2__ video; } ;
struct TYPE_9__ {int timestamp; scalar_t__ prev_frame; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int,int) ;
 struct video_output_info* FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(obs_source_t *VAR_3,
        uint64_t VAR_4)
{
 const struct video_output_info *VAR_5;
 uint64_t VAR_6;

 if (VAR_3->async_unbuffered && VAR_3->deinterlace_offset) {

  const uint64_t VAR_7 =
   VAR_3->deinterlace_frame_ts + VAR_3->deinterlace_offset +
   ((uint64_t)VAR_3->deinterlace_half_duration * 2) -
   VAR_1;
  if (VAR_4 < VAR_7) {

   const uint64_t VAR_8 = VAR_7 - VAR_4;
   if (VAR_8 < VAR_0) {
    return;
   }
  }
 }

 if (!VAR_3->async_frames.num)
  return;

 VAR_5 = FUNC_4(VAR_2->video.video);
 VAR_6 = (uint64_t)VAR_5->fps_den * 500000000ULL /
   (uint64_t)VAR_5->fps_num;

 if (FUNC_1(VAR_3) || FUNC_2(VAR_3, VAR_4)) {
  uint64_t VAR_9;

  VAR_3->prev_async_frame = ((void*)0);
  VAR_3->cur_async_frame = VAR_3->async_frames.array[0];

  FUNC_0(VAR_3->async_frames, 0);

  if (VAR_3->cur_async_frame->prev_frame) {
   VAR_3->prev_async_frame = VAR_3->cur_async_frame;
   VAR_3->cur_async_frame = VAR_3->async_frames.array[0];

   FUNC_0(VAR_3->async_frames, 0);

   VAR_3->deinterlace_half_duration =
    (uint32_t)((VAR_3->cur_async_frame->timestamp -
         VAR_3->prev_async_frame->timestamp) /
        2);
  } else {
   VAR_3->deinterlace_half_duration =
    (uint32_t)((VAR_3->cur_async_frame->timestamp -
         VAR_3->deinterlace_frame_ts) /
        2);
  }

  if (!VAR_3->last_frame_ts)
   VAR_3->last_frame_ts = VAR_3->cur_async_frame->timestamp;

  VAR_3->deinterlace_frame_ts = VAR_3->cur_async_frame->timestamp;

  VAR_9 = VAR_2->video.video_time - VAR_3->deinterlace_frame_ts;

  if (!VAR_3->deinterlace_offset) {
   VAR_3->deinterlace_offset = VAR_9;
  } else {
   uint64_t VAR_10 =
    FUNC_3(VAR_3->deinterlace_offset, VAR_9);
   if (VAR_10 > VAR_6)
    VAR_3->deinterlace_offset = VAR_9;
  }
 }
}
