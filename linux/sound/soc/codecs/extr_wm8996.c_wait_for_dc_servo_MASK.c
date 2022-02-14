
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8996_priv {int dcs_done; } ;
struct snd_soc_component {int dev; } ;
struct i2c_client {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct wm8996_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;
 struct i2c_client* FUNC_7 (int ) ;
 unsigned long FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_1, u16 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_7(VAR_1->dev);
 struct wm8996_priv *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;
 unsigned long VAR_6 = 200;

 FUNC_6(VAR_1, VAR_0, VAR_2);


 do {
  if (VAR_3->irq) {
   VAR_6 = FUNC_8(&VAR_4->dcs_done,
             FUNC_2(200));
   if (VAR_6 == 0)
    FUNC_1(VAR_1->dev, "DC servo timed out\n");

  } else {
   FUNC_3(1);
   VAR_6--;
  }

  VAR_5 = FUNC_5(VAR_1, VAR_0);
  FUNC_0(VAR_1->dev, "DC servo state: %x\n", VAR_5);
 } while (VAR_6 && VAR_5 & VAR_2);

 if (VAR_6 == 0)
  FUNC_1(VAR_1->dev, "DC servo timed out for %x\n", VAR_2);
 else
  FUNC_0(VAR_1->dev, "DC servo complete for %x\n", VAR_2);
}
