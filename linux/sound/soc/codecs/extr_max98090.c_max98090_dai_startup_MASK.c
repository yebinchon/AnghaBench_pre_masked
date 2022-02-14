
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct max98090_priv {unsigned int dai_fmt; } ;
struct TYPE_3__ {int formats; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int,int) ;
 struct max98090_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct max98090_priv *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7 = VAR_6->dai_fmt;


 if ((VAR_7 & VAR_1) != VAR_2) {
  VAR_3->runtime->hw.formats = VAR_0;
  FUNC_0(VAR_3->runtime, 0, 16, 16);
 }
 return 0;
}
