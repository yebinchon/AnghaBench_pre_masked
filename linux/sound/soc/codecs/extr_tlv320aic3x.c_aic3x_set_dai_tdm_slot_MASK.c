
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct aic3x_priv {unsigned int tdm_delay; int slot_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,...) ;
 struct aic3x_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5,
      int VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_3->component;
 struct aic3x_priv *VAR_9 = FUNC_3(VAR_8);
 unsigned int VAR_10;

 if (VAR_4 != VAR_5) {
  FUNC_2(VAR_8->dev, "tx and rx masks must be symmetric\n");
  return -VAR_2;
 }

 if (FUNC_5(!VAR_4)) {
  FUNC_2(VAR_8->dev, "tx and rx masks need to be non 0\n");
  return -VAR_2;
 }


 VAR_10 = FUNC_0(VAR_4);
 if ((VAR_10 + 1) != FUNC_1(VAR_4)) {
  FUNC_2(VAR_8->dev, "Invalid mask, slots must be adjacent\n");
  return -VAR_2;
 }

 switch (VAR_7) {
 case 16:
 case 20:
 case 24:
 case 32:
  break;
 default:
  FUNC_2(VAR_8->dev, "Unsupported slot width %d\n", VAR_7);
  return -VAR_2;
 }


 VAR_9->tdm_delay = VAR_10;
 VAR_9->slot_width = VAR_7;


 FUNC_4(VAR_8, VAR_0,
       VAR_1, VAR_1);

 return 0;
}
