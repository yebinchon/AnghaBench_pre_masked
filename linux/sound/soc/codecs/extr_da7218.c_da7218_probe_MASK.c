
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* dev; } ;
struct da7218_priv {scalar_t__ dev_id; int supplies; scalar_t__ irq; int * mclk; int pdata; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int VAR_39 ;
 int FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (TYPE_1__*,char*,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int *,int ,int,char*,struct snd_soc_component*) ;
 int FUNC_9 (int ,int ) ;
 struct da7218_priv* FUNC_10 (struct snd_soc_component*) ;
 int FUNC_11 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_12 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_40)
{
 struct da7218_priv *VAR_41 = FUNC_10(VAR_40);
 int VAR_42;


 VAR_42 = FUNC_3(VAR_40);
 if (VAR_42)
  return VAR_42;


 if (VAR_40->dev->of_node)
  VAR_41->pdata = FUNC_4(VAR_40);
 else
  VAR_41->pdata = FUNC_6(VAR_40->dev);

 FUNC_2(VAR_40);


 VAR_41->mclk = FUNC_7(VAR_40->dev, "mclk");
 if (FUNC_0(VAR_41->mclk)) {
  if (FUNC_1(VAR_41->mclk) != -VAR_36) {
   VAR_42 = FUNC_1(VAR_41->mclk);
   goto err_disable_reg;
  } else {
   VAR_41->mclk = ((void*)0);
  }
 }


 FUNC_12(VAR_40, VAR_33, VAR_34);





 FUNC_12(VAR_40, VAR_6, 0);
 FUNC_12(VAR_40, VAR_7, 0);


 FUNC_11(VAR_40, VAR_2,
       VAR_3, 0);


 FUNC_11(VAR_40, VAR_25,
       VAR_24,
       VAR_24);
 FUNC_11(VAR_40, VAR_27,
       VAR_26,
       VAR_26);
 FUNC_11(VAR_40, VAR_16,
       VAR_17,
       VAR_17);
 FUNC_11(VAR_40, VAR_18,
       VAR_19,
       VAR_19);
 FUNC_11(VAR_40, VAR_20,
       VAR_21,
       VAR_21);
 FUNC_11(VAR_40, VAR_22,
       VAR_23,
       VAR_23);
 FUNC_11(VAR_40, VAR_4,
       VAR_5, VAR_5);
 FUNC_11(VAR_40, VAR_29,
       VAR_30,
       VAR_30);
 FUNC_11(VAR_40, VAR_31,
       VAR_32,
       VAR_32);
 FUNC_11(VAR_40, VAR_13,
       VAR_12,
       VAR_12);
 FUNC_11(VAR_40, VAR_15,
       VAR_14,
       VAR_14);


 FUNC_12(VAR_40, VAR_35, VAR_1);


 if (VAR_41->dev_id == VAR_0) {
  FUNC_11(VAR_40, VAR_11,
        VAR_10,
        VAR_10);


  FUNC_12(VAR_40, VAR_8,
         VAR_9);
 }

 if (VAR_41->irq) {
  VAR_42 = FUNC_8(VAR_40->dev, VAR_41->irq, ((void*)0),
      VAR_39,
      VAR_38 | VAR_37,
      "da7218", VAR_40);
  if (VAR_42 != 0) {
   FUNC_5(VAR_40->dev, "Failed to request IRQ %d: %d\n",
    VAR_41->irq, VAR_42);
   goto err_disable_reg;
  }

 }

 return 0;

err_disable_reg:
 FUNC_9(VAR_28, VAR_41->supplies);

 return VAR_42;
}
