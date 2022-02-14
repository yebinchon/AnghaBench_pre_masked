
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5086_private {unsigned int format; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct tas5086_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3,
          unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;
 struct tas5086_private *VAR_6 = FUNC_1(VAR_5);


 if ((VAR_4 & VAR_2) != VAR_1) {
  FUNC_0(VAR_5->dev, "Invalid clocking mode\n");
  return -VAR_0;
 }


 VAR_6->format = VAR_4;

 return 0;
}
