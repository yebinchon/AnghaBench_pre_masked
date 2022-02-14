
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98095_priv {unsigned int sysclk; scalar_t__ mic2pre; scalar_t__ mic1pre; scalar_t__ lin_state; struct max98095_cdata* dai; scalar_t__ bq_textcnt; scalar_t__ eq_textcnt; int mclk; } ;
struct max98095_cdata {unsigned int rate; unsigned int fmt; scalar_t__ bq_sel; scalar_t__ eq_sel; } ;
struct i2c_client {scalar_t__ irq; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int VAR_27 ;
 int FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (scalar_t__,int *,int ,int,char*,struct snd_soc_component*) ;
 struct max98095_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ) ;
 int FUNC_10 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_11 (struct snd_soc_component*,int ,int) ;
 struct i2c_client* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_28)
{
 struct max98095_priv *VAR_29 = FUNC_8(VAR_28);
 struct max98095_cdata *VAR_30;
 struct i2c_client *VAR_31;
 int VAR_32 = 0;

 VAR_29->mclk = FUNC_3(VAR_28->dev, "mclk");
 if (FUNC_0(VAR_29->mclk) == -VAR_0)
  return -VAR_0;


 FUNC_6(VAR_28);

 VAR_31 = FUNC_12(VAR_28->dev);



 VAR_29->sysclk = (unsigned)-1;
 VAR_29->eq_textcnt = 0;
 VAR_29->bq_textcnt = 0;

 VAR_30 = &VAR_29->dai[0];
 VAR_30->rate = (unsigned)-1;
 VAR_30->fmt = (unsigned)-1;
 VAR_30->eq_sel = 0;
 VAR_30->bq_sel = 0;

 VAR_30 = &VAR_29->dai[1];
 VAR_30->rate = (unsigned)-1;
 VAR_30->fmt = (unsigned)-1;
 VAR_30->eq_sel = 0;
 VAR_30->bq_sel = 0;

 VAR_30 = &VAR_29->dai[2];
 VAR_30->rate = (unsigned)-1;
 VAR_30->fmt = (unsigned)-1;
 VAR_30->eq_sel = 0;
 VAR_30->bq_sel = 0;

 VAR_29->lin_state = 0;
 VAR_29->mic1pre = 0;
 VAR_29->mic2pre = 0;

 if (VAR_31->irq) {

  VAR_32 = FUNC_7(VAR_31->irq, ((void*)0),
   VAR_27,
   VAR_2 | VAR_3 |
   VAR_1, "max98095", VAR_28);
  if (VAR_32) {
   FUNC_1(VAR_28->dev, "Failed to request IRQ: %d\n", VAR_32);
   goto err_access;
  }
 }

 VAR_32 = FUNC_9(VAR_28, VAR_13);
 if (VAR_32 < 0) {
  FUNC_1(VAR_28->dev, "Failure reading hardware revision: %d\n",
   VAR_32);
  goto err_irq;
 }
 FUNC_2(VAR_28->dev, "Hardware revision: %c\n", VAR_32 - 0x40 + 'A');

 FUNC_11(VAR_28, VAR_12, VAR_20);

 FUNC_11(VAR_28, VAR_8,
  VAR_14|VAR_15);

 FUNC_11(VAR_28, VAR_9,
  VAR_16|VAR_17);

 FUNC_11(VAR_28, VAR_11, VAR_26);
 FUNC_11(VAR_28, VAR_7, VAR_18);
 FUNC_11(VAR_28, VAR_10, VAR_19);

 FUNC_11(VAR_28, VAR_4,
  VAR_21|VAR_24);

 FUNC_11(VAR_28, VAR_5,
  VAR_22|VAR_24);

 FUNC_11(VAR_28, VAR_6,
  VAR_23|VAR_24);

 FUNC_5(VAR_28);


 FUNC_10(VAR_28, VAR_12, VAR_25,
  VAR_25);

 return 0;

err_irq:
 if (VAR_31->irq)
  FUNC_4(VAR_31->irq, VAR_28);
err_access:
 return VAR_32;
}
