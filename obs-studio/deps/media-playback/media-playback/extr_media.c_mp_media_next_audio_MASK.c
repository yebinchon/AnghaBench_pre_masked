
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct obs_source_audio {int samples_per_sec; scalar_t__ format; scalar_t__ timestamp; int frames; int speakers; int * data; int member_0; } ;
struct mp_decode {int frame_ready; scalar_t__ frame_pts; TYPE_2__* frame; } ;
struct TYPE_5__ {int speed; int opaque; int (* a_cb ) (int ,struct obs_source_audio*) ;scalar_t__ play_sys_ts; scalar_t__ start_ts; scalar_t__ base_ts; struct mp_decode a; } ;
typedef TYPE_1__ mp_media_t ;
struct TYPE_6__ {int sample_rate; int nb_samples; int format; int channels; int * data; } ;
typedef TYPE_2__ AVFrame ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct mp_decode*) ;
 int FUNC_3 (int ,struct obs_source_audio*) ;

__attribute__((used)) static void FUNC_4(mp_media_t *VAR_3)
{
 struct mp_decode *VAR_4 = &VAR_3->a;
 struct obs_source_audio VAR_5 = {0};
 AVFrame *VAR_6 = VAR_4->frame;

 if (!FUNC_2(VAR_3, VAR_4))
  return;

 VAR_4->frame_ready = 0;
 if (!VAR_3->a_cb)
  return;

 for (size_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_5.data[VAR_7] = VAR_6->data[VAR_7];

 VAR_5.samples_per_sec = VAR_6->sample_rate * VAR_3->speed / 100;
 VAR_5.speakers = FUNC_1(VAR_6->channels);
 VAR_5.format = FUNC_0(VAR_6->format);
 VAR_5.frames = VAR_6->nb_samples;
 VAR_5.timestamp = VAR_3->base_ts + VAR_4->frame_pts - VAR_3->start_ts +
     VAR_3->play_sys_ts - VAR_2;

 if (VAR_5.format == VAR_0)
  return;

 VAR_3->a_cb(VAR_3->opaque, &VAR_5);
}
