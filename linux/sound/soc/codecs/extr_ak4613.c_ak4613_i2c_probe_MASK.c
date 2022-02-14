
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int dummy; } ;
struct regmap {int dummy; } ;
struct of_device_id {struct regmap_config* data; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;
struct ak4613_priv {int lock; int dummy_write_work; scalar_t__ sysclk; scalar_t__ cnt; int * iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ak4613_priv*,struct device*) ;
 struct ak4613_priv* FUNC_4 (struct device*,int,int ) ;
 struct regmap* FUNC_5 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_6 (struct device*,int *,int *,int) ;
 int FUNC_7 (struct i2c_client*,struct ak4613_priv*) ;
 int FUNC_8 (int *) ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7,
       const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 const struct regmap_config *VAR_11;
 struct regmap *VAR_12;
 struct ak4613_priv *VAR_13;

 VAR_11 = ((void*)0);
 if (VAR_10) {
  const struct of_device_id *VAR_14;

  VAR_14 = FUNC_9(VAR_5, VAR_9);
  if (VAR_14)
   VAR_11 = VAR_14->data;
 } else {
  VAR_11 = (const struct regmap_config *)VAR_8->driver_data;
 }

 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_9, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_3(VAR_13, VAR_9);

 VAR_13->iface = ((void*)0);
 VAR_13->cnt = 0;
 VAR_13->sysclk = 0;
 FUNC_0(&VAR_13->dummy_write_work, VAR_4);

 FUNC_8(&VAR_13->lock);

 FUNC_7(VAR_7, VAR_13);

 VAR_12 = FUNC_5(VAR_7, VAR_11);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);

 return FUNC_6(VAR_9, &VAR_6,
          &VAR_3, 1);
}
