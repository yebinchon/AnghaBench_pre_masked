
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_data {int timestamp; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* raw_video ) (int ,struct video_data*) ;} ;
struct obs_output {int total_frames; TYPE_2__ context; TYPE_1__ info; int pause; } ;


 scalar_t__ FUNC_0 (struct obs_output*) ;
 int FUNC_1 (int ,struct video_data*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct video_data *VAR_1)
{
 struct obs_output *VAR_2 = VAR_0;

 if (FUNC_2(&VAR_2->pause, VAR_1->timestamp))
  return;

 if (FUNC_0(VAR_2))
  VAR_2->info.raw_video(VAR_2->context.data, VAR_1);
 VAR_2->total_frames++;
}
