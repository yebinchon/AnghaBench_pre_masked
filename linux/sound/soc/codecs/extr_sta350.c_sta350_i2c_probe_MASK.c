
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sta350_priv {void* regmap; TYPE_1__* supplies; void* gpiod_power_down; void* gpiod_nreset; int pdata; int coeff_lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_3__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 struct sta350_priv* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct device*,int,TYPE_1__*) ;
 int FUNC_9 (struct device*,int *,int *,int) ;
 int FUNC_10 (struct i2c_client*,struct sta350_priv*) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (struct device*,struct sta350_priv*) ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_7,
       const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct sta350_priv *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_6(VAR_9, sizeof(struct sta350_priv), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_11(&VAR_10->coeff_lock);
 VAR_10->pdata = FUNC_4(VAR_9);
 VAR_10->gpiod_nreset = FUNC_5(VAR_9, "reset",
             VAR_2);
 if (FUNC_1(VAR_10->gpiod_nreset))
  return FUNC_2(VAR_10->gpiod_nreset);

 VAR_10->gpiod_power_down = FUNC_5(VAR_9, "power-down",
          VAR_2);
 if (FUNC_1(VAR_10->gpiod_power_down))
  return FUNC_2(VAR_10->gpiod_power_down);


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->supplies); VAR_12++)
  VAR_10->supplies[VAR_12].supply = VAR_6[VAR_12];

 VAR_11 = FUNC_8(VAR_9, FUNC_0(VAR_10->supplies),
          VAR_10->supplies);
 if (VAR_11 < 0) {
  FUNC_3(VAR_9, "Failed to request supplies: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10->regmap = FUNC_7(VAR_7, &VAR_5);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_11 = FUNC_2(VAR_10->regmap);
  FUNC_3(VAR_9, "Failed to init regmap: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_10(VAR_7, VAR_10);

 VAR_11 = FUNC_9(VAR_9, &VAR_3, &VAR_4, 1);
 if (VAR_11 < 0)
  FUNC_3(VAR_9, "Failed to register component (%d)\n", VAR_11);

 return VAR_11;
}
