
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_sgio2audio_chan {int idx; struct snd_pcm_substream* substream; } ;
struct snd_sgio2audio {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {TYPE_3__* chan; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;
struct TYPE_8__ {TYPE_2__ perif; } ;
struct TYPE_7__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_sgio2audio* FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (struct snd_sgio2audio*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct snd_sgio2audio_chan *VAR_5 = VAR_4;
 struct snd_pcm_substream *VAR_6;
 struct snd_sgio2audio *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = VAR_5->substream;
 VAR_7 = FUNC_2(VAR_6);
 VAR_9 = VAR_5->idx;


 VAR_8 = VAR_0 -
  FUNC_0(&VAR_2->perif.audio.chan[VAR_9].depth) - 32;
 if (FUNC_3(VAR_7, VAR_9, VAR_8))
  FUNC_1(VAR_6);

 return VAR_1;
}
