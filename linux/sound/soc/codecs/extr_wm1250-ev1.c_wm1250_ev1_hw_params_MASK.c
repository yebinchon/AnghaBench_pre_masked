
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm1250_priv {TYPE_1__* gpios; } ;
struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int gpio; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct wm1250_priv* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct wm1250_priv *VAR_6 = FUNC_2(VAR_5->component);

 switch (FUNC_1(VAR_4)) {
 case 8000:
  FUNC_0(VAR_6->gpios[VAR_1].gpio,
          1);
  FUNC_0(VAR_6->gpios[VAR_2].gpio,
          1);
  break;
 case 16000:
  FUNC_0(VAR_6->gpios[VAR_1].gpio,
          0);
  FUNC_0(VAR_6->gpios[VAR_2].gpio,
          1);
  break;
 case 32000:
  FUNC_0(VAR_6->gpios[VAR_1].gpio,
          1);
  FUNC_0(VAR_6->gpios[VAR_2].gpio,
          0);
  break;
 case 64000:
  FUNC_0(VAR_6->gpios[VAR_1].gpio,
          0);
  FUNC_0(VAR_6->gpios[VAR_2].gpio,
          0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
