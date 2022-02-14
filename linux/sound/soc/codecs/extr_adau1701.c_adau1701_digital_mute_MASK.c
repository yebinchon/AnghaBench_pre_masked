
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct adau1701 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct adau1701* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 unsigned int VAR_5 = VAR_1;
 struct adau1701 *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;

 if (VAR_3)
  VAR_7 = 0;
 else
  VAR_7 = VAR_5;

 FUNC_0(VAR_6->regmap, VAR_0, VAR_5, VAR_7);

 return 0;
}
