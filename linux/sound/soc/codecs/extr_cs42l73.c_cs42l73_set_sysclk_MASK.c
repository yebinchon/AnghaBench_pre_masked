
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int name; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs42l73_private {int mclksel; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_soc_dai*,unsigned int) ;
 int FUNC_1 (int ,char*,int ) ;
 struct cs42l73_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1,
         int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct cs42l73_private *VAR_6 = FUNC_2(VAR_5);

 switch (VAR_2) {
 case 129:
  break;
 case 128:
  break;
 default:
  return -VAR_0;
 }

 if ((FUNC_0(VAR_1, VAR_3)) < 0) {
  FUNC_1(VAR_5->dev, "Unable to set MCLK for dai %s\n",
   VAR_1->name);
  return -VAR_0;
 }

 VAR_6->mclksel = VAR_2;

 return 0;
}
