
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_priv {scalar_t__ configured; struct snd_pcm_substream* master_substream; struct snd_pcm_substream* slave_substream; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; TYPE_1__* runtime; } ;
struct TYPE_2__ {int channels; } ;


 struct twl4030_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 struct twl4030_priv *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->master_substream == VAR_0)
  VAR_3->master_substream = VAR_3->slave_substream;

 VAR_3->slave_substream = ((void*)0);



 if (!VAR_3->master_substream)
  VAR_3->configured = 0;
  else if (!VAR_3->master_substream->runtime->channels)
  VAR_3->configured = 0;


 if (VAR_0->runtime->channels == 4)
  FUNC_1(VAR_2, VAR_0->stream, 0);
}
