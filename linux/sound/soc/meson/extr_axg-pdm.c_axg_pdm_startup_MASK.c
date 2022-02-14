
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_pdm {int map; int dclk; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct axg_pdm* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
      struct snd_soc_dai *VAR_1)
{
 struct axg_pdm *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->dclk);
 if (VAR_3) {
  FUNC_2(VAR_1->dev, "enabling dclk failed\n");
  return VAR_3;
 }


 FUNC_0(VAR_2->map, 1);

 return VAR_3;
}
