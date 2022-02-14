
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int audio_encoder_id; int audio_encoder; int video_encoder_id; int video_encoder; } ;
struct ffmpeg_data {TYPE_3__ config; TYPE_2__* output; } ;
struct TYPE_5__ {TYPE_1__* oformat; } ;
struct TYPE_4__ {void* audio_codec; void* video_codec; } ;


 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ffmpeg_data *VAR_0)
{
 VAR_0->output->oformat->video_codec = FUNC_0(
  VAR_0->config.video_encoder, VAR_0->config.video_encoder_id);

 VAR_0->output->oformat->audio_codec = FUNC_0(
  VAR_0->config.audio_encoder, VAR_0->config.audio_encoder_id);
}
