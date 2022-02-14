
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_source_frame {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct async_delay_data {TYPE_1__ video_frames; } ;
typedef int obs_source_t ;


 int FUNC_0 (TYPE_1__*,struct obs_source_frame**,int) ;
 int FUNC_1 (int *,struct obs_source_frame*) ;

__attribute__((used)) static void FUNC_2(struct async_delay_data *VAR_0,
       obs_source_t *VAR_1)
{
 while (VAR_0->video_frames.size) {
  struct obs_source_frame *VAR_2;

  FUNC_0(&VAR_0->video_frames, &VAR_2,
        sizeof(struct obs_source_frame *));
  FUNC_1(VAR_1, VAR_2);
 }
}
