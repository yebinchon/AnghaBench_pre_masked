
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_data {int channels; int period_size; int sample_size; scalar_t__ buffer; int format; int handle; int device; int rate; } ;
typedef int snd_pcm_hw_params_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int*,int*) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ,int *,int*) ;
 int FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (int ,int *,int *,int ) ;
 int FUNC_13 (int) ;

bool FUNC_14(struct alsa_data *VAR_4)
{
 snd_pcm_hw_params_t *VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_5(&VAR_5);

 VAR_6 = FUNC_6(VAR_4->handle, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_0, "snd_pcm_hw_params_any failed: %s",
       FUNC_13(VAR_6));
  return 0;
 }

 VAR_6 = FUNC_9(VAR_4->handle, VAR_5,
        VAR_2);
 if (VAR_6 < 0) {
  FUNC_1(VAR_0, "snd_pcm_hw_params_set_access failed: %s",
       FUNC_13(VAR_6));
  return 0;
 }

 VAR_4->format = VAR_3;
 VAR_6 = FUNC_11(VAR_4->handle, VAR_5,
        VAR_4->format);
 if (VAR_6 < 0) {
  FUNC_1(VAR_0, "snd_pcm_hw_params_set_format failed: %s",
       FUNC_13(VAR_6));
  return 0;
 }

 VAR_6 = FUNC_12(VAR_4->handle, VAR_5,
           &VAR_4->rate, 0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_0, "snd_pcm_hw_params_set_rate_near failed: %s",
       FUNC_13(VAR_6));
  return 0;
 }
 FUNC_1(VAR_1, "PCM '%s' rate set to %d", VAR_4->device, VAR_4->rate);

 VAR_6 = FUNC_7(VAR_5, &VAR_4->channels);
 if (VAR_6 < 0)
  VAR_4->channels = 2;

 VAR_6 = FUNC_10(VAR_4->handle, VAR_5,
        &VAR_4->channels);
 if (VAR_6 < 0) {
  FUNC_1(VAR_0,
       "snd_pcm_hw_params_set_channels_near failed: %s",
       FUNC_13(VAR_6));
  return 0;
 }
 FUNC_1(VAR_1, "PCM '%s' channels set to %d", VAR_4->device,
      VAR_4->channels);

 VAR_6 = FUNC_4(VAR_4->handle, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_0, "snd_pcm_hw_params failed: %s",
       FUNC_13(VAR_6));
  return 0;
 }

 VAR_6 = FUNC_8(VAR_5, &VAR_4->period_size,
      &VAR_7);
 if (VAR_6 < 0) {
  FUNC_1(VAR_0, "snd_pcm_hw_params_get_period_size failed: %s",
       FUNC_13(VAR_6));
  return 0;
 }

 VAR_4->sample_size =
  (VAR_4->channels * FUNC_3(VAR_4->format)) /
  8;

 if (VAR_4->buffer)
  FUNC_0(VAR_4->buffer);
 VAR_4->buffer = FUNC_2(VAR_4->period_size * VAR_4->sample_size);

 return 1;
}
