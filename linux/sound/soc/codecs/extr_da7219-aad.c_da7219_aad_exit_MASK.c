
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {int regmap; struct da7219_aad_priv* aad; } ;
struct da7219_aad_priv {int hptest_work; int btn_det_work; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct da7219_aad_priv*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ,int *,int) ;
 struct da7219_priv* FUNC_4 (struct snd_soc_component*) ;

void FUNC_5(struct snd_soc_component *VAR_3)
{
 struct da7219_priv *VAR_4 = FUNC_4(VAR_3);
 struct da7219_aad_priv *VAR_5 = VAR_4->aad;
 u8 VAR_6[VAR_0];


 FUNC_2(VAR_6, VAR_2, VAR_0);
 FUNC_3(VAR_4->regmap, VAR_1,
     VAR_6, VAR_0);

 FUNC_1(VAR_5->irq, VAR_5);

 FUNC_0(&VAR_5->btn_det_work);
 FUNC_0(&VAR_5->hptest_work);
}
