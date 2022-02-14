
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hp_pol; } ;
struct wm5100_priv {TYPE_1__ pdata; struct snd_soc_component* component; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ,char*) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct wm5100_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int *,int) ;
 struct i2c_client* FUNC_8 (int ) ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_6)
{
 struct snd_soc_dapm_context *VAR_7 = FUNC_3(VAR_6);
 struct i2c_client *VAR_8 = FUNC_8(VAR_6->dev);
 struct wm5100_priv *VAR_9 = FUNC_4(VAR_6);
 int VAR_10, VAR_11;

 VAR_9->component = VAR_6;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++)
  FUNC_5(VAR_6, VAR_5[VAR_11], VAR_3,
        VAR_3);


 FUNC_6(VAR_6, VAR_1, 0);
 FUNC_6(VAR_6, VAR_2, 0);



 if (VAR_8->irq)
  FUNC_7(VAR_7, VAR_4,
       FUNC_0(VAR_4));

 if (VAR_9->pdata.hp_pol) {
  VAR_10 = FUNC_2(VAR_9->pdata.hp_pol,
           VAR_0, "WM5100 HP_POL");
  if (VAR_10 < 0) {
   FUNC_1(&VAR_8->dev, "Failed to request HP_POL %d: %d\n",
    VAR_9->pdata.hp_pol, VAR_10);
   goto err_gpio;
  }
 }

 return 0;

err_gpio:

 return VAR_10;
}
