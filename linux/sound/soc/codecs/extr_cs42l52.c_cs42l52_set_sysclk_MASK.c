
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs42l52_private {unsigned int sysclk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct cs42l52_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3,
   int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_3->component;
 struct cs42l52_private *VAR_8 = FUNC_1(VAR_7);

 if ((VAR_5 >= VAR_1) && (VAR_5 <= VAR_0)) {
  VAR_8->sysclk = VAR_5;
 } else {
  FUNC_0(VAR_7->dev, "Invalid freq parameter\n");
  return -VAR_2;
 }
 return 0;
}
