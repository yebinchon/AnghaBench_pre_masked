
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {scalar_t__ sync_endpoint; int cur_audiofmt; int cur_rate; int buffer_periods; int period_frames; int period_bytes; int channels; int pcm_format; int data_endpoint; } ;


 int FUNC_0 (struct snd_usb_substream*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (struct snd_usb_substream*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_usb_substream *VAR_0)
{
 int VAR_1;


 FUNC_2(VAR_0, 1);
 VAR_1 = FUNC_1(VAR_0->data_endpoint,
       VAR_0->pcm_format,
       VAR_0->channels,
       VAR_0->period_bytes,
       VAR_0->period_frames,
       VAR_0->buffer_periods,
       VAR_0->cur_rate,
       VAR_0->cur_audiofmt,
       VAR_0->sync_endpoint);
 if (VAR_1 < 0)
  return VAR_1;

 if (VAR_0->sync_endpoint)
  VAR_1 = FUNC_0(VAR_0);

 return VAR_1;
}
