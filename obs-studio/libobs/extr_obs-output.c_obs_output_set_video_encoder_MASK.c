
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ scaled_height; scalar_t__ scaled_width; TYPE_3__* video_encoder; } ;
typedef TYPE_2__ obs_output_t ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_14__ {TYPE_1__ info; } ;
typedef TYPE_3__ obs_encoder_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,char*) ;

void FUNC_5(obs_output_t *VAR_2, obs_encoder_t *VAR_3)
{
 if (!FUNC_4(VAR_2, "obs_output_set_video_encoder"))
  return;
 if (VAR_3 && VAR_3->info.type != VAR_1) {
  FUNC_0(VAR_0, "obs_output_set_video_encoder: "
      "encoder passed is not a video encoder");
  return;
 }

 if (VAR_2->video_encoder == VAR_3)
  return;

 FUNC_2(VAR_2->video_encoder, VAR_2);
 FUNC_1(VAR_3, VAR_2);
 VAR_2->video_encoder = VAR_3;


 if (VAR_2->scaled_width && VAR_2->scaled_height)
  FUNC_3(VAR_2->video_encoder,
         VAR_2->scaled_width,
         VAR_2->scaled_height);
}
