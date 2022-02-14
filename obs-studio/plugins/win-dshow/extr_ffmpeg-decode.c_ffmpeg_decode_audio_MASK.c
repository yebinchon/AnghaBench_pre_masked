
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct obs_source_audio {scalar_t__ format; int frames; int speakers; int samples_per_sec; int * data; } ;
struct ffmpeg_decode {TYPE_5__* frame; TYPE_2__* decoder; int packet_buffer; } ;
struct TYPE_10__ {int nb_samples; int format; int sample_rate; int * data; } ;
struct TYPE_9__ {scalar_t__ channels; } ;
struct TYPE_8__ {int size; int data; int member_0; } ;
typedef TYPE_1__ AVPacket ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ffmpeg_decode*,int *,size_t) ;

bool FUNC_8(struct ffmpeg_decode *VAR_4, uint8_t *VAR_5,
    size_t VAR_6, struct obs_source_audio *VAR_7,
    bool *VAR_8)
{
 AVPacket VAR_9 = {0};
 int VAR_10 = 0;
 int VAR_11 = 0;

 *VAR_8 = 0;

 FUNC_7(VAR_4, VAR_5, VAR_6);

 FUNC_2(&VAR_9);
 VAR_9.data = VAR_4->packet_buffer;
 VAR_9.size = (int)VAR_6;

 if (!VAR_4->frame) {
  VAR_4->frame = FUNC_1();
  if (!VAR_4->frame)
   return 0;
 }

 if (VAR_5 && VAR_6)
  VAR_11 = FUNC_4(VAR_4->decoder, &VAR_9);
 if (VAR_11 == 0)
  VAR_11 = FUNC_3(VAR_4->decoder, VAR_4->frame);

 VAR_10 = (VAR_11 == 0);

 if (VAR_11 == VAR_1 || VAR_11 == FUNC_0(VAR_2))
  VAR_11 = 0;

 if (VAR_11 < 0)
  return 0;
 else if (!VAR_10)
  return 1;

 for (size_t VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  VAR_7->data[VAR_12] = VAR_4->frame->data[VAR_12];

 VAR_7->samples_per_sec = VAR_4->frame->sample_rate;
 VAR_7->format = FUNC_5(VAR_4->frame->format);
 VAR_7->speakers =
  FUNC_6((uint8_t)VAR_4->decoder->channels);

 VAR_7->frames = VAR_4->frame->nb_samples;

 if (VAR_7->format == VAR_0)
  return 0;

 *VAR_8 = 1;
 return 1;
}
