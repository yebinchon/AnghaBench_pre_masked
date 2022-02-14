
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct obs_source_frame {int format; int refs; int height; int width; int full_range; } ;
struct TYPE_4__ {size_t num; struct async_frame* array; } ;
struct TYPE_3__ {scalar_t__ num; } ;
struct obs_source {int async_cache_format; int async_mutex; TYPE_2__ async_cache; int async_cache_full_range; int async_cache_height; int async_cache_width; scalar_t__ last_frame_ts; TYPE_1__ async_frames; } ;
struct async_frame {int used; scalar_t__ unused_count; struct obs_source_frame* frame; } ;
typedef enum video_format { ____Placeholder_video_format } video_format ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_1 (struct obs_source*) ;
 int FUNC_2 (struct obs_source_frame*,struct obs_source_frame const*) ;
 int FUNC_3 (TYPE_2__,struct async_frame*) ;
 int FUNC_4 (struct obs_source*) ;
 struct obs_source_frame* FUNC_5 (int const,int ,int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline struct obs_source_frame *
FUNC_9(struct obs_source *VAR_1, const struct obs_source_frame *VAR_2)
{
 struct obs_source_frame *VAR_3 = ((void*)0);

 FUNC_7(&VAR_1->async_mutex);

 if (VAR_1->async_frames.num >= VAR_0) {
  FUNC_4(VAR_1);
  VAR_1->last_frame_ts = 0;
  FUNC_8(&VAR_1->async_mutex);
  return ((void*)0);
 }

 if (FUNC_0(VAR_1, VAR_2)) {
  FUNC_4(VAR_1);
  VAR_1->async_cache_width = VAR_2->width;
  VAR_1->async_cache_height = VAR_2->height;
 }

 const enum video_format VAR_4 = VAR_2->format;
 VAR_1->async_cache_format = VAR_4;
 VAR_1->async_cache_full_range = VAR_2->full_range;

 for (size_t VAR_5 = 0; VAR_5 < VAR_1->async_cache.num; VAR_5++) {
  struct async_frame *VAR_6 = &VAR_1->async_cache.array[VAR_5];
  if (!VAR_6->used) {
   VAR_3 = VAR_6->frame;
   VAR_3->format = VAR_4;
   VAR_6->used = 1;
   VAR_6->unused_count = 0;
   break;
  }
 }

 FUNC_1(VAR_1);

 if (!VAR_3) {
  struct async_frame VAR_7;

  VAR_3 = FUNC_5(VAR_4, VAR_2->width,
          VAR_2->height);
  VAR_7.frame = VAR_3;
  VAR_7.used = 1;
  VAR_7.unused_count = 0;
  VAR_3->refs = 1;

  FUNC_3(VAR_1->async_cache, &VAR_7);
 }

 FUNC_6(&VAR_3->refs);

 FUNC_8(&VAR_1->async_mutex);

 FUNC_2(VAR_3, VAR_2);

 return VAR_3;
}
