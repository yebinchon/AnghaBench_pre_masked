
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t cache_size; } ;
struct TYPE_3__ {size_t num; struct video_input* array; } ;
struct video_output {size_t first_added; size_t available_frames; size_t last_added; int data_mutex; int skipped_frames; TYPE_2__ info; scalar_t__ frame_time; int input_mutex; TYPE_1__ inputs; struct cached_frame_info* cache; } ;
struct video_input {int param; int (* callback ) (int ,struct video_data*) ;} ;
struct video_data {int timestamp; } ;
struct cached_frame_info {scalar_t__ count; int skipped; struct video_data frame; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct video_input*,struct video_data*) ;
 int FUNC_4 (int ,struct video_data*) ;

__attribute__((used)) static inline bool FUNC_5(struct video_output *VAR_0)
{
 struct cached_frame_info *VAR_1;
 bool VAR_2;
 bool VAR_3;



 FUNC_1(&VAR_0->data_mutex);

 VAR_1 = &VAR_0->cache[VAR_0->first_added];

 FUNC_2(&VAR_0->data_mutex);



 FUNC_1(&VAR_0->input_mutex);

 for (size_t VAR_4 = 0; VAR_4 < VAR_0->inputs.num; VAR_4++) {
  struct video_input *VAR_5 = VAR_0->inputs.array + VAR_4;
  struct video_data VAR_6 = VAR_1->frame;

  if (FUNC_3(VAR_5, &VAR_6))
   VAR_5->callback(VAR_5->param, &VAR_6);
 }

 FUNC_2(&VAR_0->input_mutex);



 FUNC_1(&VAR_0->data_mutex);

 VAR_1->frame.timestamp += VAR_0->frame_time;
 VAR_2 = --VAR_1->count == 0;
 VAR_3 = VAR_1->skipped > 0;

 if (VAR_2) {
  if (++VAR_0->first_added == VAR_0->info.cache_size)
   VAR_0->first_added = 0;

  if (++VAR_0->available_frames == VAR_0->info.cache_size)
   VAR_0->last_added = VAR_0->first_added;
 } else if (VAR_3) {
  --VAR_1->skipped;
  FUNC_0(&VAR_0->skipped_frames);
 }

 FUNC_2(&VAR_0->data_mutex);



 return VAR_2;
}
