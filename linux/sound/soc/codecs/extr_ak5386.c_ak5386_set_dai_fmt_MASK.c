
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_4,
         unsigned int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_4->component;

 VAR_5 &= VAR_1;
 if (VAR_5 != VAR_3 &&
     VAR_5 != VAR_2) {
  FUNC_0(VAR_6->dev, "Invalid DAI format\n");
  return -VAR_0;
 }

 return 0;
}
