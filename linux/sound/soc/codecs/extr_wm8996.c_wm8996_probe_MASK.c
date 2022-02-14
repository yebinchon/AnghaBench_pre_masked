
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_flags; scalar_t__ num_retune_mobile_cfgs; } ;
struct wm8996_priv {TYPE_1__ pdata; int fll_lock; int dcs_done; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *,int ,int,char*,struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;
 struct wm8996_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int ) ;
 struct i2c_client* FUNC_7 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_14)
{
 int VAR_15;
 struct wm8996_priv *VAR_16 = FUNC_5(VAR_14);
 struct i2c_client *VAR_17 = FUNC_7(VAR_14->dev);
 int VAR_18;

 VAR_16->component = VAR_14;

 FUNC_2(&VAR_16->dcs_done);
 FUNC_2(&VAR_16->fll_lock);

 if (VAR_16->pdata.num_retune_mobile_cfgs)
  FUNC_8(VAR_14);
 else
  FUNC_4(VAR_14, VAR_12,
         FUNC_0(VAR_12));

 if (VAR_17->irq) {
  if (VAR_16->pdata.irq_flags)
   VAR_18 = VAR_16->pdata.irq_flags;
  else
   VAR_18 = VAR_2;

  VAR_18 |= VAR_0;

  if (VAR_18 & (VAR_3 | VAR_1))
   VAR_15 = FUNC_3(VAR_17->irq, ((void*)0),
         VAR_11,
         VAR_18, "wm8996", VAR_14);
  else
   VAR_15 = FUNC_3(VAR_17->irq, ((void*)0), VAR_13,
         VAR_18, "wm8996", VAR_14);

  if (VAR_15 == 0) {

   FUNC_6(VAR_14, VAR_9,
         VAR_8, 0);


   FUNC_6(VAR_14,
         VAR_10,
         VAR_5 |
         VAR_4 |
         VAR_7 |
         VAR_6,
         0);
  } else {
   FUNC_1(VAR_14->dev, "Failed to request IRQ: %d\n",
    VAR_15);
   return VAR_15;
  }
 }

 return 0;
}
