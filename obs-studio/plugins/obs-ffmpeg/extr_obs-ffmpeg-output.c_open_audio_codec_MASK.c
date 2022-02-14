
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int audio_settings; } ;
struct ffmpeg_data {int frame_size; int * samples; int acodec; TYPE_6__** aframe; TYPE_2__ config; TYPE_1__** audio_streams; } ;
struct TYPE_10__ {int sample_rate; int channel_layout; int channels; int format; } ;
struct TYPE_9__ {int strict_std_compliance; int frame_size; int sample_fmt; int channels; int sample_rate; int channel_layout; } ;
struct TYPE_7__ {TYPE_3__* codec; } ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;
 int FUNC_4 (int ,struct ffmpeg_data*,char*,...) ;
 int FUNC_5 (TYPE_3__*,char**) ;
 int FUNC_6 (char**) ;
 char** FUNC_7 (int ,char,int) ;

__attribute__((used)) static bool FUNC_8(struct ffmpeg_data *VAR_1, int VAR_2)
{
 AVCodecContext *VAR_3 = VAR_1->audio_streams[VAR_2]->codec;
 char **VAR_4 = FUNC_7(VAR_1->config.audio_settings, ' ', 0);
 int VAR_5;

 if (VAR_4) {
  FUNC_5(VAR_3, VAR_4);
  FUNC_6(VAR_4);
 }

 VAR_1->aframe[VAR_2] = FUNC_1();
 if (!VAR_1->aframe[VAR_2]) {
  FUNC_4(VAR_0, VAR_1,
     "Failed to allocate audio frame");
  return 0;
 }

 VAR_1->aframe[VAR_2]->format = VAR_3->sample_fmt;
 VAR_1->aframe[VAR_2]->channels = VAR_3->channels;
 VAR_1->aframe[VAR_2]->channel_layout = VAR_3->channel_layout;
 VAR_1->aframe[VAR_2]->sample_rate = VAR_3->sample_rate;

 VAR_3->strict_std_compliance = -2;

 VAR_5 = FUNC_3(VAR_3, VAR_1->acodec, ((void*)0));
 if (VAR_5 < 0) {
  FUNC_4(VAR_0, VAR_1,
     "Failed to open audio codec: %s",
     FUNC_0(VAR_5));
  return 0;
 }

 VAR_1->frame_size = VAR_3->frame_size ? VAR_3->frame_size : 1024;

 VAR_5 = FUNC_2(VAR_1->samples[VAR_2], ((void*)0), VAR_3->channels,
          VAR_1->frame_size, VAR_3->sample_fmt, 0);
 if (VAR_5 < 0) {
  FUNC_4(VAR_0, VAR_1,
     "Failed to create audio buffer: %s",
     FUNC_0(VAR_5));
  return 0;
 }

 return 1;
}
