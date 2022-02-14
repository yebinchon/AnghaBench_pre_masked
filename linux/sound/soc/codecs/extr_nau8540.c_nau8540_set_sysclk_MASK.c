
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct nau8540 {int dev; int regmap; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct nau8540* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_7,
 int VAR_8, int VAR_9, unsigned int VAR_10, int VAR_11)
{
 struct nau8540 *VAR_12 = FUNC_3(VAR_7);

 switch (VAR_8) {
 case 130:
 case 128:
  FUNC_2(VAR_12->regmap, VAR_5,
   VAR_1, VAR_2);
  FUNC_2(VAR_12->regmap, VAR_6,
   VAR_4, 0);
  break;

 case 129:
  FUNC_2(VAR_12->regmap, VAR_6,
   VAR_4, VAR_4);
  FUNC_2(VAR_12->regmap, VAR_5,
   VAR_1, VAR_3);
  break;

 default:
  FUNC_1(VAR_12->dev, "Invalid clock id (%d)\n", VAR_8);
  return -VAR_0;
 }

 FUNC_0(VAR_12->dev, "Sysclk is %dHz and clock id is %d\n",
  VAR_10, VAR_8);

 return 0;
}
