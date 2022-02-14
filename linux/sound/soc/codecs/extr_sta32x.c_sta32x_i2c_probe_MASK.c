
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sta32x_priv {int * regmap; TYPE_1__* supplies; int * gpiod_nreset; int * xti_clk; int pdata; int coeff_lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_3__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*) ;
 int * FUNC_5 (struct device*,char*) ;
 int * FUNC_6 (struct device*,char*,int ) ;
 struct sta32x_priv* FUNC_7 (struct device*,int,int ) ;
 int * FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct device*,int,TYPE_1__*) ;
 int FUNC_10 (struct device*,int *,int *,int) ;
 int FUNC_11 (struct i2c_client*,struct sta32x_priv*) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct device*,struct sta32x_priv*) ;
 int VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct sta32x_priv *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_7(&VAR_8->dev, sizeof(struct sta32x_priv),
         VAR_2);
 if (!VAR_11)
  return -VAR_0;

 FUNC_12(&VAR_11->coeff_lock);
 VAR_11->pdata = FUNC_4(VAR_10);
 VAR_11->xti_clk = FUNC_5(VAR_10, "xti");
 if (FUNC_1(VAR_11->xti_clk)) {
  VAR_12 = FUNC_2(VAR_11->xti_clk);

  if (VAR_12 == -VAR_1)
   return VAR_12;

  VAR_11->xti_clk = ((void*)0);
 }


 VAR_11->gpiod_nreset = FUNC_6(VAR_10, "reset",
             VAR_3);
 if (FUNC_1(VAR_11->gpiod_nreset))
  return FUNC_2(VAR_11->gpiod_nreset);


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11->supplies); VAR_13++)
  VAR_11->supplies[VAR_13].supply = VAR_7[VAR_13];

 VAR_12 = FUNC_9(&VAR_8->dev, FUNC_0(VAR_11->supplies),
          VAR_11->supplies);
 if (VAR_12 != 0) {
  FUNC_3(&VAR_8->dev, "Failed to request supplies: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11->regmap = FUNC_8(VAR_8, &VAR_6);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_12 = FUNC_2(VAR_11->regmap);
  FUNC_3(VAR_10, "Failed to init regmap: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_11(VAR_8, VAR_11);

 VAR_12 = FUNC_10(VAR_10, &VAR_4,
           &VAR_5, 1);
 if (VAR_12 < 0)
  FUNC_3(VAR_10, "Failed to register component (%d)\n", VAR_12);

 return VAR_12;
}
