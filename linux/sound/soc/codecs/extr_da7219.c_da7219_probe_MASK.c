
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct da7219_priv {int supplies; int * mclk; scalar_t__ pdata; int regmap; int pll_lock; int ctrl_lock; struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_component*) ;
 scalar_t__ FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*) ;
 int VAR_22 ;
 int FUNC_8 (int ,char*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,unsigned int*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 struct da7219_priv* FUNC_15 (struct snd_soc_component*) ;
 int FUNC_16 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_17 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct snd_soc_component *VAR_23)
{
 struct da7219_priv *VAR_24 = FUNC_15(VAR_23);
 unsigned int VAR_25;
 int VAR_26;

 VAR_24->component = VAR_23;
 FUNC_11(&VAR_24->ctrl_lock);
 FUNC_11(&VAR_24->pll_lock);


 VAR_26 = FUNC_6(VAR_23);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_12(VAR_24->regmap, VAR_4, &VAR_25);
 if (VAR_26) {
  FUNC_8(VAR_23->dev, "Failed to read chip revision: %d\n", VAR_26);
  goto err_disable_reg;
 }

 switch (VAR_25 & VAR_3) {
 case 0:
  VAR_26 = FUNC_13(VAR_24->regmap, VAR_22,
         FUNC_0(VAR_22));
  if (VAR_26) {
   FUNC_8(VAR_23->dev, "Failed to register AA patch: %d\n",
    VAR_26);
   goto err_disable_reg;
  }
  break;
 default:
  break;
 }


 VAR_24->pdata = FUNC_9(VAR_23->dev);
 if (!VAR_24->pdata)
  VAR_24->pdata = FUNC_4(VAR_23);

 FUNC_5(VAR_23);


 VAR_24->mclk = FUNC_10(VAR_23->dev, "mclk");
 if (FUNC_1(VAR_24->mclk)) {
  if (FUNC_2(VAR_24->mclk) != -VAR_21) {
   VAR_26 = FUNC_2(VAR_24->mclk);
   goto err_disable_reg;
  } else {
   VAR_24->mclk = ((void*)0);
  }
 }


 VAR_26 = FUNC_7(VAR_23);
 if (VAR_26)
  return VAR_26;


 FUNC_16(VAR_23, VAR_18, VAR_19,
       VAR_19);


 FUNC_16(VAR_23, VAR_16,
       VAR_15,
       VAR_15);
 FUNC_16(VAR_23, VAR_0, VAR_1,
       VAR_1);
 FUNC_16(VAR_23, VAR_5, VAR_6,
       VAR_6);
 FUNC_16(VAR_23, VAR_7, VAR_8,
       VAR_8);
 FUNC_16(VAR_23, VAR_11,
       VAR_10,
       VAR_10);
 FUNC_16(VAR_23, VAR_14,
       VAR_13,
       VAR_13);


 FUNC_16(VAR_23, VAR_11,
       VAR_9,
       VAR_9);
 FUNC_16(VAR_23, VAR_14,
       VAR_12,
       VAR_12);


 FUNC_17(VAR_23, VAR_20, VAR_2);


 VAR_26 = FUNC_3(VAR_23);
 if (VAR_26)
  goto err_disable_reg;

 return 0;

err_disable_reg:
 FUNC_14(VAR_17, VAR_24->supplies);

 return VAR_26;
}
