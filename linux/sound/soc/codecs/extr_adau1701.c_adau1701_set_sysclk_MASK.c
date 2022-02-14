
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adau1701 {unsigned int sysclk; int regmap; } ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct adau1701* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_3, int VAR_4,
 int VAR_5, unsigned int VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 struct adau1701 *VAR_9 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  VAR_8 = 0x0;
  break;
 case 129:
  VAR_8 = VAR_1;
  break;
 default:
  return -VAR_2;
 }

 FUNC_0(VAR_9->regmap, VAR_0,
      VAR_1, VAR_8);
 VAR_9->sysclk = VAR_6;

 return 0;
}
