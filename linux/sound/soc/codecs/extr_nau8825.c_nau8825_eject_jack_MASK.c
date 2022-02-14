
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct regmap {int dummy; } ;
struct nau8825 {struct regmap* regmap; struct snd_soc_dapm_context* dapm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct nau8825*,int ,int ) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct nau8825*) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_6(struct nau8825 *VAR_17)
{
 struct snd_soc_dapm_context *VAR_18 = VAR_17->dapm;
 struct regmap *VAR_19 = VAR_17->regmap;


 FUNC_2(VAR_17);

 FUNC_4(VAR_18, "SAR");
 FUNC_4(VAR_18, "MICBIAS");

 FUNC_3(VAR_19, VAR_16,
  VAR_10 | VAR_9, 0);

 FUNC_3(VAR_19, VAR_12, 0xf, 0xf);

 FUNC_5(VAR_18);


 FUNC_1(VAR_19);




 FUNC_3(VAR_19, VAR_13,
  VAR_2 | VAR_5,
  VAR_2);
 FUNC_3(VAR_19, VAR_14,
  VAR_7 | VAR_3 |
  VAR_4 | VAR_6,
  VAR_7 | VAR_3 |
  VAR_4);
 FUNC_3(VAR_19, VAR_15,
  VAR_8, VAR_8);


 FUNC_3(VAR_19, VAR_11,
  VAR_1, 0);


 FUNC_0(VAR_17, VAR_0, 0);
}
