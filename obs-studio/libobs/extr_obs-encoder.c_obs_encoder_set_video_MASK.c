
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_t ;
struct video_output_info {int fps_num; int fps_den; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {int timebase_den; int timebase_num; int * media; TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct video_output_info* FUNC_3 (int *) ;

void FUNC_4(obs_encoder_t *VAR_2, video_t *VAR_3)
{
 const struct video_output_info *VAR_4;

 if (!FUNC_2(VAR_2, "obs_encoder_set_video"))
  return;
 if (VAR_2->info.type != VAR_1) {
  FUNC_0(VAR_0,
       "obs_encoder_set_video: "
       "encoder '%s' is not a video encoder",
       FUNC_1(VAR_2));
  return;
 }
 if (!VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_3);

 VAR_2->media = VAR_3;
 VAR_2->timebase_num = VAR_4->fps_den;
 VAR_2->timebase_den = VAR_4->fps_num;
}
