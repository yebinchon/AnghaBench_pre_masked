
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;
struct da7218_priv {scalar_t__ dev_id; int regmap; int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct da7218_priv* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int) ;
 int FUNC_7 (struct i2c_client*,struct da7218_priv*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_8,
       const struct i2c_device_id *VAR_9)
{
 struct da7218_priv *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 FUNC_7(VAR_8, VAR_10);

 if (VAR_8->dev.of_node)
  VAR_10->dev_id = FUNC_2(&VAR_8->dev);
 else
  VAR_10->dev_id = VAR_9->driver_data;

 if ((VAR_10->dev_id != VAR_0) &&
     (VAR_10->dev_id != VAR_1)) {
  FUNC_3(&VAR_8->dev, "Invalid device Id\n");
  return -VAR_2;
 }

 VAR_10->irq = VAR_8->irq;

 VAR_10->regmap = FUNC_5(VAR_8, &VAR_6);
 if (FUNC_0(VAR_10->regmap)) {
  VAR_11 = FUNC_1(VAR_10->regmap);
  FUNC_3(&VAR_8->dev, "regmap_init() failed: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_6(&VAR_8->dev,
   &VAR_7, &VAR_5, 1);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_8->dev, "Failed to register da7218 component: %d\n",
   VAR_11);
 }
 return VAR_11;
}
