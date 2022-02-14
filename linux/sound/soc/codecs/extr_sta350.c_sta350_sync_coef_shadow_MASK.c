
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta350_priv {int* coef_shadow; int regmap; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 struct sta350_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_6)
{
 struct sta350_priv *VAR_7 = FUNC_2(VAR_6);
 unsigned int VAR_8;
 int VAR_9;


 FUNC_0(VAR_7->regmap, VAR_4, &VAR_8);
 VAR_8 &= 0xf0;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_1(VAR_7->regmap, VAR_3, VAR_9);
  FUNC_1(VAR_7->regmap, VAR_0,
        (VAR_7->coef_shadow[VAR_9] >> 16) & 0xff);
  FUNC_1(VAR_7->regmap, VAR_1,
        (VAR_7->coef_shadow[VAR_9] >> 8) & 0xff);
  FUNC_1(VAR_7->regmap, VAR_2,
        (VAR_7->coef_shadow[VAR_9]) & 0xff);




  FUNC_1(VAR_7->regmap, VAR_4, VAR_8);
  FUNC_1(VAR_7->regmap, VAR_4, VAR_8 | 0x01);
 }
 return 0;
}
