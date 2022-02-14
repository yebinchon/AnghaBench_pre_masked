
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct snd_soc_component *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7, VAR_8;


 VAR_7 = FUNC_1(VAR_5, VAR_3);
 switch (VAR_7) {
 case 128:
  FUNC_0(VAR_5->dev, "Class W source AIF2DAC\n");
  VAR_6 = 2 << VAR_2;
  break;
 case 129:
  FUNC_0(VAR_5->dev, "Class W source AIF1DAC2\n");
  VAR_6 = 1 << VAR_2;
  break;
 case 130:
  FUNC_0(VAR_5->dev, "Class W source AIF1DAC1\n");
  VAR_6 = 0 << VAR_2;
  break;
 default:
  FUNC_0(VAR_5->dev, "DAC mixer setting: %x\n", VAR_7);
  return 0;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_4);
 if (VAR_8 != VAR_7) {
  FUNC_0(VAR_5->dev, "Left and right DAC mixers different\n");
  return 0;
 }


 FUNC_2(VAR_5, VAR_0,
       VAR_1, VAR_6);

 return 1;
}
