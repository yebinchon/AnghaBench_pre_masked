
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct of_device_id {struct ak4642_drvdata* data; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;
typedef struct regmap clk ;
struct ak4642_priv {struct regmap* mcko; struct ak4642_drvdata const* drvdata; } ;
struct ak4642_drvdata {int regmap_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct regmap* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct ak4642_priv* FUNC_4 (struct device*,int,int ) ;
 struct regmap* FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct device*,int *,int *,int) ;
 int FUNC_7 (struct i2c_client*,struct ak4642_priv*) ;
 struct of_device_id* FUNC_8 (int ,struct device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
       const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 const struct ak4642_drvdata *VAR_10 = ((void*)0);
 struct regmap *VAR_11;
 struct ak4642_priv *VAR_12;
 struct clk *VAR_13 = ((void*)0);

 if (VAR_9) {
  const struct of_device_id *VAR_14;

  VAR_13 = FUNC_2(VAR_8);
  if (FUNC_0(VAR_13))
   VAR_13 = ((void*)0);

  VAR_14 = FUNC_8(VAR_4, VAR_8);
  if (VAR_14)
   VAR_10 = VAR_14->data;
 } else {
  VAR_10 = (const struct ak4642_drvdata *)VAR_7->driver_data;
 }

 if (!VAR_10) {
  FUNC_3(VAR_8, "Unknown device type\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_4(VAR_8, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->drvdata = VAR_10;
 VAR_12->mcko = VAR_13;

 FUNC_7(VAR_6, VAR_12);

 VAR_11 = FUNC_5(VAR_6, VAR_10->regmap_config);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 return FUNC_6(VAR_8,
    &VAR_5, &VAR_3, 1);
}
