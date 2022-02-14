
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm4567 {int regmap; } ;
struct snd_soc_dai {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int,unsigned int) ;
 struct ssm4567* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_9, unsigned int VAR_10,
 unsigned int VAR_11, int VAR_12, int VAR_13)
{
 struct ssm4567 *VAR_14 = FUNC_4(VAR_9);
 unsigned int VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_10 == 0)
  return -VAR_0;

 if (VAR_11 && VAR_11 != VAR_10)
  return -VAR_0;

 VAR_16 = FUNC_2(VAR_10);
 if (VAR_10 != FUNC_0(VAR_16))
  return -VAR_0;

 switch (VAR_13) {
 case 32:
  VAR_15 = VAR_3;
  break;
 case 48:
  VAR_15 = VAR_4;
  break;
 case 64:
  VAR_15 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_17 = FUNC_3(VAR_14->regmap, VAR_2,
  VAR_7 | VAR_8,
  FUNC_1(VAR_16));
 if (VAR_17)
  return VAR_17;

 return FUNC_3(VAR_14->regmap, VAR_1,
  VAR_6, VAR_15);
}
