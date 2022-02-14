
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_tdm_iface {unsigned long slots; unsigned long slot_width; unsigned long mclk_rate; int fmt; int sclk; int mclk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,char*,int,...) ;
 unsigned long FUNC_4 (struct snd_pcm_hw_params*) ;
 struct axg_tdm_iface* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_1,
      struct snd_pcm_hw_params *VAR_2)
{
 struct axg_tdm_iface *VAR_3 = FUNC_5(VAR_1);
 unsigned long VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->slots * VAR_3->slot_width * FUNC_4(VAR_2);

 if (!VAR_3->mclk_rate) {

  FUNC_2(VAR_3->mclk, 4 * VAR_4);
 } else {

  if (VAR_3->mclk_rate % VAR_4) {
   FUNC_3(VAR_1->dev,
    "can't derive sclk %lu from mclk %lu\n",
    VAR_4, VAR_3->mclk_rate);
   return -VAR_0;
  }
 }

 VAR_5 = FUNC_2(VAR_3->sclk, VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_1->dev, "setting bit clock failed: %d\n", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_1(VAR_3->sclk,
       FUNC_0(VAR_3->fmt) ? 0 : 180);
 if (VAR_5) {
  FUNC_3(VAR_1->dev, "setting bit clock phase failed: %d\n", VAR_5);
  return VAR_5;
 }

 return VAR_5;
}
