
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_pdm {int dclk; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct axg_pdm*) ;
 int FUNC_1 (struct axg_pdm*,int ) ;
 int FUNC_2 (struct axg_pdm*) ;
 int FUNC_3 (struct axg_pdm*,unsigned int,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (int ,int ,unsigned int,unsigned int) ;
 struct axg_pdm* FUNC_10 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_3,
        struct snd_pcm_hw_params *VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct axg_pdm *VAR_6 = FUNC_10(VAR_5);
 unsigned int VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8 = FUNC_7(VAR_4);
 unsigned int VAR_9;
 int VAR_10;

 switch (FUNC_8(VAR_4)) {
 case 24:
  VAR_9 = VAR_2;
  break;
 case 32:
  VAR_9 = 0;
  break;
 default:
  FUNC_5(VAR_5->dev, "unsupported sample width\n");
  return -VAR_0;
 }

 FUNC_9(VAR_6->map, VAR_1, VAR_2, VAR_9);

 VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8);
 if (VAR_10) {
  FUNC_5(VAR_5->dev, "failed to set system clock\n");
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_6->dclk, VAR_8 * VAR_7);
 if (VAR_10) {
  FUNC_5(VAR_5->dev, "failed to set dclk\n");
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10) {
  FUNC_5(VAR_5->dev, "invalid clock setting\n");
  return VAR_10;
 }

 FUNC_1(VAR_6, FUNC_6(VAR_4));

 return 0;
}
