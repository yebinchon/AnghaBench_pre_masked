
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct tlv320dac33_priv {scalar_t__ power_gpio; int mode1_latency; TYPE_3__* supplies; int fifo_mode; int irq; int keep_bclk; int burst_bclkdiv; int lock; int mutex; struct i2c_client* i2c; int reg_cache; } ;
struct tlv320dac33_platform_data {scalar_t__ power_gpio; int mode1_latency; int keep_bclk; int burst_bclkdiv; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct tlv320dac33_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;
struct TYPE_11__ {int supply; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int,int ) ;
 struct tlv320dac33_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (struct i2c_client*,struct tlv320dac33_priv*) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_8,
      const struct i2c_device_id *VAR_9)
{
 struct tlv320dac33_platform_data *VAR_10;
 struct tlv320dac33_priv *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8->dev.platform_data == ((void*)0)) {
  FUNC_1(&VAR_8->dev, "Platform data not set\n");
  return -VAR_1;
 }
 VAR_10 = VAR_8->dev.platform_data;

 VAR_11 = FUNC_3(&VAR_8->dev, sizeof(struct tlv320dac33_priv),
        VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_2;

 VAR_11->reg_cache = FUNC_2(&VAR_8->dev,
     VAR_5,
     FUNC_0(VAR_5) * sizeof(u8),
     VAR_3);
 if (!VAR_11->reg_cache)
  return -VAR_2;

 VAR_11->i2c = VAR_8;
 FUNC_10(&VAR_11->mutex);
 FUNC_11(&VAR_11->lock);

 FUNC_9(VAR_8, VAR_11);

 VAR_11->power_gpio = VAR_10->power_gpio;
 VAR_11->burst_bclkdiv = VAR_10->burst_bclkdiv;
 VAR_11->keep_bclk = VAR_10->keep_bclk;
 VAR_11->mode1_latency = VAR_10->mode1_latency;
 if (!VAR_11->mode1_latency)
  VAR_11->mode1_latency = 10000;
 VAR_11->irq = VAR_8->irq;

 VAR_11->fifo_mode = VAR_0;


 if (VAR_11->power_gpio >= 0) {
  VAR_12 = FUNC_8(VAR_11->power_gpio, "tlv320dac33 reset");
  if (VAR_12 < 0) {
   FUNC_1(&VAR_8->dev,
    "Failed to request reset GPIO (%d)\n",
    VAR_11->power_gpio);
   goto err_gpio;
  }
  FUNC_6(VAR_11->power_gpio, 0);
 }

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11->supplies); VAR_13++)
  VAR_11->supplies[VAR_13].supply = VAR_6[VAR_13];

 VAR_12 = FUNC_4(&VAR_8->dev, FUNC_0(VAR_11->supplies),
     VAR_11->supplies);

 if (VAR_12 != 0) {
  FUNC_1(&VAR_8->dev, "Failed to request supplies: %d\n", VAR_12);
  goto err_get;
 }

 VAR_12 = FUNC_5(&VAR_8->dev,
   &VAR_7, &VAR_4, 1);
 if (VAR_12 < 0)
  goto err_get;

 return VAR_12;
err_get:
 if (VAR_11->power_gpio >= 0)
  FUNC_7(VAR_11->power_gpio);
err_gpio:
 return VAR_12;
}
