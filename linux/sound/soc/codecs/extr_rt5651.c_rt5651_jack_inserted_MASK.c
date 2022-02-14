
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5651_priv {int jd_src; scalar_t__ jd_active_high; scalar_t__ gpiod_hp_det; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 struct rt5651_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;

__attribute__((used)) static bool FUNC_4(struct snd_soc_component *VAR_1)
{
 struct rt5651_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (VAR_2->gpiod_hp_det) {
  VAR_3 = FUNC_1(VAR_2->gpiod_hp_det);
  FUNC_0(VAR_1->dev, "jack-detect gpio %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 FUNC_0(VAR_1->dev, "irq status %#04x\n", VAR_3);

 switch (VAR_2->jd_src) {
 case 130:
  VAR_3 &= 0x1000;
  break;
 case 129:
  VAR_3 &= 0x2000;
  break;
 case 128:
  VAR_3 &= 0x4000;
  break;
 default:
  break;
 }

 if (VAR_2->jd_active_high)
  return VAR_3 != 0;
 else
  return VAR_3 == 0;
}
