
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct pcm179x_private {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct pcm179x_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 struct pcm179x_private *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->regmap, VAR_1,
     VAR_0, !!VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
