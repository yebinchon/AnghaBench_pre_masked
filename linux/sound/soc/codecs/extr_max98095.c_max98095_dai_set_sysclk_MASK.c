
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98095_priv {unsigned int sysclk; int mclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*,int,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 struct max98095_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_2,
       int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct max98095_priv *VAR_7 = FUNC_5(VAR_6);


 if (VAR_4 == VAR_7->sysclk)
  return 0;

 if (!FUNC_0(VAR_7->mclk)) {
  VAR_4 = FUNC_1(VAR_7->mclk, VAR_4);
  FUNC_2(VAR_7->mclk, VAR_4);
 }






 if ((VAR_4 >= 10000000) && (VAR_4 < 20000000)) {
  FUNC_6(VAR_6, VAR_1, 0x10);
 } else if ((VAR_4 >= 20000000) && (VAR_4 < 40000000)) {
  FUNC_6(VAR_6, VAR_1, 0x20);
 } else if ((VAR_4 >= 40000000) && (VAR_4 < 60000000)) {
  FUNC_6(VAR_6, VAR_1, 0x30);
 } else {
  FUNC_4(VAR_6->dev, "Invalid master clock frequency\n");
  return -VAR_0;
 }

 FUNC_3(VAR_2->dev, "Clock source is %d at %uHz\n", VAR_3, VAR_4);

 VAR_7->sysclk = VAR_4;
 return 0;
}
