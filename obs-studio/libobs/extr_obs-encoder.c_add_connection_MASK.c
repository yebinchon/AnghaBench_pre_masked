
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_scale_info {int member_0; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct obs_encoder {int media; int mixer_idx; TYPE_1__ info; } ;
struct audio_convert_info {int member_0; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct audio_convert_info*,int ,struct obs_encoder*) ;
 int FUNC_1 (struct obs_encoder*,struct audio_convert_info*) ;
 int FUNC_2 (struct obs_encoder*,struct video_scale_info*) ;
 scalar_t__ FUNC_3 (struct obs_encoder*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct obs_encoder*,int) ;
 int FUNC_5 (struct obs_encoder*) ;
 int FUNC_6 (int ,struct video_scale_info*,int ,struct obs_encoder*) ;

__attribute__((used)) static void FUNC_7(struct obs_encoder *VAR_3)
{
 if (VAR_3->info.type == VAR_0) {
  struct audio_convert_info VAR_4 = {0};
  FUNC_1(VAR_3, &VAR_4);

  FUNC_0(VAR_3->media, VAR_3->mixer_idx,
         &VAR_4, VAR_1, VAR_3);
 } else {
  struct video_scale_info VAR_5 = {0};
  FUNC_2(VAR_3, &VAR_5);

  if (FUNC_3(VAR_3)) {
   FUNC_5(VAR_3);
  } else {
   FUNC_6(VAR_3->media, &VAR_5, VAR_2,
     VAR_3);
  }
 }

 FUNC_4(VAR_3, 1);
}
