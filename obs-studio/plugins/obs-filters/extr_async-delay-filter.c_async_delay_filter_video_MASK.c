
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct obs_source_frame {scalar_t__ timestamp; } ;
struct async_delay_data {int reset_video; scalar_t__ last_video_ts; int video_delay_reached; scalar_t__ interval; int video_frames; int context; } ;
typedef int obs_source_t ;


 int FUNC_0 (int *,struct obs_source_frame**,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,struct obs_source_frame**,int) ;
 int FUNC_3 (struct async_delay_data*,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static struct obs_source_frame *
FUNC_6(void *VAR_0, struct obs_source_frame *VAR_1)
{
 struct async_delay_data *VAR_2 = VAR_0;
 obs_source_t *VAR_3 = FUNC_5(VAR_2->context);
 struct obs_source_frame *VAR_4;
 uint64_t VAR_5;

 if (VAR_2->reset_video ||
     FUNC_4(VAR_1->timestamp, VAR_2->last_video_ts)) {
  FUNC_3(VAR_2, VAR_3);
  VAR_2->video_delay_reached = 0;
  VAR_2->reset_video = 0;
 }

 VAR_2->last_video_ts = VAR_1->timestamp;

 FUNC_2(&VAR_2->video_frames, &VAR_1,
       sizeof(struct obs_source_frame *));
 FUNC_0(&VAR_2->video_frames, &VAR_4,
        sizeof(struct obs_source_frame *));

 VAR_5 = VAR_1->timestamp - VAR_4->timestamp;
 if (!VAR_2->video_delay_reached && VAR_5 < VAR_2->interval)
  return ((void*)0);

 FUNC_1(&VAR_2->video_frames, ((void*)0),
       sizeof(struct obs_source_frame *));

 if (!VAR_2->video_delay_reached)
  VAR_2->video_delay_reached = 1;

 return VAR_4;
}
