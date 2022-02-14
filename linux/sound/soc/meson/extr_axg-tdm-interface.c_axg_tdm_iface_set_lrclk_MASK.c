
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_tdm_iface {int fmt; int lrclk; } ;


 int VAR_0 ;


 int VAR_1 ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct axg_tdm_iface* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_2,
       struct snd_pcm_hw_params *VAR_3)
{
 struct axg_tdm_iface *VAR_4 = FUNC_6(VAR_2);
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_4->lrclk, FUNC_5(VAR_3));
 if (VAR_6) {
  FUNC_4(VAR_2->dev, "setting sample clock failed: %d\n", VAR_6);
  return VAR_6;
 }

 switch (VAR_4->fmt & VAR_1) {
 case 130:
 case 129:
 case 128:

  VAR_5 = 1;
  break;

 case 132:
 case 131:






  VAR_5 = 0;
  break;

 default:
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_4->lrclk, VAR_5, 2);
 if (VAR_6) {
  FUNC_4(VAR_2->dev,
   "setting sample clock duty cycle failed: %d\n", VAR_6);
  return VAR_6;
 }


 VAR_6 = FUNC_2(VAR_4->lrclk,
       FUNC_0(VAR_4->fmt) ? 180 : 0);
 if (VAR_6) {
  FUNC_4(VAR_2->dev,
   "setting sample clock phase failed: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
