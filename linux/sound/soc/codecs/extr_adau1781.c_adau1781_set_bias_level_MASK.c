
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adau {int regmap; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,int ,int,int) ;
 struct adau* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_3,
  enum snd_soc_bias_level VAR_4)
{
 struct adau *VAR_5 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  FUNC_0(VAR_5->regmap, VAR_1,
   VAR_2,
   VAR_2);


  FUNC_0(VAR_5->regmap, VAR_0, 0x8, 0x8);
  break;
 case 131:
  FUNC_0(VAR_5->regmap, VAR_0, 0xc, 0x0);
  FUNC_0(VAR_5->regmap, VAR_1,
   VAR_2, 0);
  break;
 }

 return 0;
}
