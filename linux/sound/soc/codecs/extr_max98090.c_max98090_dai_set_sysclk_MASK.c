
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98090_priv {unsigned int sysclk; unsigned int pclk; int mclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 struct max98090_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_5,
       int VAR_6, unsigned int VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_5->component;
 struct max98090_priv *VAR_10 = FUNC_4(VAR_9);


 if (VAR_7 == VAR_10->sysclk)
  return 0;

 if (!FUNC_0(VAR_10->mclk)) {
  VAR_7 = FUNC_1(VAR_10->mclk, VAR_7);
  FUNC_2(VAR_10->mclk, VAR_7);
 }






 if ((VAR_7 >= 10000000) && (VAR_7 <= 20000000)) {
  FUNC_5(VAR_9, VAR_4,
   VAR_1);
  VAR_10->pclk = VAR_7;
 } else if ((VAR_7 > 20000000) && (VAR_7 <= 40000000)) {
  FUNC_5(VAR_9, VAR_4,
   VAR_2);
  VAR_10->pclk = VAR_7 >> 1;
 } else if ((VAR_7 > 40000000) && (VAR_7 <= 60000000)) {
  FUNC_5(VAR_9, VAR_4,
   VAR_3);
  VAR_10->pclk = VAR_7 >> 2;
 } else {
  FUNC_3(VAR_9->dev, "Invalid master clock frequency\n");
  return -VAR_0;
 }

 VAR_10->sysclk = VAR_7;

 return 0;
}
