
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct rk_pdm_dev {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;

 unsigned int VAR_5 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct rk_pdm_dev* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_6,
    unsigned int VAR_7)
{
 struct rk_pdm_dev *VAR_8 = FUNC_3(VAR_6);
 unsigned int VAR_9 = 0, VAR_10 = 0;

 VAR_9 = VAR_2;
 switch (VAR_7 & VAR_5) {
 case 128:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_6->dev);
 FUNC_2(VAR_8->regmap, VAR_4, VAR_9, VAR_10);
 FUNC_1(VAR_6->dev);

 return 0;
}
