
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct omap_dmic {int dummy; } ;




 int FUNC_0 (struct omap_dmic*) ;
 int FUNC_1 (struct omap_dmic*) ;
 struct omap_dmic* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
      int VAR_1, struct snd_soc_dai *VAR_2)
{
 struct omap_dmic *VAR_3 = FUNC_2(VAR_2);

 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_3);
  break;
 case 128:
  FUNC_1(VAR_3);
  break;
 default:
  break;
 }

 return 0;
}
