
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct dmic {int modeswitch_delay; } ;



 int FUNC_0 (int ) ;
 struct dmic* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
          int VAR_1, struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct dmic *VAR_4 = FUNC_1(VAR_3);

 switch (VAR_1) {
 case 128:
  if (VAR_4->modeswitch_delay)
   FUNC_0(VAR_4->modeswitch_delay);

  break;
 }

 return 0;
}
