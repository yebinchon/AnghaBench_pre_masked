
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {scalar_t__ bias_level; } ;
struct regmap {int dummy; } ;
struct nau8824 {struct regmap* regmap; struct snd_soc_dapm_context* dapm; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct nau8824*,int ,int ) ;
 int FUNC_1 (struct nau8824*,char*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_5(struct nau8824 *VAR_12)
{
 struct snd_soc_dapm_context *VAR_13 = VAR_12->dapm;
 struct regmap *VAR_14 = VAR_12->regmap;


 FUNC_2(VAR_14);

 FUNC_1(VAR_12, "SAR");
 FUNC_1(VAR_12, "MICBIAS");
 FUNC_4(VAR_13);




 FUNC_3(VAR_14, VAR_9,
  VAR_5 | VAR_6 |
  VAR_1 | VAR_3,
  VAR_5 | VAR_6 |
  VAR_1);
 FUNC_3(VAR_14, VAR_10,
  VAR_4 | VAR_2,
  VAR_4);
 FUNC_3(VAR_14, VAR_8,
  VAR_7, VAR_7);


 if (VAR_13->bias_level < VAR_11)
  FUNC_0(VAR_12, VAR_0, 0);
}
