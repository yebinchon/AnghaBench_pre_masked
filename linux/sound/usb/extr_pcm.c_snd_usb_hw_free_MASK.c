
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_substream {TYPE_1__* stream; int data_endpoint; int sync_endpoint; scalar_t__ period_bytes; scalar_t__ cur_rate; int * cur_audiofmt; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_4__ {struct snd_usb_substream* private_data; } ;
struct TYPE_3__ {int chip; } ;


 int FUNC_0 (struct snd_usb_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (struct snd_usb_substream*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_usb_substream *VAR_2 = VAR_1->runtime->private_data;

 FUNC_0(VAR_2);
 VAR_2->cur_audiofmt = ((void*)0);
 VAR_2->cur_rate = 0;
 VAR_2->period_bytes = 0;
 if (!FUNC_4(VAR_2->stream->chip)) {
  FUNC_6(VAR_2, 1);
  FUNC_3(VAR_2->sync_endpoint);
  FUNC_3(VAR_2->data_endpoint);
  FUNC_5(VAR_2->stream->chip);
 }

 if (VAR_0)
  return FUNC_2(VAR_1);
 else
  return FUNC_1(VAR_1);
}
