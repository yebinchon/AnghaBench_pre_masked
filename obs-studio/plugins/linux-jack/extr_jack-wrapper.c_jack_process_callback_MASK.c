
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct obs_source_audio {scalar_t__ timestamp; int frames; int ** data; int format; int samples_per_sec; int speakers; } ;
struct jack_data {unsigned int channels; int jack_mutex; int source; int jack_client; int * jack_ports; } ;
typedef int jack_nframes_t ;
typedef int jack_default_audio_sample_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct obs_source_audio*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(jack_nframes_t VAR_1, void *VAR_2)
{
 struct jack_data *VAR_3 = (struct jack_data *)VAR_2;
 if (VAR_3 == 0)
  return 0;

 FUNC_6(&VAR_3->jack_mutex);

 struct obs_source_audio VAR_4;
 VAR_4.speakers = FUNC_0(VAR_3->channels);
 VAR_4.samples_per_sec = FUNC_2(VAR_3->jack_client);

 VAR_4.format = VAR_0;

 for (unsigned int VAR_5 = 0; VAR_5 < VAR_3->channels; ++VAR_5) {
  jack_default_audio_sample_t *VAR_6 =
   (jack_default_audio_sample_t *)FUNC_3(
    VAR_3->jack_ports[VAR_5], VAR_1);
  VAR_4.data[VAR_5] = (uint8_t *)VAR_6;
 }

 VAR_4.frames = VAR_1;
 VAR_4.timestamp = FUNC_5() -
   FUNC_1(VAR_3->jack_client, VAR_1);

 FUNC_4(VAR_3->source, &VAR_4);
 FUNC_7(&VAR_3->jack_mutex);
 return 0;
}
