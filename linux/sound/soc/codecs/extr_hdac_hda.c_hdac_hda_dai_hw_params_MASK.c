
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_dai {size_t id; int dev; TYPE_3__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct hdac_hda_priv {TYPE_4__* pcm; } ;
struct TYPE_8__ {unsigned int* format_val; } ;
struct TYPE_6__ {unsigned int sig_bits; } ;
struct TYPE_5__ {unsigned int sig_bits; } ;
struct TYPE_7__ {TYPE_2__ capture; TYPE_1__ playback; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,unsigned int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_4 (int ,int ,int ,unsigned int,int ) ;
 struct hdac_hda_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2,
      struct snd_pcm_hw_params *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct hdac_hda_priv *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (VAR_2->stream == VAR_1)
  VAR_8 = VAR_4->driver->playback.sig_bits;
 else
  VAR_8 = VAR_4->driver->capture.sig_bits;

 VAR_6 = FUNC_5(VAR_5);
 VAR_7 = FUNC_4(FUNC_3(VAR_3),
       FUNC_1(VAR_3),
       FUNC_2(VAR_3),
       VAR_8,
       0);
 if (!VAR_7) {
  FUNC_0(VAR_4->dev,
   "invalid format_val, rate=%d, ch=%d, format=%d, maxbps=%d\n",
   FUNC_3(VAR_3), FUNC_1(VAR_3),
   FUNC_2(VAR_3), VAR_8);

  return -VAR_0;
 }

 VAR_6->pcm[VAR_4->id].format_val[VAR_2->stream] = VAR_7;
 return 0;
}
