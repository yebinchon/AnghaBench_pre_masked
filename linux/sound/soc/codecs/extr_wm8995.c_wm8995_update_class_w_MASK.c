
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_7)
{
 int VAR_8 = 1;
 int VAR_9 = 0;
 int VAR_10, VAR_11;


 VAR_10 = FUNC_1(VAR_7, VAR_5);
 switch (VAR_10) {
 case 128:
  FUNC_0(VAR_7->dev, "Class W source AIF2DAC\n");
  VAR_9 = 2 << VAR_4;
  break;
 case 129:
  FUNC_0(VAR_7->dev, "Class W source AIF1DAC2\n");
  VAR_9 = 1 << VAR_4;
  break;
 case 130:
  FUNC_0(VAR_7->dev, "Class W source AIF1DAC1\n");
  VAR_9 = 0 << VAR_4;
  break;
 default:
  FUNC_0(VAR_7->dev, "DAC mixer setting: %x\n", VAR_10);
  VAR_8 = 0;
  break;
 }

 VAR_11 = FUNC_1(VAR_7, VAR_6);
 if (VAR_11 != VAR_10) {
  FUNC_0(VAR_7->dev, "Left and right DAC mixers different\n");
  VAR_8 = 0;
 }

 if (VAR_8) {
  FUNC_0(VAR_7->dev, "Class W enabled\n");
  FUNC_2(VAR_7, VAR_0,
        VAR_2 |
        VAR_3,
        VAR_9 | VAR_1);
 } else {
  FUNC_0(VAR_7->dev, "Class W disabled\n");
  FUNC_2(VAR_7, VAR_0,
        VAR_2, 0);
 }
}
