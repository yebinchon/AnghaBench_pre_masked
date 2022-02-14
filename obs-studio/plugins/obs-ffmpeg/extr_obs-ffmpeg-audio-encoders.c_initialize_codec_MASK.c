
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct enc_encoder {int frame_size; int frame_size_bytes; TYPE_1__* context; int samples; scalar_t__ audio_size; TYPE_2__* aframe; int codec; } ;
struct TYPE_4__ {int sample_rate; int channel_layout; int channels; int format; } ;
struct TYPE_3__ {int frame_size; int sample_fmt; int channels; int sample_rate; int channel_layout; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static bool FUNC_5(struct enc_encoder *VAR_0)
{
 int VAR_1;

 VAR_0->aframe = FUNC_1();
 if (!VAR_0->aframe) {
  FUNC_4("Failed to allocate audio frame");
  return 0;
 }

 VAR_1 = FUNC_3(VAR_0->context, VAR_0->codec, ((void*)0));
 if (VAR_1 < 0) {
  FUNC_4("Failed to open AAC codec: %s", FUNC_0(VAR_1));
  return 0;
 }
 VAR_0->aframe->format = VAR_0->context->sample_fmt;
 VAR_0->aframe->channels = VAR_0->context->channels;
 VAR_0->aframe->channel_layout = VAR_0->context->channel_layout;
 VAR_0->aframe->sample_rate = VAR_0->context->sample_rate;

 VAR_0->frame_size = VAR_0->context->frame_size;
 if (!VAR_0->frame_size)
  VAR_0->frame_size = 1024;

 VAR_0->frame_size_bytes = VAR_0->frame_size * (int)VAR_0->audio_size;

 VAR_1 = FUNC_2(VAR_0->samples, ((void*)0), VAR_0->context->channels,
          VAR_0->frame_size, VAR_0->context->sample_fmt, 0);
 if (VAR_1 < 0) {
  FUNC_4("Failed to create audio buffer: %s", FUNC_0(VAR_1));
  return 0;
 }

 return 1;
}
