
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_sgio2audio_chan {int idx; } ;
struct snd_sgio2audio {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct TYPE_8__ {TYPE_2__* chan; } ;
struct TYPE_9__ {TYPE_3__ audio; } ;
struct TYPE_10__ {TYPE_4__ perif; } ;
struct TYPE_7__ {int control; } ;
struct TYPE_6__ {struct snd_sgio2audio_chan* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* VAR_5 ;
 struct snd_sgio2audio* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_sgio2audio*,int,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct snd_sgio2audio *VAR_7 = FUNC_0(VAR_6);
 struct snd_sgio2audio_chan *VAR_8 = VAR_6->runtime->private_data;
 int VAR_9 = VAR_8->idx;


 FUNC_3(VAR_0, &VAR_5->perif.audio.chan[VAR_9].control);
 FUNC_2(10);
 FUNC_3(0, &VAR_5->perif.audio.chan[VAR_9].control);

 if (VAR_6->stream == VAR_4) {

  FUNC_1(VAR_7, VAR_9, VAR_3 - 32);
 }

 FUNC_3(VAR_1 | VAR_2,
        &VAR_5->perif.audio.chan[VAR_9].control);
 return 0;
}
