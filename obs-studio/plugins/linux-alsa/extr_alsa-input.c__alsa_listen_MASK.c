
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_audio {int samples_per_sec; int frames; scalar_t__ timestamp; int speakers; int format; int * data; } ;
struct alsa_data {int rate; scalar_t__ first_ts; int source; int handle; int listen; int period_size; int buffer; int channels; int format; } ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct obs_source_audio*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int ,int) ;

void *FUNC_11(void *VAR_3)
{
 struct alsa_data *VAR_4 = VAR_3;
 struct obs_source_audio VAR_5;

 FUNC_2(VAR_0, "Capture thread started.");

 VAR_5.data[0] = VAR_4->buffer;
 VAR_5.format = FUNC_1(VAR_4->format);
 VAR_5.speakers = FUNC_0(VAR_4->channels);
 VAR_5.samples_per_sec = VAR_4->rate;

 FUNC_5(&VAR_4->listen, 1);

 do {
  snd_pcm_sframes_t VAR_6 = FUNC_8(
   VAR_4->handle, VAR_4->buffer, VAR_4->period_size);

  if (!FUNC_4(&VAR_4->listen))
   break;

  if (VAR_6 <= 0) {
   VAR_6 = FUNC_9(VAR_4->handle, VAR_6, 0);
   if (VAR_6 <= 0) {
    FUNC_10(VAR_4->handle, 100);
    continue;
   }
  }

  VAR_5.frames = VAR_6;
  VAR_5.timestamp = FUNC_6() -
    ((VAR_6 * VAR_1) / VAR_4->rate);

  if (!VAR_4->first_ts)
   VAR_4->first_ts = VAR_5.timestamp + VAR_2;

  if (VAR_5.timestamp > VAR_4->first_ts)
   FUNC_3(VAR_4->source, &VAR_5);
 } while (FUNC_4(&VAR_4->listen));

 FUNC_2(VAR_0, "Capture thread is about to exit.");

 FUNC_7(((void*)0));
 return ((void*)0);
}
