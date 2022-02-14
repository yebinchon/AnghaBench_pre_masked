
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniperif {int dummy; } ;
struct TYPE_2__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;


 struct sti_uniperiph_data* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct uniperif*) ;
 int FUNC_2 (struct uniperif*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
          int VAR_2, struct snd_soc_dai *VAR_3)
{
 struct sti_uniperiph_data *VAR_4 = FUNC_0(VAR_3);
 struct uniperif *VAR_5 = VAR_4->dai_data.uni;

 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_5);
 case 128:
  return FUNC_2(VAR_5);
 default:
  return -VAR_0;
 }
}
