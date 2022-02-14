
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_component {int dev; } ;
struct da7219_priv {int regmap; TYPE_1__* pdata; struct da7219_aad_priv* aad; } ;
struct da7219_aad_priv {int irq; int hptest_work; int btn_det_work; struct snd_soc_component* component; } ;
struct TYPE_2__ {scalar_t__ aad_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,char*,int) ;
 struct da7219_aad_priv* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int ,int **,int) ;
 int FUNC_7 (int ,int *,int ,int,char*,struct da7219_aad_priv*) ;
 struct da7219_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,int ,int ) ;

int FUNC_10(struct snd_soc_component *VAR_11)
{
 struct da7219_priv *VAR_12 = FUNC_8(VAR_11);
 struct da7219_aad_priv *VAR_13;
 u8 VAR_14[VAR_0];
 int VAR_15;

 VAR_13 = FUNC_4(VAR_11->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_12->aad = VAR_13;
 VAR_13->component = VAR_11;


 if (VAR_12->pdata && !VAR_12->pdata->aad_pdata)
  VAR_12->pdata->aad_pdata = FUNC_1(VAR_11);

 FUNC_2(VAR_11);


 FUNC_9(VAR_11, VAR_1,
       VAR_3, 0);

 FUNC_0(&VAR_13->btn_det_work, VAR_8);
 FUNC_0(&VAR_13->hptest_work, VAR_9);

 VAR_15 = FUNC_7(VAR_13->irq, ((void*)0),
       VAR_10,
       VAR_7 | VAR_6,
       "da7219-aad", VAR_13);
 if (VAR_15) {
  FUNC_3(VAR_11->dev, "Failed to request IRQ: %d\n", VAR_15);
  return VAR_15;
 }


 FUNC_5(VAR_14, 0, VAR_0);
 FUNC_6(VAR_12->regmap, VAR_2,
     &VAR_14, VAR_0);

 return 0;
}
